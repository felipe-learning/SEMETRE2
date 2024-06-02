#include <stdio.h>
#include <stdlib.h>

void inicializarTabuleiro(char tabuleiro[3][3]);
void exibirTabuleiro(char tabuleiro[3][3]);
int verificarVitoria(char tabuleiro[3][3], char jogador);
int verificarEmpate(char tabuleiro[3][3]);
void jogar(char tabuleiro[3][3], char jogador);

int main() 
{
    char tabuleiro[3][3];
    int jogadas = 0;
    int rodada = 1;
    char jogadorAtual = 'X';
    char jogadorX[50];
    char jogadorO[50];
    
    printf("=== Jogo da Velha ===\n");
    
    inicializarTabuleiro(tabuleiro);
    
    printf("Insira o nome do Jogador X: ");
    scanf("%[^\n]%*c", jogadorX);
    printf("Insira o nome do Jogador O: ");
    scanf("%[^\n]%*c", jogadorO);

    while (jogadas < 9) 
    {
        printf("\n Rodada: %d \n", rodada );
        exibirTabuleiro(tabuleiro);
        jogar(tabuleiro, jogadorAtual);
        jogadas++;

        if (verificarVitoria(tabuleiro, jogadorAtual)) 
        {
            exibirTabuleiro(tabuleiro);
            printf("\nJogador %c, de nome '%s', venceu!\n", jogadorAtual, (jogadorAtual == 'X') ? jogadorX : jogadorO);
            break;
        } 
        else if (verificarEmpate(tabuleiro)) 
        {
            exibirTabuleiro(tabuleiro);
            printf("\nO jogo terminou em empate!\n");
            break;
        }

        jogadorAtual = (jogadorAtual == 'X') ? '0' : 'X';
        
        if(jogadorAtual == 'X')
            rodada += 1;
    }
    printf("========================================\n");
    printf("Obrigado por jogar!\n");
    printf("Esse jogo foi desenvolvido por: Felipe Chaves Freitas\n");

    return 0;
}

void inicializarTabuleiro(char tabuleiro[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibirTabuleiro(char tabuleiro[3][3]) 
{
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) 
    {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) 
        {
            printf("%c", tabuleiro[i][j]);
            if (j < 3 - 1) printf("|");
        }
        printf("\n");
        if (i < 3 - 1) printf("  -----\n");
    }
}

int verificarVitoria(char tabuleiro[3][3], char jogador) 
{
    for (int i = 0; i < 3; i++) 
    {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
            return 1;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)
            return 1;
    }
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador)
        return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)
        return 1;
    return 0;
}

int verificarEmpate(char tabuleiro[3][3]) 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (tabuleiro[i][j] == ' ') 
            {
                return 0;
            }
        }
    }
    return 1;
}

void jogar(char tabuleiro[3][3], char jogador) 
{
    int linha, coluna;
    while (1) 
    {
        printf("Jogador %c, digite a linha e coluna, respectivamente: ", jogador);
        scanf("%d %d", &linha, &coluna);
        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') 
        {
            tabuleiro[linha][coluna] = jogador;
            break;
        } 
        else 
        {
            printf("Movimento inválido, tente novamente.\n");
        }
    }
}
