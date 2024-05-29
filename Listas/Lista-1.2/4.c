#include <stdio.h>
#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int maior = 0;
    int posicao_maior = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
    }

    printf("Vetor:");
    for (int i = 0; i < TAMANHO; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento é %d e está na posição %d.\n", maior, posicao_maior);

    return 0;
}
