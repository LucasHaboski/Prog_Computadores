// Peça ao usuário para inserir uma string e, em seguida, aloque dinamicamente memória para armazenar uma cópia dessa string.
// Imprima a cópia da string na tela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[200], *p;

    printf("Digite uma palavra para ser alocada dinamicamente: ");
    fgets(palavra, sizeof(palavra), stdin);

    int tamanhoPalavra = sizeof(palavra);

    p = (char *) calloc (tamanhoPalavra, sizeof(char));

    strcpy(p, palavra);

    for(int i=0; i < tamanhoPalavra; i++){
        printf("%c", p[i]);
    }

    free(p);
    return 0;
}