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

    // Cálculo do PIB per capita (PIB / População)
    float pib_per_capita1 = (PIB1 * 1000000000) / populacao1; // PIB em reais
    float pib_per_capita2 = (PIB2 * 1000000000) / populacao2; // PIB em reais

    // Exibição dos dados cadastrados
    printf("\n=== Dados das cidades cadastradas ===\n");

    printf("\n📍 Cidade 1: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\n📍 Cidade 2: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}