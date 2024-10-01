// Exemplo basico de chamada recursiva

#include <stdio.h>

int fatorial(int num){
    if (num == 0){
        return 1; // Caso base
    }

    return num * fatorial(num -1);
}

int main(){

    int num;

    printf("Digite um numero e descubra o seu fatorial: ");
    scanf("%d", &num);

    printf("O fatorial de %d eh: %d", num, fatorial(num));

    return 0;
}