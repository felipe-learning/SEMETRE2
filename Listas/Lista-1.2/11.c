#include <stdio.h>
#define TAMANHO 5

int main() {
    int matriz[TAMANHO][TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < TAMANHO; i++) {
        matriz[i][i] = 1;
    }

    printf("Matriz obtida:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
