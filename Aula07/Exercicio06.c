// Fa�a um programa que receba do usu�rio o tamanho de um string e chame uma
// fun��o para alocar dinamicamente essa string. Em seguida, o usu�rio dever�
// informar o conte�do dessa string

#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, tamanho;
	
	printf("Digite quantos caracter quer printar: ");
	scanf("%d", &tamanho);
	
	char palavra[tamanho], *p;
	
	p = (char *) calloc(tamanho, sizeof(char));
	
	printf("Digite uma palavra e descubra seus %d primeiros caracteres: ", tamanho);
	scanf("%s", palavra);
	
	for(i = 0; i < tamanho; i++){
		p[i] = palavra[i];
		
	}
	
	printf("\n");
	
	for(i = 0; i < tamanho; i++){
		printf("%c ", p[i]);
		sleep(2);
	}
	
	free(p);
	return 0;
}
