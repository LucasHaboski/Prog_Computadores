//Escreva uma função recursiva que calcule os juros compostos de um valor. Para isso o
//programa deverá ler um valor inicial, o número de meses e a taxa de juros ao mês, e passar
//estes valores à função como parâmetros.

//No final deve mostrar: Valor de capital | Total a pagar | Total de juros que foi pago no empréstimo.

#include <stdio.h>

float juros(float preco, float taxa, int mes){
	
	if(mes == 0){
		return preco;
	}
	printf("\nValor do mes %d: R$%.2f", mes, preco);
	return juros(preco * (taxa+1), taxa, mes-1);
}

int main(){
	
	float preco, taxa;
	int mes;
	
	printf("Digite o valor inicial: ");
	scanf("%f", &preco);
	
	printf("\nDigite a taxa de juros ao mes: ");
	scanf("%f", &taxa);
	
	printf("\nDigite por quantos meses ira pagar: ");
	scanf("%d", &mes);
	
	float preco_f = juros(preco, taxa/100, mes);
	
	printf("\n\n====================================");
	
	printf("\n\nCapital inicial: R$%.2f", preco);
	printf("\nTotal a pagar: R$%.2f", preco_f);
	printf("\nTotal pago no emprestimo: R$%.2f", preco_f - preco);
	
	return 0;
}
