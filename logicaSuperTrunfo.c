#include <stdio.h>

int main() {
    // Estrutura de dados das cartas
    char estado1[25], codigo1[4], cidade1[25];
    char estado2[25], codigo2[4], cidade2[25];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    int opcao;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo de densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // Menu interativo
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    switch (opcao) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("%s venceu na comparação de população!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu na comparação de população!\n", cidade2);
            } else { // empate → comparar área
                if (area1 > area2)
                    printf("Empate na população! %s venceu no desempate pela área!\n", cidade1);
                else if (area2 > area1)
                    printf("Empate na população! %s venceu no desempate pela área!\n", cidade2);
                else { // ainda empate → comparar PIB
                    if (pib1 > pib2)
                        printf("Empate na população e área! %s venceu no desempate pelo PIB!\n", cidade1);
                    else if (pib2 > pib1)
                        printf("Empate na população e área! %s venceu no desempate pelo PIB!\n", cidade2);
                    else
                        printf("As cartas estão completamente empatadas!\n");
                }
            }
            break;

        case 2: // Área
            if (area1 > area2)
                printf("%s venceu na comparação de área!\n", cidade1);
            else if (area2 > area1)
                printf("%s venceu na comparação de área!\n", cidade2);
            else
                printf("Empate na área!\n");
            break;

        case 3: // PIB
            if (pib1 > pib2)
                printf("%s venceu na comparação de PIB!\n", cidade1);
            else if (pib2 > pib1)
                printf("%s venceu na comparação de PIB!\n", cidade2);
            else
                printf("Empate no PIB!\n");
            break;

        case 4: // Pontos turísticos
            if (pontos1 > pontos2)
                printf("%s venceu na comparação de pontos turísticos!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("%s venceu na comparação de pontos turísticos!\n", cidade2);
            else
                printf("Empate nos pontos turísticos!\n");
            break;

        case 5: // Densidade populacional (menor vence)
            if (densidade1 < densidade2)
                printf("%s venceu na comparação de densidade populacional!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("%s venceu na comparação de densidade populacional!\n", cidade2);
            else
                printf("Empate na densidade populacional!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
    printf("\n============================\n");
    return 0;
}
