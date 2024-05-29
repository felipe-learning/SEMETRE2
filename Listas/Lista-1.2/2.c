#include <stdio.h>
#define TAMANHO 8

int main() {
    int vetor[TAMANHO];
    int x, y;

    printf("Digite os %d valores do vetor:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X (entre 0 e %d): ", TAMANHO - 1);
    scanf("%d", &x);
    printf("Digite o valor de Y (entre 0 e %d): ", TAMANHO - 1);
    scanf("%d", &y);

    if (x < 0 || x >= TAMANHO || y < 0 || y >= TAMANHO) {
        printf("Posições inválidas!\n");
    } else {
        int soma = vetor[x] +
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    }

    return 0;
}
