#include <stdio.h>

int main() {
    char estado;
    char codigo[10];
    char nome[20];
    int populacao;
    float km;  
    float PIB;  
    int pontos_turisticos;
    int valor;

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("População: ");
    scanf("%d", &populacao);   

    printf("KM: ");
    scanf("%f", &km);
    
    printf("PIB ");
    scanf("%f", &PIB);

    printf("Numero de Pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    return 0;
}
