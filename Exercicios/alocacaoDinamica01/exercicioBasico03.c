// Crie um programa que:
//    1. Aloque dinamicamente um ponteiro de 5 números inteiros;
//    2. Peça para o usuário digitar os 5 números no espaço alocado;
//    3. Mostre na tela os 5 números;
//    4. Libere a memoria alocada;

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, *p;

    p = (int *) calloc (5, sizeof(int));

    for (i = 0; i < 5; i++){
        printf("Digite o numero [%d]: ", i+1);
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 5; i++){
        printf("\nNumero [%d]: %d", i+1, p[i]);
    }

    free(p);
    return 0;
}