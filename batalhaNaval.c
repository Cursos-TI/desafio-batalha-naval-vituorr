#include <stdio.h>
#include <locale.h> //Para usar o setlocale

int main()
{ setlocale(LC_ALL, "Portuguese_Brazil"); //Para corrigir problemas de pontuação e acentuação

    int tabuleiro[10][10] = {0};
    int navio1 [3] = {3, 3, 3}, navio2[3] = {3, 3, 3};

    //Determinação de posição do navio1 (Horizontal)
    tabuleiro[3][4] = navio1[0];
    tabuleiro[3][5] = navio1[1];
    tabuleiro[3][6] = navio1[2];
    
    //Determinação de posição do navio2 (Vertical)
    tabuleiro[5][7] = navio2[0];
    tabuleiro[6][7] = navio2[1];
    tabuleiro[7][7] = navio2[2];
    
    //Loop para exibição
    for(int i = 0; i < 10; i++){ 
     for(int j = 0; j < 10; j++){
        printf("| %d ", tabuleiro[i][j]);
     } printf("|\n");   
    }

    return 0;
}