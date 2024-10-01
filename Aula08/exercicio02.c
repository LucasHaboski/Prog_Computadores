//Crie um programa em C para gerenciar um catálogo de produtos. Cada produto deve ter um nome (string), um código (inteiro), uma descrição (string) e um preço (float).
// O programa deve permitir ao usuário adicionar produtos ao catálogo e exibir todos os produtos cadastrados. 
//Utilize alocação dinâmica para armazenar os produtos e permita que o usuário insira a quantidade desejada de produtos. Ao final, o programa deve liberar a memória alocada.

#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome[40];
    char descricao[200];
    int codigo;
    float preco;
};

int main(){

    int i, qntProdutos;

    printf("Digite quantos produtos deseja cadastrar: ");
    scanf("%d", &qntProdutos);

    struct produto *vProd = (struct produto *) calloc (qntProdutos, sizeof(struct produto));

    if(vProd == NULL){
        printf("Falha na locação de memória");
        return 1;
    }

    printf("\n==========================================\n");

    for(i = 0; i < qntProdutos; i++){
        printf("Digite o nome do produto [%d]: ", i+1);
        scanf("%39s", vProd[i].nome); // %39s para previnir o buffer overflow
       
        while (getchar() != '\n'); // Limpando o input buffer

        printf("Digite a descricao do produto [%s]: ", vProd[i].nome);
        scanf("%199[^\n]", vProd[i].descricao); // Previni buffer e ler com espaço

        while (getchar() != '\n'); // Limando o input buffer

        printf("Digite o codigo do produto [%s]: ", vProd[i].nome);
        scanf("%d", &vProd[i].codigo);

        printf("Digite o preco do produto [%s]: ", vProd[i].nome);
        scanf("%f", &vProd[i].preco);

        printf("\n=======================================\n");
    }

    printf("Produtos cadastrados!\n\n");

    for(i=0; i < qntProdutos; i++){
        printf("Produto [%d]: \n", i+1);
        printf("Nome: %s\n", vProd[i].nome);
        printf("Descricao: %s\n", vProd[i].descricao);
        printf("Codigo: %d\n", vProd[i].codigo);
        printf("Preco: R$%.2f\n", vProd[i].preco);
        printf("\n====================================\n");
    }

    free(vProd);
    return 0;
}