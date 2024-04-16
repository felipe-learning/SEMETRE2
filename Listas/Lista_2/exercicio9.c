#include <stdio.h>

int encontrarMenor(int a, int b, int c);

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");

    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = encontrarMenor(num1, num2, num3);

    printf("O menor número é: %d\n", menor);

    return 0;
}

int encontrarMenor(int a, int b, int c) {
    int menor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    return menor;
}