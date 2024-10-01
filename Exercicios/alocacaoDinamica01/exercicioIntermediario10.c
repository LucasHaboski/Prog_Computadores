// Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos
// de uma turma e aloca um vetor de notas (números reais). Depois de ler as notas, imprime a média aritmética.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int turma, i;

    printf("Digite quantos alunos possui a classe: ");
    scanf("%d", &turma);

    printf("=========================\n");

    float *nota, mediaTurma = 0;

    nota = (float *) calloc (turma, sizeof(float));

    for (i = 0; i < turma; i++){
        printf("Digite a nota do aluno [%d]: ", i+1);
        scanf("%f", &nota[i]);

        mediaTurma+=nota[i];
    }

    printf("=========================\n");
    printf("A media da turma foi: %.1f", mediaTurma/turma);

    free(nota);
    return 0;
}