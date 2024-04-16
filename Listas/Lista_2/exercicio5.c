#include <stdio.h>

int Fibonacci(int n);

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
   
    int resultado = Fibonacci(n);
    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, resultado);
   
    return 0;
}

int Fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}