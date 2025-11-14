#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


    //definição das dimensões do tabuleiro utilizando matriz;
    int tabuleiro [10][10]; 

    printf("*** Tabuleiro do Jogo ***\n");
    printf("   A B C D E F G H I J  \n"); //orientação das colunas

    //loop externo controla o eixo vertical (variável i);
    for (int i = 0; i < 10; i++){

        printf("%d  ", i + 1); //orientação das linhas

        //loop interno controla o eixo horizontal (variável j);
        for (int j = 0; j < 10; j++){

            if ((i > 4 && i < 8) && (j == 1)){ //coordenadas do primeiro navio (vertical)
                
                tabuleiro [j][i] = 3; //3 marca a posição do primeiro navio

            } else if ((j > 6 && j < 10) && (i == 4)){ //coordenadas do segundo navio (horizontal)

                tabuleiro [j][i] = 3; //3 marca a posição do segundo navio

            } else if ((i == j) && (i > 0 && i < 4)){ // i == j indica a posição do navio na diagonal central (do canto superior esquerdo ao canto inferior direito) e i > 0 && i < 4 indica o início (B2) e o fim do navio (D4);

                tabuleiro [j][i] = 3; //3 marca a posição do terceiro navio

            } else if ((i + j == 8) && (j > 5 && j < 9)){ // i + j == 8 indica a diagonal (A9 -> I1) escolhida para o quarto navio. j > 5 indica o início do navio (G3) e j < 9 o fim (I1)
            
                tabuleiro [j][i] = 3; //3 marca a posição do quarto navio
                        
            } else {

                tabuleiro [j][i] = 0; // 0 indica a água

            }
            printf("%d ", tabuleiro [j][i]); // impressão da posição dos navios (3) e a água (0)
        }
        printf("\n"); //organizando as linhas para montar a tabela
    }
        

    
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
