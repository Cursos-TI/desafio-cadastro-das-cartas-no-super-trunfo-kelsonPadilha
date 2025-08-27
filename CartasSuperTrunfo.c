#include <stdio.h>

int main(){
//carta 1
char Estado[2], código [4], cidade[100];  
unsigned long int População;
float áreaemkm², PIB;
int Númerodepontosturisticos;
float densidadepopulacional1, pibpercapita1, superpoder1;

char estado2[2], código2[4], cidade2[100];
int população2;
float area2,PIB2;
int pontos2;
float densidadepopulacional2, pibpercapita2, superpoder2;

/// entrada de dados carta 1
printf("\n=== cadastro carta1 ===\n");

printf("Digite seu Estado:\n", Estado);
scanf("%s", Estado);

printf("Digite o código:\n", código);
scanf("%s", código);

printf("Digite o nome da cidade:\n", cidade);
scanf(" %s", &cidade);

printf("Digite a população da cidade:\n", População);
scanf("%d",&População);

printf("Digite a área da cidade:\n", áreaemkm²);
scanf ("%f", &áreaemkm²);

printf("Digite o PIB:\n", PIB);
scanf("%f",&PIB);

printf("Digite o número de pontos turisticos:\n", Númerodepontosturisticos);
scanf("%d", &Númerodepontosturisticos);

// entrada de dados da carta 2

printf("\n=== cadastro carta 2 ===\n");

printf("digite o estado:");
scanf("%s", estado2);

printf("digite o codigo:");
scanf("%s", código2);

printf("digite o nome da 2º cidade:");
scanf("%s", cidade2);

printf("digite a populaçao:");
scanf("%d", &população2);

printf("digite a area em km²:");
scanf("%f", &area2);

printf("digite o PIB:");
scanf("%f", &PIB2);

printf("digite o número de pontos turisticos:");
scanf("%d", &pontos2);

///saida formatada

printf("\n===dados das cartas===\n");

printf("\ncarta1\n");
printf("estado: %s\n", Estado);
printf("código: %s\n", código);
printf("cidade: %s\n", cidade);
printf("População: %d\n", População);
printf("área: %.2f km²\n", áreaemkm²);
printf("PIB: %.2f\n", PIB);
printf("pontos turisticos %d\n", Númerodepontosturisticos);

//cálculo 1

densidadepopulacional1 = População / áreaemkm²;
pibpercapita1 = PIB / População;
superpoder1 = (float)População + áreaemkm² + PIB + 
                                                Númerodepontosturisticos + pibpercapita1 + 
                                                (1.0f / densidadepopulacional1);

printf("A densidade populacional é: %f\n", População/áreaemkm²);
printf("O PIB per capita é: %f\n", PIB/População);

printf("\ncarta2\n");
printf("estado: %s\n", estado2);
printf("código: %s\n", código2);
printf("cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("área: %.2f km²\n", area2);
printf("PIB: %.2f\n", PIB2);
printf("pontos turisticos %d\n",pontos2);

// cálculo 2

densidadepopulacional2 = população2 / area2;
pibpercapita2 = PIB2 / população2;
superpoder2 = (float)população2 + area2 + PIB2 +
                                            pontos2 + pibpercapita2+
                                            (1.0f / densidadepopulacional2);


printf("A densidade populacional é: %f\n", população2/area2);
printf("O PIB per capita é: %f\n", PIB2/população2);

printf("população: Carta 1 venceu (%d)\n",População > população2);
printf("Area: carta 1 venceu (%d)\n", áreaemkm² > area2);
printf(" PIB: carta 1 venceu (%d)\n", PIB > PIB2);
printf("Pontos Turisticos: carta 1 venceu (%d)\n", Númerodepontosturisticos > pontos2);
printf("densidade populacional: carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);
// densidade a menor vence
printf("PIB per capita: carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
printf("Super poder: carta 1 venceu (%d)\n", superpoder1 > superpoder2);


return 0;
}