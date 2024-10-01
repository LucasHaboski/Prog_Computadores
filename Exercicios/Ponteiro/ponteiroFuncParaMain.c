// Exemplo criado pelo chat GPT apenas para fins de resumo da matéria, exemplifica como uma função retorna
// um ponteiro, interessante para fazer alocação de memória em uma função

#include <stdio.h>
#include <stdlib.h>  // Para usar malloc

int* criarArray(int tamanho) {
    int *arr = (int *) malloc(tamanho * sizeof(int));  // Aloca memória dinamicamente
    
    if (arr == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("Erro na alocação de memória\n");
        return NULL;
    }

    for (int i = 0; i < tamanho; i++) {
        arr[i] = i * 2;  // Inicializa o array com valores
    }
    
    return arr;  // Retorna o ponteiro para o array
}

int main() {
    int tamanho = 5;
    int *array = criarArray(tamanho);  // Recebe o ponteiro retornado pela função

    if (array != NULL) {
        printf("Array criado: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        
        free(array);  // Libera a memória alocada
    }

    return 0;
}
