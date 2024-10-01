// Escreva um programa em C que pede ao usuário para inserir o número de linhas e colunas de uma matriz bidimensional. 
//Em seguida, aloque dinamicamente a matriz e peça ao usuário para inserir os elementos da matriz. 
//Finalmente, calcule e imprima a soma de todos os elementos da matriz

#include <stdio.h>
#include <stdlib.h>

int main(){

    int **p; //ponteiro de ponteiro
    int i, j, linha, col, somaTotal = 0;

    printf("Digite quantas linhas deseja na matriz: ");
    scanf("%d", &linha);

    printf("Digite quantas colunas deseja na matriz: ");
    scanf("%d", &col);

    p = (int **) calloc(linha, sizeof(int *));

    printf("\n======================================\n");

    for(i = 0; i < linha; i++){
        p[i] = (int *) calloc (col, sizeof(int));
        printf("\n");
        for(j = 0; j < col; j++){
            printf("Digite o valor referente a [%d][%d]: ", i+1, j+1);
            scanf("%d", &p[i][j]);
            somaTotal += p[i][j];
        }
    }

    printf("\n========================================================\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < col; j++){
            printf("%d   ", p[i][j]);
        }
        printf("\n");
    }
    printf("========================================================\n");

    printf("\nA soma de todos os elementos da matriz eh: %d", somaTotal);

    for(i = 0; i < linha; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}
