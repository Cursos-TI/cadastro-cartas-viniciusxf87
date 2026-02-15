#include <stdio.h>

int main() {

  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidadePopulacional1;
  float pibCapta1;

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidadePopulacional2;
  float pibCapta2;

  printf("Cadastro da Carta 1\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  densidadePopulacional1 = populacao1 / area1;
  pibCapta1 = pib1 / populacao1;

  printf("\nCadastro da Carta 2\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  densidadePopulacional2 = populacao2 / area2;
  pibCapta2 = pib2 / populacao2;

  printf("\nCARTAS CADASTRADAS\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibCapta1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibCapta2);

  return 0;
}
