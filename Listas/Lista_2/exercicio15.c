#include <stdio.h>

int calcularSoma(int vetor[], int tamanho);

int main() {
    int numeros[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int soma = calcularSoma(numeros, 3);

    printf("A soma dos valores é: %d\n", soma);

    return 0;
}

int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}