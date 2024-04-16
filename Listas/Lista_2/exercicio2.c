#include <stdio.h>

int descobreMMC(int numero1, int numero2);
int descobreMDC(int numero1, int numero2 );


int main()
{
    int numero1, numero2;
   
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
   
    if(numero1 == 0 || numero2 == 0)
    {
        printf("Os números devem ser maiores que 0.");
        return 1;
    }
       
   
    printf("O MMC desses dois número é: %d", descobreMMC( numero1, numero2 ) );
   
    return 0;
}

int descobreMMC(int numero1, int numero2 )
{
    return (numero1 * numero2) / descobreMDC(numero1, numero2);
}
int descobreMDC(int numero1, int numero2 )
{
    while (numero2 != 0) {
        int temp = numero2;
        numero2 = numero1 % numero2;
        numero1 = temp;
    }
   
    return numero1;
}