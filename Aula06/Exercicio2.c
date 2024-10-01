//Faça um programa que a pessoa informe uma palavra. Na sequencia, essa
//palavra deve ser passada para uma função que retorne ao usuário o 
//total de vogais existentes na palavra digitada.
#include <stdio.h>
#include <string.h>

int contaVogal(char *pala){
    int cont_vogal = 0;
    for(; *pala!=0; pala++){
        if(*pala == 'a' || *pala == 'e' || *pala == 'i' || *pala == 'o' || *pala == 'u'){
            cont_vogal++;
        }
    }
    return cont_vogal;
}

int main() {
    char palavra[500], *ptr;
    int total = 0,i;
    
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", palavra);
    
    for(i = 0; i < strlen(palavra); i++){
        palavra[i] = tolower(palavra[i]);
    }
    
    ptr = palavra;
    
    total = contaVogal(ptr);
    
    printf("O total de vogais na palavra \"%s\" e = %d ", palavra, total);
    return 0;
}
