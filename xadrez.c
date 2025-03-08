#include <stdio.h>
#include <stdlib.h>

int main() {
    // Torre: movimento horizontal para a direita (5 casas)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo: movimento diagonal para cima e direita (5 casas)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha: movimento horizontal para a esquerda (8 casas)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo: 2 casas para baixo, 1 casa para a esquerda
    printf("\n\nMovimento do Cavalo:\n");
    for (int baixo = 0; baixo < 2; baixo++) {
        printf("Baixo\n");
    }
    int esquerda = 0;
    while (esquerda < 1) {
        printf("Esquerda\n");
        esquerda++;
    }

    return 0;
}
