#include <stdio.h>

int main() {

    char estado[50];
    char cidade[50];
    int carta;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    char estado2[50];
    char cidade2[50];
    int carta2;
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    double densidade1, densidade2;
    double PibPerCapita1, PibPerCapita2;
    float superPoder1, superPoder2;

    printf("Cadastro de Carta - Super Trunfo\n");

    // =============================
    // PRIMEIRA CARTA
    // =============================

    printf("\nCadastrando a primeira carta\n");

    printf("Identifique a carta: ");
    scanf("%d", &carta);

    printf("Qual o nome do estado? ");
    scanf(" %[^\n]", estado);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite o total da população: ");
    scanf("%lu", &populacao);

    printf("Área em km2: ");
    scanf("%f", &area);

    printf("Qual o PIB? ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade1 = (double) populacao / area;
    PibPerCapita1 = pib / (double) populacao;

    // =============================
    // SEGUNDA CARTA
    // =============================

    printf("\nCadastrando a segunda carta\n");

    printf("Identifique a carta: ");
    scanf("%d", &carta2);

    printf("Qual o nome do estado? ");
    scanf(" %[^\n]", estado2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o total da população: ");
    scanf("%lu", &populacao2);

    printf("Área em km2: ");
    scanf("%f", &area2);

    printf("Qual o PIB? ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (double) populacao2 / area2;
    PibPerCapita2 = pib2 / (double) populacao2;

    // =============================
    // SUPER PODER
    // =============================

    superPoder1 =
        (float) populacao +
        area +
        pib +
        (float) pontos_turisticos +
        PibPerCapita1 +
        (1.0 / densidade1);

    superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        (float) pontos_turisticos2 +
        PibPerCapita2 +
        (1.0 / densidade2);

    // =============================
    // EXIBINDO DADOS
    // =============================

    printf("\n========== DADOS DA CARTA 1 ==========\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade: %.2lf\n", densidade1);
    printf("PIB per Capita: %.2lf\n", PibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n========== DADOS DA CARTA 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2lf\n", densidade2);
    printf("PIB per Capita: %.2lf\n", PibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =============================
    // COMPARAÇÃO
    // =============================

    int resultadoPopulacao = populacao > populacao2;
    int resultadoArea = area > area2;
    int resultadoPIB = pib > pib2;
    int resultadoPontos = pontos_turisticos > pontos_turisticos2;
    int resultadoDensidade = densidade1 < densidade2; // menor vence
    int resultadoPIBPerCapita = PibPerCapita1 > PibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    printf("\n========== COMPARAÇÃO ==========\n");

    printf("População: Carta %d venceu (%d)\n",
           resultadoPopulacao ? 1 : 2,
           resultadoPopulacao);

    printf("Área: Carta %d venceu (%d)\n",
           resultadoArea ? 1 : 2,
           resultadoArea);

    printf("PIB: Carta %d venceu (%d)\n",
           resultadoPIB ? 1 : 2,
           resultadoPIB);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           resultadoPontos ? 1 : 2,
           resultadoPontos);

    printf("Densidade: Carta %d venceu (%d)\n",
           resultadoDensidade ? 1 : 2,
           resultadoDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           resultadoPIBPerCapita ? 1 : 2,
           resultadoPIBPerCapita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           resultadoSuperPoder ? 1 : 2,
           resultadoSuperPoder);

    return 0;
}

