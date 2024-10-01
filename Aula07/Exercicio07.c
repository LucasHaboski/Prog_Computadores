// Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos
// de uma turma, aloque um vetor de notas (números reais). Depois de ler as notas,
// imprime a média aritmética e apresente a melhor e a pior nota dentre esses alunos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int qntAluno, i;
    float *p, menorNota, maiorNota, mediaTurma = 0.0;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &qntAluno);

    p = (float *) calloc(qntAluno, sizeof(float));

    for(i = 0; i < qntAluno; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &p[i]);

        if(i == 0){
            menorNota = p[i];
            maiorNota = p[i];
        }
        else if(p[i] > maiorNota){
            maiorNota = p[i];
        }
        else if(p[i] < menorNota){
            menorNota = p[i];
        }
        mediaTurma += p[i];
    }

    mediaTurma /= qntAluno;

    printf("\n=========================================\n");
    printf("           NOTAS CADASTRADAS\n");
    printf("=========================================\n");

    printf("\nMedia de notas da turma: %.1f", mediaTurma);
    printf("\nMaior nota da turma: %.1f", maiorNota);
    printf("\nMenor nota da turma: %.1f", menorNota);

    free(p);
    return 0;
}