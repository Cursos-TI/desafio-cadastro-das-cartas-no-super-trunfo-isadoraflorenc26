#include <stdio.h>

int main() {
    char cidade[50]; 
    int populacao;
    float area, PIB;
    int pontos_turisticos;

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("\nResumo da cidade:\n");
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", pontos_turisticos);


    return 0; 
}