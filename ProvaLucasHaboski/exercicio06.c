#include <stdio.h>
#include <stdlib.h>

int main (){

    // Tópico a)
    
    int tamanho, i;

    printf("Digite quantos usuarios deseja cadastrar: ");
    scanf("%d", &tamanho);

    int *id = (int *) malloc (tamanho * sizeof(int));

    for(i = 0; i < tamanho; i++){
        printf("Digite o ID do usuario [%d]: ", i+1);
        scanf("%d", &id[i]);
    }

    // Tópico b)
    int incremento;
    printf("\nDigite quantos usuarios deseja cadastrar mais: ");
    scanf("%d", &incremento);

    if (incremento > 0){
        id = (int *) realloc (id, (tamanho + incremento) * sizeof(int)); //Definindo o novo tamanho do vetor

        for(i = tamanho; i < tamanho+incremento; i++){
            printf("Digite o ID do usuario [%d]: ", i+1);
            scanf("%d", &id[i]);
        }
    }
    // Tópico c)
    printf("\n\nApos o redimensionamento, sua lista ficara assim: \n\n");
    for (i = 0; i < tamanho+incremento; i++){
        printf("ID do usuario [%d] = %d\n", i+1, id[i]);
    }

    // Tópic d)
    free(id);

    return 0;
}