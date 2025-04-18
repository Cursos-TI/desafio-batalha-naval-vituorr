#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int tabuleiro[10][10] = {0};
    int navio1[3] = {3, 3, 3}, navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3}, navio4[3] = {3, 3, 3};
    int posicao = 0; // Variável usada para determinar se o posicionamento é valido
    
    // Declaração de habilidades. Feita separadamente para facilitar visualização
    int cone[3][5] = {{0, 0, 1, 0, 0}, {0, 1, 1, 1, 0}, {1, 1, 1, 1 ,1}}; 
    int cruz[3][5] = {{0, 0, 1, 0, 0}, {1, 1, 1, 1, 1}, {0, 0, 1, 0, 0}};
    int octaedro[3][3] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};

    printf("\n\n¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    printf("      BATALHA NAVAL      \n");
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
    
    // Colocando navio1 no tabuleiro
    for (int i = 0; i <= 2; i++){    
      
    if (posicao >= 0 && posicao < 10) { // Codição para conferir se a posição escolhida está dentro das dimensões do tabuleiro
        tabuleiro[3][i + 2] = navio1[posicao]; posicao++;
    } else { printf("Posição inválida no navio!\n"); }
    }
    
    posicao = 0; // Reiniciando posição
    
    // Colocando navio2 no tabuleiro
    for (int i = 0; i <= 2; i++){
        
        if (posicao >= 0 && posicao < 10) { // Codição para conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i + 2][7] != 0) { printf("Esta posição já está ocupada!\n"); } // Codição para conferir se o local não está ocupado
                else {tabuleiro[i + 2][7] = navio2[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }
    
    posicao = 0;

    // Colocando navio3 no tabuleiro 
    for (int i = 0; i <= 2; i++){
        
        if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i + 6][i] != 0) { printf("Esta posição já está ocupada!\n"); } //Conferir se o local não está ocupado
                else {tabuleiro[i + 6][i] = navio3[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }
    
    posicao = 0;
    
    // Colocando navio4 no tabuleiro 
    for (int i = 0; i <= 2; i++){
        
        if (posicao >= 0 && posicao < 10) { //Conferir se a posição escolhida está dentro das dimensões do tabuleiro
            if (tabuleiro[i + 7][i + 7] != 0) { printf("Esta posição já está ocupada!\n"); } //Conferir se o local não está ocupado
                else {tabuleiro[i + 7][i + 7] = navio4[posicao];}
                    } else { printf("Posição inválida no navio!\n\n"); }
    }

    // Colocando o cone no tabuleiro
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            if (tabuleiro[i + 1][j] != 0) 
                if (cone[i][j] != 0) { cone[i][j] = 5; tabuleiro[i + 1][j] = cone[i][j]; } // Condição para demarcar se navio foi atingido. 
                    else { tabuleiro[i + 1][j] = 3; } // Condição para que o espaço (3) do navio não seja preenchido pelo (0) do espaçamento da habilidade
                else { tabuleiro[i + 1][j] = cone[i][j]; } // Condição para demarcar que área atingida era água

        } 
    }

    // Colocando o cruz no tabuleiro
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            
            if (tabuleiro[i + 6][j + 5] != 0){
                if (cruz[i][j] != 0) { cruz[i][j] = 5; tabuleiro[i + 6][j + 5] = cruz[i][j]; } 
                    else { tabuleiro[i + 6][j + 5] = 3; } 
            } else { tabuleiro[i + 6][j + 5] = cruz[i][j]; }

        } 
    }

    // Colocando o octaedro no tabuleiro
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (tabuleiro[i + 2][j + 6] != 0) 
                if (octaedro[i][j] != 0) { octaedro[i][j] = 5; tabuleiro[i + 2][j + 6] = octaedro[i][j]; }
                    else { tabuleiro[i + 2][j + 6] = 3; }    
            else { tabuleiro[i + 2][j + 6] = octaedro[i][j]; } 
        } 
    }
    
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