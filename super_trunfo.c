#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos dados e cálculos
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // Comparações
    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);

    return 0;
}
