//Escreva uma função recursiva para resolver um problema típico da computação, que consiste em converter um númeroda sua forma decimal para a forma binaria.
#include <stdio.h>

int converte_bin(int n, int *bina, int i){

    if(n ){
    	bina[i+1] = 2;
    	return 0;
	}
	
	bina[i] = n % 2;
	
	printf("%d", bina[i]);
	
	
	return converte_bin(n/2, bina, i+1);
}

int main(){

    //Cabeçalho
    printf("========================================================\n");
    printf(" Programa que converte um numero decimal para binario!!\n");
    printf("========================================================\n");

    //Declarando Variaveis
    int num, bin[999], cont=0;

    printf("Digite o numero que deseja converter: ");
    scanf("%d", &num);

    converte_bin(num, bin, cont);
    
    while(bin[cont] < 2){
    	
    	printf("%d", bin[cont]);
    	cont++;
    	
	}
    


    return 0;
}
