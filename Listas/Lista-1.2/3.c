#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int count_pares = 0;

    printf("Digite os %d valores do vetor:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] % 2 == 0) {
            count_pares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", count_pares);

    return 0;
}
