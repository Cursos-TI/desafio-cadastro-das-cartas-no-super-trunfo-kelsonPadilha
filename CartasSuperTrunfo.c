#include <stdio.h>

int main(){
//carta 1
char Estado[2];  
char código[4];
char cidade[100];
int População;
float áreaemkm²;
float PIB;
int Númerodepontosturisticos;

char estado2[2];
char código2[4];
char cidade2[100];
int população2;
float area2;
float PIB2;
int pontos2;

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

printf("digite o número de pontos turisticos");
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

printf("\ncarta2\n");
printf("estado: %s\n", estado2);
printf("código: %s\n", código2);
printf("cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("área: %.2f km²\n", area2);
printf("PIB: %.2f\n", PIB2);
printf("pontos turisticos %d\n",pontos2);


return 0;
}