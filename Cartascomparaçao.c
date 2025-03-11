#include <stdio.h>

int main() {
    // Dados de São Paulo
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float PIB1 = 1100.0; // PIB em bilhões de reais
    int pontos_turisticos1 = 400;

    // Dados do Rio de Janeiro
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.27;
    float PIB2 = 400.0; // PIB em bilhões de reais
    int pontos_turisticos2 = 350;

    // Calcular a Densidade Populacional (População / Área)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Calcular o PIB per capita (PIB / População)
    float pib_per_capita1 = PIB1 * 1000000000 / populacao1; // PIB em reais
    float pib_per_capita2 = PIB2 * 1000000000 / populacao2; // PIB em reais

    // Atributo escolhido para comparação
    int opcao = 1; // Atributo escolhido (1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita)
    float valor1, valor2;

    // Determinar os valores a serem comparados
    switch (opcao) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            printf("\nComparação de cartas (Atributo: População):\n");
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            printf("\nComparação de cartas (Atributo: Área):\n");
            break;
        case 3: // PIB
            valor1 = PIB1;
            valor2 = PIB2;
            printf("\nComparação de cartas (Atributo: PIB):\n");
            break;
        case 4: // Densidade Populacional
            valor1 = densidade1;
            valor2 = densidade2;
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            break;
        case 5: // PIB per capita
            valor1 = pib_per_capita1;
            valor2 = pib_per_capita2;
            printf("\nComparação de cartas (Atributo: PIB per capita):\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa em caso de opção inválida
    }

    // Exibir os valores para comparação
    printf("Carta 1 - %s: %.2f\n", cidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", cidade2, valor2);

    // Determinar a carta vencedora
    if (opcao == 4) { // Para Densidade Populacional, a menor densidade vence
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (valor2 < valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else { // Para os outros atributos, o maior valor vence
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (valor2 > valor1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}