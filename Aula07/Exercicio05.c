// Fa�a um programa que realize o cadastro de pre�os de um determinado
// componentes. O programa dever� solicitar ao usu�rio o numero de componentes que
// deseja cadastrar. O programa dever� fazer a reserva de mem�ria dinamicamente 
// considerando que o tipo de dado que ira receber. Ap�s o cadastro mostre na tela o
// valor de cada componente, ao final n�o esque�a de liberar a mem�ria alocada.

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n,i;
	float *p;
	
	printf("Digite quantos componentes deseja cadastrar: ");
	scanf("%d", &n);
	
	p = (float *) calloc(n, sizeof(float));
	
	for(i = 0; i < n; i++){
		printf("Digite o valor do componente %d: ", i+1);
		scanf("%f", &p[i]);
	}
	
	sleep(1);
	system("cls");
	
	for(i = 0; i<n; i++){
		printf("\nValor do componente %d: R$%.2f", i+1, p[i]);
		sleep(1);
	}
	
	free(p);
	
	return 0;
}
