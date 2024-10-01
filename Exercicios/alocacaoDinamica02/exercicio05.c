// 5. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
//  a. Deverão ser armazenados, para cada aluno: 
//      1. matrıcula;
//      2. sobrenome (apenas um);
//      3. ano de nascimento;
//  b. Ao inıcio do programa, o usuário devera informar o numero de alunos que serão armazenados;
//  c. O programa devera alocar dinamicamente a quantidade necessária de memoria para armazenar os registros dos alunos;
//  d. O programa devera pedir ao usuário que entre com as informações dos alunos;
//  e. Ao final, mostrar os dados armazenados e liberar a memoria alocada;

#include <stdio.h>
#include <stdlib.h>

struct cadastroAluno {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
};

int main (){

    int i, qntAlunos;

    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &qntAlunos);

    struct cadastroAluno *p = (struct cadastroAluno *) calloc (qntAlunos, sizeof(struct cadastroAluno));

    for (i = 0; i < qntAlunos; i++){
        printf("Digite a matricula do aluno [%d]: ", i+1);
        scanf("%d", &p[i].matricula);

        printf("Digite o sobrenome do aluno [%d]: ", i+1);
        scanf("%s", p[i].sobrenome);

        printf("Digite o ano de nascimento do aluno [%d]: ", i+1);
        scanf("%d", &p[i].anoNascimento);

        printf("================================\n");
    }

    printf("    CADASTROS REALIZADOS!\n");
    printf("================================\n");

    for(i = 0; i < qntAlunos; i++){
        printf("Aluno [%d]: \n\n", i+1);
        printf("Matricula : %d\n", p[i].matricula);
        printf("Sobrenome: %s\n", p[i].sobrenome);
        printf("Ano de nascimento: %d\n", p[i].anoNascimento);
        printf("================================\n");
    }

    printf("FIM!");

    free(p);
    return 0;
}