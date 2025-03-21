#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de cidade
typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int densidade_demografica;
} Carta;

// Função para exibir os atributos disponíveis
void exibirMenu() {
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
}

// Função para obter a escolha do jogador garantindo que os atributos sejam diferentes
int escolherAtributo(int escolhido) {
    int opcao;
    do {
        exibirMenu();
        printf("Digite o número do atributo: ");
        scanf("%d", &opcao);
        if (opcao == escolhido) {
            printf("Você já escolheu esse atributo. Escolha outro!\n");
        }
    } while (opcao < 1 || opcao > 4 || opcao == escolhido);
    return opcao;
}

// Função para obter o valor do atributo selecionado
int obterValorAtributo(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return carta.densidade_demografica;
        default: return 0;
    }
}

int main() {
    // Cartas de exemplo
    Carta carta1 = {"São Paulo", 12300000, 1521, 699000, 8077};
    Carta carta2 = {"Rio de Janeiro", 6748000, 1200, 364000, 5623};

    int atributo1, atributo2;
    
    // Escolha dos atributos pelo jogador
    printf("Comparação entre %s e %s\n", carta1.nome, carta2.nome);
    atributo1 = escolherAtributo(0);
    atributo2 = escolherAtributo(atributo1);

    // Obtendo os valores dos atributos para cada carta
    int valor1_c1 = obterValorAtributo(carta1, atributo1);
    int valor1_c2 = obterValorAtributo(carta2, atributo1);
    int valor2_c1 = obterValorAtributo(carta1, atributo2);
    int valor2_c2 = obterValorAtributo(carta2, atributo2);

    // Determinação dos vencedores por atributo
    int pontos_c1 = 0, pontos_c2 = 0;

    pontos_c1 += (atributo1 == 4) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    pontos_c2 += (atributo1 == 4) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);
    
    pontos_c1 += (atributo2 == 4) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    pontos_c2 += (atributo2 == 4) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    // Soma dos atributos
    int soma_c1 = valor1_c1 + valor2_c1;
    int soma_c2 = valor1_c2 + valor2_c2;

    // Exibição do resultado
    printf("\nResultado:\n");
    printf("%s - %s: %d, %s: %d, Soma: %d\n", carta1.nome, (atributo1 == 1) ? "População" : (atributo1 == 2) ? "Área" : (atributo1 == 3) ? "PIB" : "Densidade", valor1_c1, (atributo2 == 1) ? "População" : (atributo2 == 2) ? "Área" : (atributo2 == 3) ? "PIB" : "Densidade", valor2_c1, soma_c1);
    printf("%s - %s: %d, %s: %d, Soma: %d\n", carta2.nome, (atributo1 == 1) ? "População" : (atributo1 == 2) ? "Área" : (atributo1 == 3) ? "PIB" : "Densidade", valor1_c2, (atributo2 == 1) ? "População" : (atributo2 == 2) ? "Área" : (atributo2 == 3) ? "PIB" : "Densidade", valor2_c2, soma_c2);

    // Determinação do vencedor
    if (soma_c1 > soma_c2) {
        printf("Vencedor: %s!\n", carta1.nome);
    } else if (soma_c2 > soma_c1) {
        printf("Vencedor: %s!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
