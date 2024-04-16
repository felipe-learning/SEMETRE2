#include <stdio.h>

void rotateNumbers(int *a, int *b, int *c);

int main() {
    int num1, num2, num3;
   
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    rotateNumbers(&num1, &num2, &num3);

    printf("Valores após a rotação: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

void rotateNumbers(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}