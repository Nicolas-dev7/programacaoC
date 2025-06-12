#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Entrada de dados - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Entrada de dados - Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados
    printf("=== Carta 1: %s (%c) ===\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    printf("=== Carta 2: %s (%c) ===\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    // Menu de escolha
    int opcao;
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB per Capita\n");
     printf("6 - Pontos Turísticos\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    printf("\n");

    // Comparação baseada na escolha
    printf("Comparando atributo: ");
    switch(opcao) {
        case 1:
            printf("População\n");
            printf("Carta 1: %d | Carta 2: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Área\n");
            printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("PIB\n");
            printf("Carta 1: %.2f bilhões | Carta 2: %.2f bilhões\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Densidade Populacional (MENOR vence)\n");
            printf("Carta 1: %.2f | Carta 2: %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("PIB per Capita\n");
            printf("Carta 1: %.2f | Carta 2: %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;
            
        case 6:
            printf("Pontos Turísticos\n");
            printf("Carta 1: %d | Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
