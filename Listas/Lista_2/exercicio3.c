#include <stdio.h>

int primo( int num );
int somaPrimos( int N );

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int resultado = somaPrimos(N);
    printf("A soma dos primeiros %d números primos é: %d\n", N, resultado);

    return 0;
}

int somaPrimos( int N )
{
    int soma = 0;
    int num = 2;
    int cont = 0;

    while (cont < N) {
        if (primo(num)) {
            soma += num;
            ++cont;
        }
        ++num;
    }

    return soma;
}

int primo( int num ) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}