#include <stdio.h>

int main() {
    // Dados de São Paulo (SP)
    char cidade1[] = "São Paulo";
    char estado1[] = "São Paulo";
    char codigo1[] = "SP01";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float PIB1 = 1100.0; // PIB em bilhões de reais
    int pontos_turisticos1 = 400;

    // Dados do Rio de Janeiro (RJ)
    char cidade2[] = "Rio de Janeiro";
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "RJ01";
    int populacao2 = 6700000;
    float area2 = 1200.27;
    float PIB2 = 400.0; // PIB em bilhões de reais
    int pontos_turisticos2 = 350;

    // Cálculo de Densidade Populacional e PIB per Capita
    float densidade_populacional1 = populacao1 / area1;
    float PIB_per_capita1 = PIB1 / populacao1;

    float densidade_populacional2 = populacao2 / area2;
    float PIB_per_capita2 = PIB2 / populacao2;

    // Comparação escolhida (população neste exemplo)
    // Comparação: População
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - São Paulo (SP): %d habitantes\n", populacao1);
    printf("Carta 2 - Rio de Janeiro (RJ): %d habitantes\n", populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação: Área
    printf("\nComparação de Cartas (Atributo: Área):\n");
    printf("Carta 1 - São Paulo (SP): %.2f km²\n", area1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f km²\n", area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação: PIB
    printf("\nComparação de Cartas (Atributo: PIB):\n");
    printf("Carta 1 - São Paulo (SP): %.2f bilhões de reais\n", PIB1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f bilhões de reais\n", PIB2);
    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação: Densidade Populacional
    printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - São Paulo (SP): %.2f habitantes/km²\n", densidade_populacional1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f habitantes/km²\n", densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação: PIB per Capita
    printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - São Paulo (SP): %.6f bilhões/habitante\n", PIB_per_capita1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.6f bilhões/habitante\n", PIB_per_capita2);
    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    // Comparação do Super Poder (somando todos os atributos numéricos)
    float super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1 + (1 / densidade_populacional1);
    float super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1 / densidade_populacional2);

    printf("\nComparação de Cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - São Paulo (SP): %.6f\n", super_poder1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.6f\n", super_poder2);
    if (super_poder1 > super_poder2) {
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    return 0;
}
