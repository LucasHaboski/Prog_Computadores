// Faça um programa onde você declare um inteiro, um real e um char.
// Depois faça um ponteiro para inteiro, real e char, associe as variaveis para os ponteiros
// imprima os valores das variaveis antes e depois.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 20;
    float num2 = 77.8;
    char letra = 'T';

    printf("Valor do inteiro: %d\n", num);
    printf("Valor do real: %.2f\n", num2);
    printf("Valor do char: %c\n\n", letra);

    int *inteiro = &num;
    float *real = &num2;
    char *letter = &letra;

    printf("Valor do ponteiro inteiro: %d\n", *inteiro);
    printf("Valor do ponteiro real: %.2f\n", *real);
    printf("Valor do ponteiro char: %c\n\n", *letter);

    printf("Endereco do ponteiro inteiro: %p\n", inteiro);
    printf("Endereco do ponteiro real: %p\n", real);
    printf("Endereco do ponteiro char: %p", letter);

    return 0;
}