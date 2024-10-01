// Escreva um programa que peça ao usuário para especificar o tamanho de um vetor de inteiros e, em seguida, aloque dinamicamente memória para esse vetor. 
// Preencha o vetor com números aleatórios e, em seguida, imprima os valores.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL)); //Gerando numeros aleatórios com base no tempo atual

    int tamanho, *p, i;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tamanho);

    p = (int *) calloc (tamanho, sizeof(int));

    for(i = 0; i < tamanho; i++){
        p[i] = rand() % 100; //Criando um numero aleatório entre 0 e 100
    }

    printf("=====================================\n");

    for(i = 0; i < tamanho; i++){
        printf("Valor da posicao [%d]: %d\n", i+1, p[i]);
    }

    free(p);
    return 0;
}