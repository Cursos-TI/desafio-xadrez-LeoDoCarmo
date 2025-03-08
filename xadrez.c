#include <stdio.h>
#include <stdlib.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Torre: movimento horizontal para a direita (5 casas) - Recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // Bispo: movimento diagonal para cima e direita (5 casas) - Recursão e loops aninhados
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;

    for (int i = 0; i < casasBispo; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    printf("\n");

    // Rainha: movimento horizontal para a esquerda (8 casas) - Recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // Movimento do Cavalo: 2 casas para cima, 1 casa para a direita - Loops complexos
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    return 0;
}
