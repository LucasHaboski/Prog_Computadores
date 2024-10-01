// Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos 
// e passe esse vetor para uma função que vai ler os elementos desse vetor. 
// Depois, no programa principal, o vetor preenchido deve ser impresso.
// Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada.

#include <stdio.h>
#include <stdlib.h>

void preencher(int *ptr, int tam){
    for (int i = 0; i < tam; i++){
        printf("Digite o valor do vetor [%d]: ", i+1);
        scanf("%d", &ptr[i]);
    }
}

int main(){

    int tamanho, *p;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tamanho);

    p = (int *) calloc (tamanho, sizeof(int));

    printf("==================================\n");

    preencher(p, tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("Numero na posicao [%d]: %d\n", i+1, p[i]);
    }

    free(p);
    return 0;
}