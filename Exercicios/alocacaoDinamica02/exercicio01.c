// Desenvolva um programa que calcule a soma de duas matrizes M x N de números reais (double).
// A implementação deste programa deve considerar as dimensões fornecida pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, linha, coluna;

    printf("Digite a quantidade de linha e coluna que deseja na sua matriz: ");
    scanf("%d %d", &linha, &coluna);

    double **m, **n, contM=0.0, contN=0.0;

    m = (double **) calloc (linha, sizeof(double *));

    // Lendo a primeira matriz
    printf("==============================\n");
    printf("     PRIMEIRA MATRIZ\n");
    printf("==============================\n");

    for(i = 0; i < linha; i++){
        m[i] = (double *) calloc (coluna, sizeof(double));
        for(j = 0; j < coluna; j++){
            printf("Digite o valor de [%d][%d]: ", i+1, j+1);
            scanf("%lf", &m[i][j]);

            contM += m[i][j];
        }
        printf("==============================\n");
    }

    n = (double **) calloc (linha, sizeof(double *));

    // Lendo a segunda matriz
    printf("\n\n==============================\n");
    printf("     SEGUNDA MATRIZ\n");
    printf("==============================\n");

    for(i = 0; i < linha; i++){
        n[i] = (double *) calloc (coluna, sizeof(double));
        for(j = 0; j < coluna; j++){
            printf("Digite o valor de [%d][%d]: ", i+1, j+1);
            scanf("%lf", &n[i][j]);

            contN += n[i][j];
        }
        printf("==============================\n");
    }

    printf("PRIMEIRA MATRIZ:\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%.1lf ", m[i][j]);
        }
        printf("\n");
    }

    printf("==============================\n");

    printf("SEGUNDA MATRIZ:\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%.1lf ", n[i][j]);
        }
        printf("\n");
    }

    printf("==============================\n\n");
    printf("A soma de todos os elementos da matriz M [%.2lf] + N [%.2lf] = %.2lf\n", contM, contN, contM+contN);

    for(i = 0; i < linha; i++){
        free(m[i]);
        free(n[i]);
    }
    free(m);
    free(n);
    return 0;
}