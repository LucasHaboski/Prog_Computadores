#include <stdio.h>

void recebe_string(char *palavra){
    for(; *palavra!=0; palavra++){
        printf("%c", *palavra);
        printf("| Posi��o de memoria -> %p\n", palavra);
    }
}

int main() {
    recebe_string("Cachorro");
    return 0;
}
