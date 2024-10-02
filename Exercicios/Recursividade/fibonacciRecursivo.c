#include <stdio.h>

// Função auxiliar para a recursividade por cauda
int fibonacci_tail_recursive(int n, int a, int b) {
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    } else {
        return fibonacci_tail_recursive(n - 1, b, a + b);
    }
}

// Função principal que chama a função auxiliar
int fibonacci(int n) {
    return fibonacci_tail_recursive(n, 0, 1);
}

int main() {
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    
    return 0;
}