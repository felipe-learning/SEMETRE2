#include <stdio.h>

int encontrarMaior(int a, int b, int c);

void maximo(int a, int b, int c);

int encontrarMenor(int a, int b, int c);

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maximo(num1, num2, num3);


    return 0;
}

void maximo(int a, int b, int c) {

    int maior = encontrarMaior(a, b, c);
   
    int menor = encontrarMenor(a, b, c);

    printf("O menor número é: %d\n", menor);
   
    printf("O maior número é: %d\n", maior);
}


int encontrarMaior(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    return maior;
}

int encontrarMenor(int a, int b, int c) {
    int menor = a;

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    return menor;
}