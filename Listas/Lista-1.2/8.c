#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int valores_iguais[TAMANHO];
    int quantidade_valores_iguais = 0;
    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = i + 1; j < TAMANHO; j++) {
            if (vetor[i] == vetor[j]) {
                valores_iguais[quantidade_valores_iguais] = vetor[i];
                quantidade_valores_iguais++;
                break;
            }
        }
    }

    if (quantidade_valores_iguais > 0) {
        printf("Valores iguais encontrados:\n");
        for (int i = 0; i < quantidade_valores_iguais; i++) {
            printf("%d\n", valores_iguais[i]);
        }
    } else {
        printf("Não foram encontrados valores iguais.\n");
    }

    return 0;
}
