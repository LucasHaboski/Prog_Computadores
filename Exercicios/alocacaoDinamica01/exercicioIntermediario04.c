// Faça um programa que leia um número N e:
//    1. Crie dinamicamente e leia um vetor de inteiro de N posições;
//    2. Leia um numero inteiro X e conte e mostre os múltiplos desse número que existem no vetor.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho, *p, i, multiplo;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tamanho);

    p = (int *) calloc (tamanho, sizeof(int));

    printf("===========================\n");

    for (i = 0; i < tamanho; i++){
        printf("Digite um valor para a posicao [%d]: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("===========================\n");

    printf("Digite um numero para mostrar seus multiplos: ");
    scanf("%d", &multiplo);

    for (i = 0; i < tamanho; i++){
        if(p[i] % multiplo == 0){
            printf("%d eh multiplo de %d, numero no vetor [%d]\n", p[i], multiplo, i+1);
        }
    }

    free(p);
    return 0;
}