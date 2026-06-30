#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio: Mestre
// Objetivo: Compara dois atributos e somar

int main() {
    // Carta 1
    char estado1[50], codigo1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Entrada Carta 1
    printf("== CARTA 1 ==\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\n== CARTA 2 ==\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos simples (sem densidade pra evitar complexidade desnecessária aqui)
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float inverso1 = 1.0 / (populacao1 / area1);
    float inverso2 = 1.0 / (populacao2 / area2);

    // Escolha dos atributos
    int atributo1, atributo2;

    printf("\n== MENU ==\n");

    printf("Escolha o primeiro atributo:\n");
    printf("1.População 2.Area 3.PIB 4.Pontos 5.Densidade\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo:\n");
    printf("1.População 2.Area 3.PIB 4.Pontos 5.Densidade\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você não pode escolher o mesmo atributo!\n");
        return 0;
    }

    float soma1 = 0, soma2 = 0;
    char *nomeA1 = "", *nomeA2 = "";

    // FUNÇÃO LÓGICA (ATRIBUTO 1)
    switch (atributo1) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            nomeA1 = "Populacao";
            break;

        case 2:
            soma1 += area1;
            soma2 += area2;
            nomeA1 = "Area";
            break;

        case 3:
            soma1 += pib1;
            soma2 += pib2;
            nomeA1 = "PIB";
            break;

        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            nomeA1 = "Pontos Turisticos";
            break;

        case 5:
            soma1 += inverso1;
            soma2 += inverso2;
            nomeA1 = "Densidade";
            break;
    }

    // FUNÇÃO LÓGICA (ATRIBUTO 2)
    switch (atributo2) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            nomeA2 = "Populacao";
            break;

        case 2:
            soma1 += area1;
            soma2 += area2;
            nomeA2 = "Area";
            break;

        case 3:
            soma1 += pib1;
            soma2 += pib2;
            nomeA2 = "PIB";
            break;

        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            nomeA2 = "Pontos Turisticos";
            break;

        case 5:
            soma1 += inverso1;
            soma2 += inverso2;
            nomeA2 = "Densidade";
            break;
    }

    // EXIBIÇÃO
    printf("\n============================\n");
    printf("RESULTADO FINAL\n");
    printf("============================\n\n");

    printf("Cidade 1: %s\n", cidade1);
    printf("Atributos: %s e %s\n", nomeA1, nomeA2);
    printf("Soma: %.2f\n\n", soma1);

    printf("Cidade 2: %s\n", cidade2);
    printf("Atributos: %s e %s\n", nomeA1, nomeA2);
    printf("Soma: %.2f\n\n", soma2);

    // DECISÃO FINAL
    printf("==== VENCEDOR ====\n");

    if (soma1 > soma2) {
        printf("%s venceu!\n", cidade1);
    }
    else if (soma2 > soma1) {
        printf("%s venceu!\n", cidade2);
    }
    else {
        printf("Empate!\n");
    }
  
  return 0;
}
