#include <stdio.h>

int main() {
   
    char estado [1];
    char codigo[10];
    char nome[20];
    int populacao;
    float km;  
    float PIB;  
    int pontos_turisticos;
    
 printf("Carta 1:\n");
    

    printf("Digite um Estado: ");
    scanf(" %c", &estado);

    printf("Insira o Código: ");
    scanf("%s", codigo );

    printf("Digite o Nome da cidade: ");
    scanf("%s", nome);

    printf("Qual é a População: ");
    scanf("%d ", &populacao);   

    printf("KM: ");
    scanf("%f", &km);
    
    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Numero de Pontos turisticos: ");
    scanf("%d", &pontos_turisticos);


 printf("\nCarta Super Trunfo - Cidade\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("KM: %.2f\n", km);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
