#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo: "L" (duas casas para baixo e uma para a esquerda)
    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop for para mover duas casas para baixo
    for (int x = 1; x <= 2; x++) {
        printf("Baixo\n");
    }

    // Segundo loop while para mover uma casa para a esquerda
    int y = 1;
    while (y <= 1) {
        printf("Esquerda\n");
        y++;
    }

    return 0;
}