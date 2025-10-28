#include <stdio.h>
#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados de cada carta
    struct Carta {
        char estado;
        char codigo[4];
        char nomeCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
        float superPoder;
    };

    struct Carta carta1, carta2;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ===== Cálculos das duas cartas =====
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1 / carta1.densidadePopulacional);

    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1 / carta2.densidadePopulacional);

    // ===== Exibição dos dados =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // ===== Comparações entre as cartas =====
    printf("\n=== Comparações de cartas ===\n");

    int resultado;

    resultado = carta1.populacao > carta2.populacao;
    printf("População: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.area > carta2.area;
    printf("Área: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.pib > carta2.pib;
    printf("PIB: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.pontosTuristicos > carta2.pontosTuristicos;
    printf("Pontos Turísticos: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.pibPerCapita > carta2.pibPerCapita;
    printf("PIB per Capita: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.densidadePopulacional < carta2.densidadePopulacional; // menor vence
    printf("Densidade Populacional: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    resultado = carta1.superPoder > carta2.superPoder;
    printf("Super Poder: CARTA %d VENCEU (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}


