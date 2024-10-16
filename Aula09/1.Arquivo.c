#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declarando um ponteiro para o arquivo
    FILE *arquivo;

    // Abrindo um arquivo para escrita (w) write - cria um novo arquivo ou subscreve o existente
    arquivo = fopen("exemplo.txt", "w");

    return 0;
}