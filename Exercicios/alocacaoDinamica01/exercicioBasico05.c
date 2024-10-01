//Faca um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória. 
// Em seguida, leia do usuário seus valores e mostre quantos dos números são pares e quantos são  ímpares;

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho, i, *p, contPar=0, contImpar=0;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tamanho);

    printf("teste.html");

    p = (int *) calloc (tamanho, sizeof(int));

    for(i = 0; i < tamanho; i++){
        printf("Digite o valor da posicao [%d]: ", i+1);
        scanf("%d", &p[i]);

        if(p[i] % 2 == 0){
            contPar++;
        }else{
            contImpar++;
        }
    }

    printf("=================================\n");

    for(i=0; i<tamanho; i++){
        printf("Valor da posicao [%d]: %d\n", i+1, p[i]);
    }

    printf("Quantidade de numeros pares no vetor: %d\n", contPar);
    printf("Quantidade de numeros impares no vetor: %d", contImpar);

    free(p);
    return 0;
}