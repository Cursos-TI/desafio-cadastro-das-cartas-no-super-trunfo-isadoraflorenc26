#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função que verifica se uma posição está vazia para o navio ser colocado
int pode_posicionar(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Verifica limites
        if (linha[i] < 0 || linha[i] >= TAMANHO_TABULEIRO || coluna[i] < 0 || coluna[i] >= TAMANHO_TABULEIRO)
            return 0;
        // Verifica sobreposição
        if (tabuleiro[linha[i]][coluna[i]] != AGUA)
            return 0;
    }
    return 1;
}

// Função para posicionar o navio após validação
void posicionar_navio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha[], int coluna[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[linha[i]][coluna[i]] = NAVIO;
    }
}

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // -------------------------
    // Navio 1 - Horizontal (linha 1, coluna 2 a 4)
    int linha1[TAMANHO_NAVIO] = {1, 1, 1};
    int coluna1[TAMANHO_NAVIO] = {2, 3, 4};

    if (pode_posicionar(tabuleiro, linha1, coluna1, TAMANHO_NAVIO))
        posicionar_navio(tabuleiro, linha1, coluna1, TAMANHO_NAVIO);

    // -------------------------
    // Navio 2 - Vertical (linha 5 a 7, coluna 7)
    int linha2[TAMANHO_NAVIO] = {5, 6, 7};
    int coluna2[TAMANHO_NAVIO] = {7, 7, 7};

    if (pode_posicionar(tabuleiro, linha2, coluna2, TAMANHO_NAVIO))
        posicionar_navio(tabuleiro, linha2, coluna2, TAMANHO_NAVIO);

    // -------------------------
    // Navio 3 - Diagonal principal (linha 0 a 2, coluna 0 a 2)
    int linha3[TAMANHO_NAVIO] = {0, 1, 2};
    int coluna3[TAMANHO_NAVIO] = {0, 1, 2};

    if (pode_posicionar(tabuleiro, linha3, coluna3, TAMANHO_NAVIO))
        posicionar_navio(tabuleiro, linha3, coluna3, TAMANHO_NAVIO);

    // -------------------------
    // Navio 4 - Diagonal secundária (linha 3 a 5, coluna 6 a 4)
    int linha4[TAMANHO_NAVIO] = {3, 4, 5};
    int coluna4[TAMANHO_NAVIO] = {6, 5, 4};

    if (pode_posicionar(tabuleiro, linha4, coluna4, TAMANHO_NAVIO))
        posicionar_navio(tabuleiro, linha4, coluna4, TAMANHO_NAVIO);

    // -------------------------
    // Exibe o tabuleiro final
    imprimir_tabuleiro(tabuleiro);

    return 0;
}