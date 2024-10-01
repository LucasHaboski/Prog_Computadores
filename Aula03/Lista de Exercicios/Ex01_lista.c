//Usando recursividade, calcule a soma de todos os valores de um array de reais

#include <stdio.h>

//Função que soma o array criado na main
float somar_array(float x[], int y){

    //Caso o contador|tamanho chegue em zero, ele vai somar 0 a nossa conta
    if(y < 0){
        return 0.0;
    }
    
    return x[y] + somar_array(x, y-1); //somando os termos da array passando como parametro os proprios numeros e o tamanho para "navegar" dentro do array
}

int main(){
    
    //Declarando variaveis
    int tamanho, i;
    
    //Input do Tamanho do array
    printf("Quantos numeros deseja somar no total? ");
    scanf("%d", &tamanho);
    printf("\n");

    //Declaração da array + variavel de resposta
    float nums[tamanho],res;

    //Input de dados dos numeros que serão somados
    for(i = 0; i < tamanho; i++){

        printf("Digite o valor %d: ", i+1);
        scanf("%f", &nums[i]);

    }
    
    //Chamando a função e jogando em uma variavel de resposta
    res = somar_array(nums, tamanho - 1);

    //Printando a resposta
    printf("\nA soma do array ficou: %.2f", res);

    return 0;
}