// Crie um programa em C para registrar o tempo gasto em tarefas diferentes. O programa deve permitir ao usuário especificar o número de tarefas, inserir nomes de tarefas e o tempo gasto em cada uma. 
// Use alocação dinâmica para armazenar as informações das tarefas e, no final, calcule o tempo total gasto e exiba as tarefas e o tempo gasto em cada uma.

#include <stdio.h>
#include <stdlib.h>

struct tarefa {
    char nome[70];
    float tempo;
};

int main(){

    int numTarefas, i;
    float tempoTot = 0;

    printf("Digite o numero de tarefas desejadas: ");
    scanf("%d", &numTarefas);

    struct tarefa *vtarefa = (struct tarefa *) calloc (numTarefas, sizeof(struct tarefa));

    if (vtarefa == NULL){
        printf("Falha na alocacao de memoria");
        return 1;
    }

    for (i = 0; i < numTarefas; i++){
        printf("Digite o nome da tarefa [%d]: ", i+1);
        scanf(" %99[^\n]", vtarefa[i].nome);

        printf("Digite o tempo gasto na tarefa: ");
        scanf("%f", &vtarefa[i].tempo);

        tempoTot += vtarefa[i].tempo;
    }

    printf("\nTAREFAS REGISTRADAS: \n");
    for (i = 0; i < numTarefas; i++){
        printf("Tarefa [%d]: Nome: %s, Tempo gasto: %.2f horas\n", i+1, vtarefa[i].nome, vtarefa[i].tempo);
    }

    printf("\nTempo total gasto: %.2f horas", tempoTot);

    free(vtarefa);

    return 0;
}