#include <stdio.h>
#include <stdlib.h>

struct cad {
    int matricula;
    int idade;
};

int main(){
    
    int i;
    struct cad *vcad = (struct cad *) calloc (10,  sizeof(struct cad));

    vcad[0].matricula = 1998;
    vcad[0].idade = 20;

    vcad[1].matricula = 1999;
    vcad[1].idade = 21;

    vcad[2].matricula = 2000;
    vcad[2].idade = 24;

    for(i = 0; i < 10; i++){
        printf("\nMatricula: %d || Idade: %d", vcad[i].matricula, vcad[i].idade);
    };

    free(vcad);
    return 0;
}