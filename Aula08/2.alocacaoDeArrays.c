#include <stdio.h>
#include <stdlib.h>

int main(){
    int **p; // ponteiro de ponteiro
    int i, j, num = 3;

    p = (int **) calloc(num, sizeof(int *));

    for (i = 0; i < num; i++){
        p[i] = (int *) calloc(num, sizeof(int));
        for(j = 0; j < num; j++){
            scanf("%d", &p[i][j]);
        }
    }

    // Para liberar um array com mais de uma dimensão é preciso liberar a memória alocada em cada uma de suas dimensões.
    // De ordem inversa da que fo alocada.
    for (i = 0; i < num; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}