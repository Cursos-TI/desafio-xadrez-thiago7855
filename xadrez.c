#include <stdio.h>

int main() {
    // mover a torre 5 casas para direita
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("direita\n");
    }

    // mover o bispo 5 casas diagonal para direita
    printf("\nMovimentação do Bispo:\n");
    int casa_bispo = 5;
    for (int i = 0; i < casa_bispo; i++) {
        printf("diagonal direita\n");
    }

    // mover a rainha 8 casas para esquerda
    printf("\nMovimentação da Rainha:\n");
    int casa_rainha = 0;
    do {
        printf("esquerda\n");
        casa_rainha++;
    } while (casa_rainha < 8);

    // Movimento do Cavalo: padrão em "L" (2 para cima e 1 para a direita)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) { // Apenas um movimento completo
        for (int j = 0; j < 2; j++) {
            printf("cima\n");
        }
        printf("direita\n");
    }

    printf("\nFim do Desafio Xadrez\n");
    return 0;

    
}

  