// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   int *pointer;
   int x = 1500;
   
   pointer = &x;
   
   printf("\nEndereço do ponteiro aponta: %i", pointer);
   printf("\nEndereço do Pointer: %i", &pointer);
   
   printf("\nValor do endereço para onde pointer aponta: %i", *pointer);
   
   printf("\nEndereço da variavel X: %i", &x);
   
   return 0;
}