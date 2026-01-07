#include <stdio.h>

int main() {

     char estado;
     char codigo[4];
     char cidade[50];
     int populacao;
     float area;
     float pib;
     int pontos_turisticos;

     char estado2;
     char codigo2[4];
     char cidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontos_turisticos2;

    printf("=== Cadastro de Carta - Super Trunfo ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Codigo da carta (A01, A02...): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area em km2: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n=== Dados da Carta ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    return 0;
}


