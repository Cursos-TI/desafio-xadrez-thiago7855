#include <stdio.h>


// Constantes para o número de movimentos
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO 1

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    printf("Diagonal direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    
    printf("Rainha: Diagonal esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento complexo do Cavalo
void moverCavalo() {
    // Movimento em L: 2 casas para cima e 1 para a direita
    for (int i = 0; i < 2; i++) {
        if (i > 0) {
            printf("Cima\n");
            printf("Cima\n");
            continue;
        }
        
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
            break;
        }
    }
}


int main() {
    printf("Movimento da Torre:\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("\n");
    
    printf("Movimento do Bispo:\n");
    moverBispo(MOVIMENTOS_BISPO);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");
    
      
    return 0;
}