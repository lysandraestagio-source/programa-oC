#include <stdio.h>

int main() {

     char estado[50];
     char cidade[50];
     int carta;
     int populacao;
     float area;
     float pib;
     int pontos_turisticos;

     char estado2[50];
     char cidade2[50];
     int carta;
     int populacao2;
     float area2;
     float pib2;
     int pontos_turisticos2;

    printf("Cadastro de Carta - Super Trunfo\n");
     
    / cadastro da primeira carta
     
    printf("Identifique a carta (Ex.: 01, 02, etc):");
    scanf("%d", &carta);
     
    printf("Qual o nome do estado? ");
    scanf("%c", &estado);

    printf("Nome da cidade: ");
    scanf("%c", &cidade);

    printf("Digite o total da população: ");
    scanf("%d", &populacao);

    printf("Área em km2 (somente números): ");
    scanf("%f", &area);

    printf("Qual o PIB? ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

     / cadastro da segunda carta

    printf("Identifique a carta (Ex.: 01, 02, etc):");
    scanf("%d", &carta2);
     
    printf("Qual o nome do estado? ");
    scanf("%c", &estado2);

    printf("Nome da cidade: ");
    scanf("%c", &cidade2);

    printf("Digite o número total da população: ");
    scanf("%d", &populacao2);

    printf("Área em km2 (somente números): ");
    scanf("%f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos)2;


    printf("\n=== Dados da Carta %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km2\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    printf("\n=== Dados da Carta %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km2\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
     
    return 0;
}


