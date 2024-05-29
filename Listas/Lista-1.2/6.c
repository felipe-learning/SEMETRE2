#include <stdio.h>
#define NUM_ALUNOS 15

int main() {
    float notas[NUM_ALUNOS];
    float soma = 0;
    float media;

    printf("Digite as notas dos 15 alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / NUM_ALUNOS;

    printf("A média geral das notas é: %.2f\n", media);

    return 0;
}
