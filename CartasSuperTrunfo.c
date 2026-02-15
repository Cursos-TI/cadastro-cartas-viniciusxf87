#include <stdio.h>

int main() {

  char estado1;
  char codigo1[10];
  char cidade1[50];
  unsigned long populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float inverso1;
  float pibReais1;
  float superPoder1;

  char estado2;
  char codigo2[10];
  char cidade2[50];
  unsigned long populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float inverso2;
  float pibReais2;
  float superPoder2;

  printf("Cadastro da Carta 1\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  densidadePopulacional1 = populacao1 / area1;
  pibReais1 = pib1 * 1000000000;
  pibPerCapita1 = pibReais1 / populacao1;
  inverso1 = area1 / populacao1;

  superPoder1 = populacao1 + area1 + pibReais1 + pontos1 + pibPerCapita1 + inverso1;

  printf("\nCadastro da Carta 2\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  densidadePopulacional2 = populacao2 / area2;
  pibReais2 = pib2 * 1000000000;
  pibPerCapita2 = pibReais2 / populacao2;
  inverso2 = area2 / populacao2;

  superPoder2 = populacao2 + area2 + pibReais2 + pontos2 + pibPerCapita2 + inverso2;

  printf("\nCARTAS CADASTRADAS\n");

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  printf("\nComparacao de Cartas:\n\n");

  printf("Populacao: %s (%d)\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu", populacao1 > populacao2);

  printf("Area: %s (%d)\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu", area1 > area2);

  printf("PIB: %s (%d)\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu", pib1 > pib2);

  printf("Pontos Turisticos: %s (%d)\n", pontos1 > pontos2 ? "Carta 1 venceu" : "Carta 2 venceu", pontos1 > pontos2);

  printf("Densidade Populacional: %s (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? "Carta 1 venceu" : "Carta 2 venceu",densidadePopulacional1 < densidadePopulacional2);

  printf("PIB per Capita: %s (%d)\n", pibPerCapita1 > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu", pibPerCapita1 > pibPerCapita2);

  printf("Super Poder: %s (%d)\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu", superPoder1 > superPoder2);

  //Atributo

  printf("\nComparacao de Cartas(Atributo: Area\n)");

printf("Carta 1 - %s: %.2f\n",cidade1,area1);
printf("Carta 2 - %s: %.2f\n",cidade2,area2);

if(area1>area2){
    printf("%Resultado: Carta1(%s) venceu\n", cidade1);
}
else{
    if(area2>area1){
        printf("%Resultado: Carta1(%s) venceu\n", cidade2);
    }
}

  
  
  

  return 0;
}
