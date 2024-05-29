#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int contador = 0;

    printf("Digite os valores da matriz %d x %d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}
