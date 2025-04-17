#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int tabuleiro[10][10] = {0};
    int navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3}, navio4[3] = {3, 3, 3};
    int posicao = 0; // Variável usada para determinar se o posicionamento é valido

    printf("\n\n   ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    printf("         BATALHA NAVAL      \n");
    printf("   ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");
    
    // Colocando navio1 no tabuleiro
    for (int i = 2; i <= 4; i++){
    navio1[posicao]; //Para que o sistema faça a verificação da posição
      
    if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
        tabuleiro[3][i] = navio1[posicao]; posicao++;
    } else { printf("Posição inválida no navio!\n"); }
    }
    
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");
    
    // Colocando navio2 no tabuleiro
    for (int i = 2; i <= 4; i++){
        navio2[posicao]; //Para que o sistema faça a verificação da posição
        
        if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i][7] != 0) { printf("Esta posição já está ocupada!\n"); } //Conferir se o local não está ocupado
                else {tabuleiro[i][7] = navio2[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }
    
    // Colocando navio3 no tabuleiro 
    for (int i = 0; i <= 2; i++){
        navio3[posicao]; //Para que o sistema faça a verificação da posição
        
        if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i + 6][i + 1] != 0) { printf("Esta posição já está ocupada!\n"); } //Conferir se o local não está ocupado
                else {tabuleiro[i + 6][i + 1] = navio2[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }
    
    // Colocando navio4 no tabuleiro 
    for (int i = 0; i <= 2; i++){
        navio4[posicao]; //Para que o sistema faça a verificação da posição
        
        if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i + 7][i + 7] != 0) { printf("Esta posição já está ocupada!\n"); } //Conferir se o local não está ocupado
                else {tabuleiro[i + 7][i + 7] = navio2[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }

    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");

    printf("   TABULEIRO COMPLETO\n\n");       
    // Mostrar o tabuleiro completo
    for (int i = 0; i < 10; i++) { printf("| ");
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("|\n");
    }

    return 0;
}