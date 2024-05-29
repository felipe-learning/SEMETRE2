#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];

    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor modificado:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
