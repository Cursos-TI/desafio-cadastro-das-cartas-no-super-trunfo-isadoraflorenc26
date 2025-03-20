#include <stdio.h>

int main() {
    // Dados da cidade de São Paulo
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float PIB1 = 1100.0; // PIB em bilhões de reais
    int pontos_turisticos1 = 400;
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = PIB1 / populacao1;

    // Dados da cidade do Rio de Janeiro
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1200.27;
    float PIB2 = 400.0; // PIB em bilhões de reais
    int pontos_turisticos2 = 350;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = PIB2 / populacao2;

    int escolha;

    // Exibe o menu para o usuário escolher o atributo de comparação
    printf("=== SUPER TRUNFO: COMPARAÇÃO DE CIDADES ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    // Switch para escolher a comparação com base no atributo selecionado
    switch (escolha) {
        case 1:  // População
            printf("\nAtributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:  // Área
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:  // PIB
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, PIB1);
            printf("%s: %.2f bilhões de reais\n", cidade2, PIB2);
            if (PIB1 > PIB2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (PIB2 > PIB1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:  // Número de pontos turísticos
            printf("\nAtributo: Número de pontos turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:  // Densidade Demográfica (regra inversa: menor valor vence)
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:  // PIB per capita
            printf("\nAtributo: PIB per Capita\n");
            printf("%s: %.6f bilhões por habitante\n", cidade1, pib_per_capita1);
            printf("%s: %.6f bilhões por habitante\n", cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 6.\n");
    }

    return 0;
}