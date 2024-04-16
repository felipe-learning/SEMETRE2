#include <stdio.h>

int calcularSoma(int num1, int num2);

int main() {
    int numero1, numero2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    resultado = calcularSoma(numero1, numero2);

    printf("A soma dos números é: %d\n", resultado);

    return 0;
}

int calcularSoma(int num1, int num2) {
    return num1 + num2;
}