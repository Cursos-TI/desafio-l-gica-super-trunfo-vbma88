#include <stdio.h>

    int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[25], nomeCidade2[25];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // -------- Cadastro das cartas --------
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------- Menu de Comparação --------
    int opcao;
    printf("\n-----------------------------------\n");
    printf("MENU DE COMPARAÇÃO:\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Pontos Turísticos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparação:\n");

    switch(opcao) {
        case 1: // Comparação por População
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu pela Maior População!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu pela Maior População!\n");
            } else {
                // Comparação aninhada -> desempate pela Área
                if (area1 > area2) {
                    printf("População igual. Carta 1 venceu pelo critério de desempate: Maior Área!\n");
                } else if (area2 > area1) {
                    printf("População igual. Carta 2 venceu pelo critério de desempate: Maior Área!\n");
                } else {
                    printf("Empate absoluto (População e Área iguais)!\n");
                }
            }
            break;

        case 2: // Comparação por Área
            if (area1 > area2) {
                printf("Carta 1 venceu pela Maior Área!\n");
            } else if (area2 > area1) {
                printf("Carta 2 venceu pela Maior Área!\n");
            } else {
                // Comparação aninhada -> desempate pelo PIB
                if (pib1 > pib2) {
                    printf("Área igual. Carta 1 venceu pelo critério de desempate: Maior PIB!\n");
                } else if (pib2 > pib1) {
                    printf("Área igual. Carta 2 venceu pelo critério de desempate: Maior PIB!\n");
                } else {
                    printf("Empate absoluto (Área e PIB iguais)!\n");
                }
            }
            break;

        case 3: // Comparação por PIB
            if (pib1 > pib2) {
                printf("Carta 1 venceu pelo Maior PIB!\n");
            } else if (pib2 > pib1) {
                printf("Carta 2 venceu pelo Maior PIB!\n");
            } else {
                // Comparação aninhada -> desempate pelos Pontos Turísticos
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("PIB igual. Carta 1 venceu pelo critério de desempate: Mais Pontos Turísticos!\n");
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("PIB igual. Carta 2 venceu pelo critério de desempate: Mais Pontos Turísticos!\n");
                } else {
                    printf("Empate absoluto (PIB e Pontos Turísticos iguais)!\n");
                }
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 venceu por ter Mais Pontos Turísticos!\n");
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Carta 2 venceu por ter Mais Pontos Turísticos!\n");
            } else {
                // Comparação aninhada -> desempate pela População
                if (populacao1 > populacao2) {
                    printf("Pontos Turísticos iguais. Carta 1 venceu pelo critério de desempate: Maior População!\n");
                } else if (populacao2 > populacao1) {
                    printf("Pontos Turísticos iguais. Carta 2 venceu pelo critério de desempate: Maior População!\n");
                } else {
                    printf("Empate absoluto (Pontos Turísticos e População iguais)!\n");
                }
            }
            break;

        default:
            printf("Opção inválida! Escolha entre 1 e 4.\n");
    }

    return 0;
}