#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int maior_valor = matriz[0][0];
    int linha_maior, coluna_maior;

    printf("Digite os valores da matriz %d x %d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor é %d e está na linha %d e coluna %d.\n", maior_valor, linha_maior + 1, coluna_maior + 1);

    return 0;
}
