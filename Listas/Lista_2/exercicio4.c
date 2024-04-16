#include <stdio.h>

float mediaTurma(int numAlunos);

float mediaEscola(int numTurmas);

int main() {
    int numTurmas, numAlunos;
    float mediaTotal;

    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);

    mediaTotal = mediaEscola(numTurmas);

    printf("A média aritmética de todas as turmas é: %.2f\n", mediaTotal);

    return 0;
}

float mediaTurma(int numAlunos) {
    int i;
    float somaNotas = 0, nota;

    for (i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    return somaNotas / numAlunos;
}

float mediaEscola(int numTurmas) {
    int i, numAlunos;
    float somaMedias = 0, media;

    for (i = 1; i <= numTurmas; i++) {
        printf("Digite o número de alunos na turma %d: ", i);
        scanf("%d", &numAlunos);
        media = mediaTurma(numAlunos);
        somaMedias += media;
    }

    return somaMedias / numTurmas;
}