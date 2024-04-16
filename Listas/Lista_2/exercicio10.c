#include <stdio.h>

int encontrarMaior(int a, int b, int c);

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = encontrarMaior(num1, num2, num3);

    printf("O maior número é: %d\n", maior);

    return 0;
}

int encontrarMaior(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}