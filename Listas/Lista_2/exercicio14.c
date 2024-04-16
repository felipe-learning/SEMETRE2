
#include <stdio.h>

int encontrarMaior(int numeros[], int tamanho);

int main() {
    int numeros[3];
    int i;


    for (i = 0; i < 3; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
   
    int maior = encontrarMaior(numeros, 3);

    printf("O maior valor é: %d\n", maior);

    return 0;
}


int encontrarMaior(int numeros[], int tamanho) {
    int maior = numeros[0];
    int i;

    for (i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    return maior;
}