#include <stdio.h>
#include <locale.h>

typedef struct{
	
    char nome[15];
    char raca[20];
    int idade;
    char tutor[50];
    
} clinica; 

int main(){
	
	clinica c;
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("Digite o nome do cachorro: ");
	gets(c.nome);
	
	printf("\nAgora digite a raca do cachorro: ");
	gets(c.raca);
	
	printf("\nDigite a idade do cachorro? ");
	scanf("%d", &c.idade);
	
	printf("\nDigite o nome do dono do cachorro: ");
	gets(c.tutor);
	
	printf("\n\n=======DADOS COLETADOS========\n\n");
	
	printf("Nome do cachorro: %s", c.nome);
	printf("\nIdade do %s: %d", c.nome, c.idade);
	printf("\nRaca do %s: %s", c.nome, c.raca);
	printf("\n%s é o cachorro do %s", c.nome, c.tutor);
	
	
	return 0;
	
}
