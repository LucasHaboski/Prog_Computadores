#include <stdio.h>
#include <stdlib.h>
        
struct teste{
	int a;
	float b;
	double c;
};

int main(){
	
	printf("Tamanho do inteiro = %d", sizeof(int)); // tamanho de um inteiro em bytes
	printf("\nTamanho do float = %d", sizeof(float)); // tamanho de um float em bytes
	printf("\nTamanho do double = %d", sizeof(double)); // tamanho de um double em bytes
	printf("\nTamanho do char = %d", sizeof(char)); // tamanho de um char em byte
	printf("\nTamanho da struct = %d\n", sizeof(struct teste)); // tamanho de uma struct em bytes (depende do que for declarado internamente)
	
	int *p, i, *p2;
	
	p = (int *) malloc(5 * sizeof(int)); // alocando no ponteiro o espaço de 5 inteiros logo 20 bytes (utilizando malloc)
	p2 = (float *) calloc (10, sizeof(float)); //utilizando calloc (não da lixo de memória sla)
	
	sleep(5);
	system("cls");
	
	if(p==NULL || p2==NULL){
		printf("ERRO: MEMÓRIA iNSUFICIENTE!");
		exit(1);
	}
	
	for(i = 0; i < 5; i++){
		printf("\nDigite um numero para a posicao %d do p1: ", i+1);
		scanf("%d", &p[i]);
		printf("\nDigite um numero para a posicao %d do p2: ", i+1);
		scanf("%f", &p2[i]);
	}
	
	sleep(1);
	system("cls");
	sleep(1);
	
	for(i = 0; i < 5; i++){
		printf("\nO valor de p1 na posicao %d= %d", i+1, p[i]);
	}
	
	printf("\n\n====================================================\n");
	
	for(i = 0; i < 5; i++){
		printf("\nO valor de p2 na posicao %d= %f", i+1, p2[i]);
	}
	
	
	free(p); // para liberar o espaço de memória alocado pelo malloc
	free(p2); // para liberar o espaço de memória alocado pelo calloc
	
	return 0;
}
