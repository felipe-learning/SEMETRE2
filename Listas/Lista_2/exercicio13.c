
#include <stdio.h>

int encontrarMaior(int a, int b);

int main() {
    int num1;
    int num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
   
    int maior = encontrarMaior(num1, num2);

    printf("O maior número é: %d\n", maior);

    return 0;
}

int encontrarMaior(int a, int b) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }

    return maior;
}