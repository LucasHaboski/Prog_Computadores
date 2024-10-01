// Faça um programa que use malloc para alocar um array de inteiros de tamanho n,
// que é fornecido pelo usuario, preencha o arrya e depois redimensione o array com
// valores fornecidos pelo usuario, onde m é o numero de espaço adicional, preencha e 
// imprima os novos espaços, ao final libere o espaço alocado

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho, *vetor, novoTamanho, i;

    printf("Digite o tamanho do array desejado: ");
    scanf("%d", &tamanho);

    printf("====================================\n");

    vetor = (int *) malloc (tamanho * sizeof(int));

    for(i=0; i < tamanho; i++){
        printf("Digite o valor do vetor [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("====================================\n");

    printf("Digite quantos valores deseja adicionar no vetor: ");
    scanf("%d", &novoTamanho);

    printf("====================================\n");

    vetor = (int *) realloc(vetor, (tamanho+novoTamanho) * sizeof(int));

    for (i = tamanho; i < tamanho+novoTamanho; i++){
        printf("Digite o valor do vetor [%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("====================================\n");
    printf("       VALORES CADASTRADOS!\n");
    printf("====================================\n\n");

    for (i = 0; i < tamanho+novoTamanho; i++){
        printf("Valor do vetor [%d]: %d\n", i+1, vetor[i]);
    }

    free(vetor);
    return 0;
}