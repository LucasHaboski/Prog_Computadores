// Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne um ponteiro. 
// Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor. 
// Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. 
// Ao final, crie uma função principal que leia um valor n e chame a função criada acima. 
// Depois, a função principal deve ler os n elementos desse vetor. Então, a função principal deve chamar 
// a função de impressão dos n elementos do vetor criado e, finalmente, liberar a memória alocada 
// através da função criada para liberação.

#include <stdio.h>
#include <stdlib.h>

// Função para ler tamanho do vetor e alocar dinamicamente na memória
int* vetor(int tamanho){
    int *ptr = (int *) calloc (tamanho, sizeof(int));
    return ptr;
}

void mostraVetor (int *ptr, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Numero do vetor [%d]: %d\n", i+1, ptr[i]);
    }
}

void liberaMemoria (int *ptr){
    free(ptr);
}

int main(){

    int tamanho;

    printf("Digite o tamanho do vetor desejado: ");
    scanf("%d", &tamanho);

    int *p = vetor(tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("Digite um numero para o vetor [%d]: ", i+1);
        scanf("%d", &p[i]);
    }

    mostraVetor(p, tamanho);

    liberaMemoria(p);

    return 0;
}