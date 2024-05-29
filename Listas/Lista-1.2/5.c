#include <stdio.h>
#define TAMANHO 6

int main() {
    int vetor[TAMANHO];

    printf("Digite 6 números inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores na ordem inversa:\n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
