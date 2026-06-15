#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio 1: Nível Novato
// Objetivo: Implementar o Comando IF no programa

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50];
  char codigo1[50];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;
  float pibPerCapita1;
  float inverso1;

  char estado2[50];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pibPerCapita2;
  float inverso2;

  // Área para entrada de dados

  char titulo1[20] = "Carta Nº1";
  char aviso1[20] = "Responda Abaixo";
  printf("%s \n", titulo1);
  printf("%s \n \n", aviso1);

  // Carta Nº1
  printf("Qual é o Estado:  \n");
  scanf("%s", estado1);

  printf("Qual é o Código:  \n");
  scanf("%s", codigo1);

  printf("Qual é a Cidade:  \n");
  scanf("%s", cidade1);

  printf("Quanto de População:  \n");
  scanf("%d", &populacao1);

  printf("Qual a área:  \n");
  scanf("%f", &area1);

  printf("Qual o PIB:  \n");
  scanf("%f", &pib1);

  printf("Quantos Pontos Turísticos possui:  \n");
  scanf("%d", &pontos1);

  printf("\n--\n");

  char titulo2[20] = "Carta Nº2";
  char aviso2[20] = "Responda Abaixo";
  printf("\n %s \n", titulo2);
  printf("%s \n \n", aviso2);

  // Carta Nº2
  printf("Qual é o Estado:  \n");
  scanf("%s", estado2);

  printf("Qual é o Código:  \n");
  scanf("%s", codigo2);

  printf("Qual é a Cidade:  \n");
  scanf("%s", cidade2);

  printf("Quanto de População:  \n");
  scanf("%d", &populacao2);

  printf("Qual a área:  \n");
  scanf("%f", &area2);

  printf("Qual o PIB:  \n");
  scanf("%f", &pib2);

  printf("Quantos Pontos Turísticos possui:  \n");
  scanf("%d", &pontos2);

  // Calculo da densidade demográfica e do PIB per capita para as cidades

  densidade1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  densidade2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Inverso da Densidade

  inverso1 = 1.0 / densidade1;
  inverso2 = 1.0 / densidade2;

  // Área para exibição dos dados da cidade
  printf("\n~~~~~~~~~~~~~~~~\n");

  printf("\n %s \n", titulo1);

  printf("Estado: %s \n", estado1);
  printf("Código do Estado: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Quantos Pontos Turísticos: %d \n", pontos1);
  printf("Densidade Demográfica: %.2f hab/km² \n", densidade1);
  printf("PIB per Capita: %.2f reais \n", pibPerCapita1);
  printf("Inverso da Densidade: %.2f hab/km² \n", inverso1);

  printf("\n %s \n", titulo2);

  printf("Estado: %s \n", estado2);
  printf("Código do Estado: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Quantos Pontos Turísticos: %d \n", pontos2);
  printf("Densidade Demográfica: %.2f hab/km² \n", densidade2);
  printf("PIB per Capita: %.2f reais \n", pibPerCapita2);
  printf("Inverso da Densidade: %.2f hab/km² \n", inverso2);

  printf("\n--SUPER PODER-- \n \n");

  // Super Poder

  float poder1;
  float poder2;

  poder1 = populacao1 + area1 + pib1 + pontos1 + inverso1 + pibPerCapita1;

  poder2 = populacao2 + area2 + pib2 + pontos2 + inverso2 + pibPerCapita2;

  printf("Super Poder de %s é de: %.2f \n", cidade1, poder1);
  printf("Super Poder de %s é de: %.2f \n", cidade2, poder2);

  // Resultado
  printf("\n--COMPARAÇÃO--\n");
  
  printf("\n==POPULAÇÃO==\n");
  printf("%s: %d \n", cidade1, populacao1);
  printf("%s: %d \n", cidade2, populacao2);
  
  
  if (populacao1 > populacao2) {
      printf("%s possui mais população que %s", cidade1, cidade2);
  }
  else {
      printf("%s possui mais população que %s", cidade2, cidade1);
  }

  return 0;
}
