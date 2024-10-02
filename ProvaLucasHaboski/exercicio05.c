#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Tópico a)
    int qntDispositivo = 10;
    float velInternet = 15.5;
    char status = 'I';

    // Tópico b)
    int *dispConectado = &qntDispositivo;
    float *velocidadeNet = &velInternet;
    char *status_p = &status;

    // Tópic d)
    printf("Antes das alteracoes de internet: \n");
    printf("Dispositivos conectados: %d\n", qntDispositivo);
    printf("Velocidade da internet: %.2f\n", velInternet);
    printf("Status de conexao: %c\n", status);
    printf("=======================================\n");

    // Tópico c)
    *dispConectado = qntDispositivo + 5;
    *velocidadeNet = velInternet * 2;
    *status_p = 'A';

    // Continuação tópic D)
    printf("Depois das alteracoes de internet: \n");
    printf("Dispositivos conectados: %d\n", *dispConectado);
    printf("Velocidade da internet: %.2f\n", *velocidadeNet);
    printf("Status de conexao: %c\n", *status_p);

    return 0;
}