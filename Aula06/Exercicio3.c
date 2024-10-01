//Fa�a um programa que dado uma string voc� pesquise a ocorr�ncia de 
//uma substring dentro da string original. Use ponteiro para imprimir a
//substring encontrada e a posi��o de mem�ria que ela se encontra.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    char nome[500], sub[20];
    
    //Input da palavra
    printf("Digite uma palavra: ");
    scanf("%[^\n]s", nome); //%[^\n]s � para retirar os espa�os da string
    getchar();
    
    //Input da SubString
    printf("Digite a subString: ");
    scanf("%[^\n]s", sub);//%[^\n]s � para retirar os espa�os da string
    
    //Utilizando fun��o strstr para procurar substring dentro de um string e jogando dentro de um ponteiro
    char *subs = strstr(nome, sub);
    
    //Testando caso a substring n�o exista dentro da palavra digitada
    if(subs != NULL){
    	printf("SubString encontrada: %s\n", sub);
    	printf("Endere�o de memoria da SubString: %p", subs);
	}else{
		printf("SubString n�o encontrada!");
	}
    
    return 0;
}
