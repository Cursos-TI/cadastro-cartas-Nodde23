#include <stdio.h>

int main() {


//letras (Carta 1)
char estado;
char codigodacarta[3];
char cidade[50];
//numeros (Carta 1)
int população;
float área; 
float pib;
int pontosturisticos;

//letras (Carta 2)
char estado2;
char codigodacarta2[3];
char cidade2[50];
//numeros (Carta 2)
int população2;
float área2;
float pib2;
int pontosturisticos2;

printf("Desafio super trunfo\n");

//Preenchimento de informções da carta 1
printf("Carta 1:\n");
printf("Digite um estado (Utilize uma letra do A ao H):\n", estado);
scanf(" %c", &estado);

printf("Digite um codigo (Utilize números de 01 a 04):\n", codigodacarta);
scanf(" %s", &codigodacarta);

printf("Digite o nome da cidade:\n", cidade);
scanf(" %s", &cidade);

printf("Digite o número de habitantes na cidade:\n", população);
scanf(" %i", &população);

printf("Digite a área da cidade:\n", área);
scanf(" %f", &área);

printf("Digite o PIB da cidade (Seu número será convertido em bilhões posteriormente):\n", pib);
scanf(" %f", &pib);

printf("Digite a quantidade de pontos turísticos da cidade:\n", pontosturisticos);
scanf(" %i", &pontosturisticos);

//Preenchimento de informções da carta 2
printf("Carta 2:\n");
printf("Digite um estado (Utilize uma letra do A ao H):\n", estado2);
scanf(" %c", &estado2);

printf("Digite um codigo (Utilize números de 01 a 04):\n", codigodacarta2);
scanf(" %s", &codigodacarta2);

printf("Digite o nome da cidade:\n", cidade2);
scanf(" %s", &cidade2);

printf("Digite o número de habitantes na cidade:\n", população2);
scanf(" %i", &população2);

printf("Digite a área da cidade:\n", área2);
scanf(" %f", &área2);

printf("Digite o PIB da cidade (Seu número será convertido em bilhões posteriormente):\n", pib2);
scanf(" %f", &pib2);

printf("Digite a quantidade de pontos turísticos da cidade:\n", pontosturisticos2);
scanf(" %i", &pontosturisticos2);


//Exibição da carta 1
printf("Carta 1:\n");
printf("Estado: %c\n", estado);
printf("Código: %c%s\n", estado, codigodacarta);
printf("Nome de Cidade: %s\n", cidade);
printf("População: %i\n", população);
printf("Área: %.3fkm²\n", área);
printf("PIB: %f bilhões de reais\n", pib);
printf("Números de Pontos Turísticos: %i\n", pontosturisticos);

//Exibição da carta 2
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %c%s\n", estado2, codigodacarta2);
printf("Nome de Cidade: %s\n", cidade2);
printf("População: %i\n", população2);
printf("Área: %.3fkm²\n", área2);
printf("PIB: %f bilhões de reais\n", pib2);
printf("Números de Pontos Turísticos: %i\n", pontosturisticos2);

;
return 0;
}