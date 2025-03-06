
#include <stdio.h>

int main() {
    char cidade[50];
    int populacao;
    float area, PIB;
    int pontos_turisticos;

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("\nDados da cidade cadastrada:\n");
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0; 
}
