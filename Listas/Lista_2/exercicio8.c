#include <stdio.h>
int primeiroTriangulo(int matriz[5][5]);
int segundoTriangulo(int matriz[5][5]);
int terceiroTriangulo(int matriz[5][5]);
int quartoTriangulo(int matriz[5][5]);



int main() {
    int matriz[5][5];
    int i, j;

  
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j];
        }
    }

   
    primeiroTriangulo(matriz);
    segundoTriangulo(matriz);
    terceiroTriangulo(matriz);
    quartoTriangulo(matriz);

    return 0;
}

int primeiroTriangulo(int matriz[5][5]) {
    int i, j;
    printf("\nPrimeiro Triângulo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int segundoTriangulo(int matriz[5][5]) {
    int i, j;
    printf("\nSegundo Triângulo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 4; j >= i; j--) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int terceiroTriangulo(int matriz[5][5]) {
    int i, j;
    printf("\nTerceiro Triângulo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++) {
            printf("   ");
        }
        for (j = i; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int quartoTriangulo(int matriz[5][5]) {
    int i, j;
    printf("\nQuarto Triângulo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            printf("   ");
        }
        for (j = 5 - i - 1; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}