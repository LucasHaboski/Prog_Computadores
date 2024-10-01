/*Fa�a um programa para calculo de reajuste de pre�os de um produto. O reajuste
deve ser feito utilizando-se de uma fun��o. Voc� deve solicitar ao usu�rio o pre�o
atual do produto e retornar por ponteiro o pre�o j� reajustado e o valor do
reajuste.*/

#include <stdio.h>
float reajuste(float *x){
	
	*x = *x * 1.10;
	
	return (*x / 1.1) * 0.1;
	
}

int main(){
	
	float preco;
	float *ptr = &preco;
	float resultado;
	
	printf("Digite o valor do produto antes do reajuste: R$");
	scanf("%f", &preco);
	
	resultado = reajuste(ptr);
	
	printf("\nValor do Produto ap�s o reajuste: R$%.2f", *ptr);
	printf("\nValor do reajuste: %.2f%%", resultado);
	
	return 0;
}
