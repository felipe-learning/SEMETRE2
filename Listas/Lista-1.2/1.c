#include <stdio.h>
#define TAMANHO 10

int main() {
    float vetor[TAMANHO];
    float quadrados[TAMANHO];

    printf("Digite os 10 números reais:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        quadrados[i] = vetor[i] * vetor[i];
    }

    printf("Vetor original:\n[");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f", vetor[i]);
        if (i < TAMANHO - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Vetor de quadrados:\n[");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f", quadrados[i]);
        if (i < TAMANHO - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
