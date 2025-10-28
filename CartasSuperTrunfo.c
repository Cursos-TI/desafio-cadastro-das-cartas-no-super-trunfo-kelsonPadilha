#include <stdio.h>

int main() {
    // ===== Variáveis da Carta 1 =====
    char estado1[30], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_capita1, super_poder1;

    // ===== Variáveis da Carta 2 =====
    char estado2[30], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_capita2, super_poder2;

    int opcao;

    // ===== Entrada de dados da Carta 1 =====
    printf("===== Cadastro da Carta 1 =====\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome do País: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // ===== Entrada de dados da Carta 2 =====
    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome do País: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_capita1 + (1.0f / densidade1);

    densidade2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_capita2 + (1.0f / densidade2);

    // ===== Menu Interativo =====
    printf("\n===== SUPER TRUNFO - MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo (1 a 7): ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    // ===== Comparação com Switch =====
    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nome1, populacao1);
            printf("%s: %lu habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB (trilhões)\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade)\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.10f\n", nome1, pib_capita1);
            printf("%s: %.10f\n", nome2, pib_capita2);
            if (pib_capita1 > pib_capita2)
                printf("Vencedor: %s\n", nome1);
            else if (pib_capita2 > pib_capita1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder (valor combinado)\n");
            printf("%s: %.2f\n", nome1, super_poder1);
            printf("%s: %.2f\n", nome2, super_poder2);
            if (super_poder1 > super_poder2)
                printf("Vencedor: %s\n", nome1);
            else if (super_poder2 > super_poder1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número entre 1 e 7.\n");
            break;
    }

    printf("====================================\n");
    return 0;
