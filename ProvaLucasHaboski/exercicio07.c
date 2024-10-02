#include <stdio.h>
#include <stdlib.h>

// Tópico a)
struct DadosAr {
    char nomeCidade[50];
    int poluicao;
    char dataColeta[30];
};

int main(){

    // Tópico b)
    int qntCidades, i, maiorPoluicao = 0, cidadePoluida = 0;

    printf("Digite a quantidade de cidades que deseja cadastrar: ");
    scanf("%d", &qntCidades);

    struct DadosAr *p = (struct DadosAr *) calloc (qntCidades, sizeof(struct DadosAr));

    // Tópico c)
    for( i = 0; i < qntCidades; i++){
        printf("Digite os dados da cidade [%d]: \n", i+1);

        printf("Nome da cidade: ");
        scanf("%s", p[i].nomeCidade);

        printf("Nivel de poluicao [0 - 100]: ");
        scanf("%d",  &p[i].poluicao);
        while(p[i].poluicao < 0 || p[i].poluicao > 100){
            printf("Valor nao permitido digite novamente!\n");
            scanf("%d",  &p[i].poluicao);
        }

        printf("Data da coleta (dd/mm/aaaa): ");
        scanf("%s", p[i].dataColeta);

        if (p[i].poluicao > maiorPoluicao){
            cidadePoluida = i;
            maiorPoluicao = p[i].poluicao;
        }
        printf("-----------------------------------\n");
    }

    // Tópico d)
    for(i = 0; i < qntCidades; i++){
        printf("Dados da cidade [%d]: \n", i+1);

        printf("Nome da cidade: %s\n", p[i].nomeCidade);
        printf("Nivel de poluicao [0 - 100]: %d\n", p[i].poluicao);
        printf("Data da coleta (dd/mm/aaaa): %s\n", p[i].dataColeta);
        printf("===========================================\n");
    }
    printf("\nCidade com maior nivel de poluicao: %s", p[cidadePoluida].nomeCidade);

    free(p);
    return 0;
}