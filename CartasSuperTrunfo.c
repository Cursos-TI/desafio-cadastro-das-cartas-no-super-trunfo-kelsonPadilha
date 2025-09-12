#include <stdio.h>

int main() {
    // carta 1
    char estado1[3], codigo1[10], cidade1[100];
    int populacao1, pontos1;
    float area1, pib1;
    float densidade1, pibPerCapita1, superpoder1;

    // carta 2
    char estado2[3], codigo2[10], cidade2[100];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, pibPerCapita2, superpoder2;

    // Entrada de dados carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (UF): ");
    scanf("%s", estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // aceita espaços

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões R$): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (UF): ");
    scanf("%s", estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões R$): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibindo os dados das cartas
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f R$\n", pibPerCapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f R$\n", pibPerCapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Comparações
    printf("\n=== Comparações ===\n");

    printf("\nComparação por População:\n");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu!\n");
    else if (populacao2 > populacao1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por Área:\n");
    if (area1 > area2)
        printf("Carta 1 venceu!\n");
    else if (area2 > area1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por PIB:\n");
    if (pib1 > pib2)
        printf("Carta 1 venceu!\n");
    else if (pib2 > pib1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por Pontos Turísticos:\n");
    if (pontos1 > pontos2)
        printf("Carta 1 venceu!\n");
    else if (pontos2 > pontos1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por Densidade Populacional (menor vence):\n");
    if (densidade1 < densidade2)
        printf("Carta 1 venceu!\n");
    else if (densidade2 < densidade1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por PIB per capita:\n");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 venceu!\n");
    else if (pibPerCapita2 > pibPerCapita1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    printf("\nComparação por Superpoder:\n");
    if (superpoder1 > superpoder2)
        printf("Carta 1 venceu!\n");
    else if (superpoder2 > superpoder1)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}
