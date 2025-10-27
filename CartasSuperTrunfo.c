#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // ===== Entrada de dados da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1); // lê até o usuário pressionar ENTER

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);



    // ===== Entrada de dados da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

     // ===== Cálculos =====
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1; // PIB vem em bilhões, convertemos para reais

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // ===== Exibição dos dados =====
    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f reais\n", pib_per_capita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f reais\n", pib_per_capita2);

    return 0;
}

