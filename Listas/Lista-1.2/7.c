#include <stdio.h>

#define TAMANHO 10

int main() {
    float vetor[TAMANHO];
    int quantidade_negativos = 0;
    float soma_positivos = 0;

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] < 0) {
            quantidade_negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantidade_negativos);

    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}
