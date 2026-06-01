#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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

  char estado2[50];
  char codigo2[50];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

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

  char titulo2[20] = "Carta Nº2";
  char aviso2[20] = "Responda Abaixo";
  printf("%s \n", titulo2);
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

  // Área para exibição dos dados da cidade

  printf("%s \n \n", titulo1);

  printf("Estado: %s \n", estado1);
  printf("Código do Estado: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %f \n", area1);
  printf("PIB: %f \n", pib1);
  printf("Quantos Pontos Turísticos: %d \n", pontos1);

  printf("%s \n \n", titulo2);

  printf("Estado: %s \n", estado2);
  printf("Código do Estado: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %f \n", area2);
  printf("PIB: %f \n", pib2);
  printf("Quantos Pontos Turísticos: %d \n", pontos2);

  return 0;
}
