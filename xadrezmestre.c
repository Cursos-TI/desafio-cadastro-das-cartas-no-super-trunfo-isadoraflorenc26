#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

void moverRainha(int casas) {
    if (casas == 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas, int passo) {
    if (passo > casas) return; 

    for (int i = 1; i <= 1; i++) {
        printf("Cima, Direita\n");
    }

    moverBispo(casas, passo + 1);
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");

    int passosVerticais = 2, passosHorizontais = 1;
    
    for (int i = 1; i <= passosVerticais; i++) {
        printf("Cima\n");
    }

    for (int j = 1; j <= passosHorizontais; j++) {
        printf("Direita\n");
    }

    return 0;
}
