/*Elabore um programa que efetue a leitura de três valores dentro do programa
principal. Implemente uma função que calcule o quadrado de cada um dos valores
informados e retorne para o principal os quadrados encontrados e a soma dos
quadrados dos três valores.*/

#include <stdio.h>
int quadrado(int *x, int *y, int *z){
	
	*x = *x * *x;
	*y = *y * *y;
	*z = *z * *z;

	return (*x + *y + *z);
	
}


int main(){
	
	int num1,num2,num3, resultado;
	
		
	printf("Digite o valor dos 3 numeros desejados: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	resultado = quadrado(&num1, &num2, &num3);
	
	printf("\nQuadrado de X = %d", num1);
	printf("\nQuadrado de Y = %d", num2);
	printf("\nQuadrado de Z = %d", num3);
	
	printf("\n\nSoma dos quadrados dos numeros digitados: %d", resultado);
	
	
	return 0;
}
