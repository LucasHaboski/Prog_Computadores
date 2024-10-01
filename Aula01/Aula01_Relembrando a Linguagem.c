#include <stdio.h>
#include <locale.h>

int main() {
	
	float notas[2][3] ;
	float media[2];
	int i, j ;
	
	setlocale(LC_ALL, "PORTUGUESE");
	//system("color 8F"); cor no terminal
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){

			printf("Digite a nota do aluno %d: ", i+1);
			scanf("%f", &notas[i][j]);
		
			media[i] += notas[i][j];
		}
	}
	
	printf("\n\nAs notas da turma foram: \n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("\nNota 0%d do aluno %d: %.1f",j+1, i+1, notas[i][j]);
		}
		printf("\nMedia do aluno %d: %.1f\n\n", i+1, media[i]/3);
	}
	    	
    return 0;
}

