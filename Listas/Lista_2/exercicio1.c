#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool formaTriangulo(int lado1, int lado2, int lado3);

void tipoTriangulo(lado1, lado2, lado3);

int main()
{
    int lado1, lado2, lado3;
   
    printf("Digite o primeiro lado do Triângulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do Triângulo: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado do Triângulo: ");
    scanf("%d", &lado3);
   
    if( formaTriangulo( lado1, lado2, lado3 ) )
    {
        printf("Os lado formam um triângulo. \n");
        tipoTriangulo( lado1, lado2, lado3 );
    }
    else
        printf("Não é formado um Triângulo com esses 3 lados.");
   
    return 0;
}

bool formaTriangulo(int lado1, int lado2, int lado3)
{
    if(lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado2 + lado1)
        return false;
    else
        return true;
}
void tipoTriangulo(lado1, lado2, lado3)
{
    if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
        printf("O tipo do Triângulo é o Escaleno.");
    else if( ( lado1 == lado2 && lado1 != lado3 ) || ( lado2 == lado3 && lado2 != lado1 ) || ( lado3 == lado1 && lado1 != lado2 ))
        printf("O tipo do Triângulo é o Isóceles.");
    else
        printf("O tipo do Triângulo é o Equilátero.");
}

