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

    // Cálculo da Densidade Populacional (População / Área)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita (PIB / População) - Convertendo para reais
    float pib_per_capita1 = (PIB1 * 1000000000) / populacao1;
    float pib_per_capita2 = (PIB2 * 1000000000) / populacao2;

    // Cálculo do "Super Poder"
    float super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição dos dados cadastrados
    printf("\n=== Dados das cidades cadastradas ===\n");

    printf("\n📍 Cidade 1: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n📍 Cidade 2: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação dos atributos
    printf("\n=== Comparação de Cartas ===\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2, pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder1 > super_poder2 ? 1 : 2, super_poder1 > super_poder2);

    return 0;
}