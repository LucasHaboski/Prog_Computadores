// realloc é utilizado para redimensionar um epaço alocado previamente com malloc ou calloc.
// A função modifica o tamanho da memória previamente alocada e aponta por *ptr para aquele especificado por num.
// podendo ser maior ou menor que o tamanho original

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int *p = calloc(5, sizeof(int));

    for (i = 0; i < 5; i++){
        p[i] = i+1;
    }
    for (i = 0; i < 5; i++){
        printf("%d\n", p[i]);
    }
    printf("\n\n");
    
    // Diminuindo o tamanho do Array
    p = realloc(p, 3*sizeof(int));
    for (i = 0; i < 3; i++){
        printf("%d\n", p[i]);
    }
    printf("\n");

    // Aumentando o tamanho do Array
    p = realloc(p, 10*sizeof(int));
    for (i = 0; i < 10; i++){
        printf("%d\n", p[i]);
    }    

    free(p);
    return 0;

//OBS : se *ptr for nulo, aloca o NUM byter e devolve um ponteiro(malloc)
// Se NUM é zero, a memória apontada por *ptr é liberada (igual ao free).
// Se não houver memória suficiente para a alocação, um ponteiro nulo é devolvido e o bloco original é deixado inalterado.
}