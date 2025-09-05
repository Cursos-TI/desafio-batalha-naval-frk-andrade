#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int linha[] = {1,2,3,4,5,6,7,8,9,10}; //Indicadores de linhas
    char coluna[] = {'A','B','C','D','E','F','G','H','I','J'}; // Indicadores de colunas

    //Matriz do tabuleiro

    int tabuleiro[10][10] = {
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
    };

    printf("Tabuleiro Batalha Naval\n");
    printf(" ");

    //Loop para exibir as letras que indicam as colunas
    for (int j = 0; j < 10; j++){
        printf(" %c", coluna[j]);
    };

    printf("\n"); // Para quebrar a linha

    //Loop para numerar as linhas
    for (int i = 0; i < 10; i++){
        printf("%d ", linha[i]);
            //Loop aninhado que insere as linhas da matriz após as numerações de linhas
            for (int j = 0;  j < 10;  j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }

        printf("\n"); // Apenas para quebrar linha    
        
    };
    int linhaEscolhida = 1;
    int colunaInicial = 4;
    
    //Navio na horizontal
    if(linhaEscolhida > 10) { //Condição para não ultrapassar a quantidade de linhas do tabuleiro
        printf("Insira um valor menor que 10.\n");
    } else{
    for (int j = 0;j < 3; j++){
            tabuleiro[linhaEscolhida][colunaInicial + j] = 3;
    }}

    int colunaEscolhida = 6;
    int linhaInicial = 3;

    //Navio na vertical
     if(colunaEscolhida > 10) { //Condição para não ultrapassar a quantidade de colunas do tabuleiro
        printf("Insira um valor menor que 10.\n");
    } else if (colunaInicial == linhaInicial) //Condição para evitar que os navios se choquem
    {
        printf("Calma comndante! Já tem um navio aí!\n"); 
    } else {
    for (int i = 0;i < 3; i++){
            tabuleiro[linhaInicial + i][colunaEscolhida] = 3;
    }}

    printf("Tabuleiro Batalha Naval\n");
    
    printf(" ");

    //Loop para exibir as letras que indicam as colunas
    for (int j = 0; j < 10; j++){
        printf(" %c", coluna[j]);
    };

    printf("\n"); // Para quebrar a linha

    //Loop para numerar as linhas
    for (int i = 0; i < 10; i++){
        printf("%d ", linha[i]);
            //Loop aninhado que insere as linhas da matriz após as numerações de linhas
            for (int j = 0;  j < 10;  j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }

        printf("\n"); // Apenas para quebrar linha    
        
    };

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
