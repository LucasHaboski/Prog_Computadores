//Crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão.

#include <stdio.h>

int contagem_num(int n, int digi){

    if(n/10 <= 0){
        return digi+1;
    }
    return contagem_num(n/10, digi+1);
}

int main(){

    int num, cont_n=0;

    printf("Descubra quantos digitos tem o seu numero digitado..\n\n");
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    int tot = contagem_num(num,cont_n);
    
    printf("\n======================================");
    
    printf("\n\nTotal de digitos no numero %d eh: %d", num,tot);
    
    return 0;
}