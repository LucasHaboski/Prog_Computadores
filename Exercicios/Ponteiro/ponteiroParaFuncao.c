// Exemplo criado pelo chat GPT apenas para fins de resumo da matéria, exemplifica como passar um ponteiro
// para uma função.

#include <stdio.h>

void alterarValor(int *p) {
    *p = 100;  // Modifica o valor do endereço para o qual o ponteiro aponta
}

int main() {
    int num = 10;
    printf("Antes da funcao: %d\n", num);
    
    alterarValor(&num);  // Passando o endereço de 'num' para a função
    
    printf("Depois da funcao: %d\n", num);
    return 0;
}
