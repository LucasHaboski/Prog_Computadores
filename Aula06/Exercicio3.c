//Faça um programa que dado uma string você pesquise a ocorrência de 
//uma substring dentro da string original. Use ponteiro para imprimir a
//substring encontrada e a posição de memória que ela se encontra.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    char nome[500], sub[20];
    
    //Input da palavra
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", nome); //%[^\n]s é para retirar os espaços da string
    getchar();
    
    //Input da SubString
    printf("Digite a subString: ");
    scanf("%[^\n]s", sub);//%[^\n]s é para retirar os espaços da string
    
    //Utilizando função strstr para procurar substring dentro de um string e jogando dentro de um ponteiro
    char *subs = strstr(nome, sub);
    
    //Testando caso a substring não exista dentro da palavra digitada
    if(subs != NULL){
    	printf("SubString encontrada: %s\n", sub);
    	printf("Endereço de memoria da SubString: %p", subs);
	}else{
		printf("SubString não encontrada!");
	}
    
    return 0;
}
