#include <stdio.h>
int somatorio(int N);
int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    int resultado = somatorio(N);
    printf("O somatório é: %d\n", resultado);

    return 0;
}

int somatorio(int N){
    int i, soma = 0;
    
    for (i = 1; i <= N; i++) {
        soma += (5 * i * i + 2 * i + 8);
    }
  
  return soma;
    
}