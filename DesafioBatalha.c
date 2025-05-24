#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 5
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

// Função que inicializa o tabuleiro com água
void inicializar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para exibir o tabuleiro
void imprimir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro Final:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == AGUA) printf("0 ");
            else if (tabuleiro[i][j] == NAVIO) printf("3 ");
            else if (tabuleiro[i][j] == HABILIDADE) printf("5 ");
            else printf("? ");
        }
        printf("\n");
    }
}

// Gera a matriz em forma de cone apontando para baixo
void gerar_cone(int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            habilidade[i][j] = (j >= (2 - i) && j <= (2 + i)) ? 1 : 0;
        }
    }
}

// Gera a matriz em forma de cruz
void gerar_cruz(int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            habilidade[i][j] = (i == 2 || j == 2) ? 1 : 0;
        }
    }
}

// Gera a matriz em forma de octaedro (losango)
void gerar_octaedro(int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            habilidade[i][j] = (abs(i - 2) + abs(j - 2) <= 2) ? 1 : 0;
        }
    }
}

// Sobrepõe a matriz de habilidade ao tabuleiro, centrando na origem
void aplicar_habilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE], int origem_linha, int origem_coluna) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (habilidade[i][j] == 1) {
                int linha = origem_linha - 2 + i;
                int coluna = origem_coluna - 2 + j;
                if (linha >= 0 && linha < TAMANHO_TABULEIRO && coluna >= 0 && coluna < TAMANHO_TABULEIRO) {
                    if (tabuleiro[linha][coluna] == AGUA) {
                        tabuleiro[linha][coluna] = HABILIDADE;
                    }
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    inicializar_tabuleiro(tabuleiro);

    // Posiciona alguns navios fixos
    tabuleiro[1][1] = NAVIO;
    tabuleiro[1][2] = NAVIO;
    tabuleiro[1][3] = NAVIO;
    tabuleiro[5][5] = NAVIO;
    tabuleiro[6][5] = NAVIO;
    tabuleiro[7][5] = NAVIO;

    // Matrizes para as habilidades
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];

    gerar_cone(cone);
    gerar_cruz(cruz);
    gerar_octaedro(octaedro);

    // Aplicando as habilidades no tabuleiro
    aplicar_habilidade(tabuleiro, cone, 2, 2);       // Cone centrado em (2,2)
    aplicar_habilidade(tabuleiro, cruz, 5, 5);       // Cruz centrada em (5,5)
    aplicar_habilidade(tabuleiro, octaedro, 7, 7);   // Octaedro centrado em (7,7)

    imprimir_tabuleiro(tabuleiro);
    return 0;
}