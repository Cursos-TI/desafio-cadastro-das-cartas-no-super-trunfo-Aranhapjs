#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Programa para exibir 02 cartas dos estados Brasileiros 
// Desenvolvido pelo Aluno: Júnior Aranha - Polo Belém /PA    


int main ()
{

// Declarando as variáveis 
    
char estado1[50]; 
char estado2[50]; 
char cidade1[50];
char cidade2[50];
char codigo_carta1[50];
char codigo_carta2[50];
int populacao1, pturisticos1, populacao2, pturisticos2;
float area1, pib1, area2, pib2;


// Interagindo com o uuário e recuperando as informações digitadas  

printf("Desafio Super Trunfo \n");
printf("\n");
printf("========Carta 1======== \n");
printf("Digite seu Estado:  \n");
scanf("%s", estado1);
printf("Digite o Codigo da Carta: \n");
scanf("%s", codigo_carta1);
printf("Digite a sua Cidade: \n");
scanf("%s", cidade1);
printf("Digite a sua População em Milhões:  \n");
scanf("%d", &populacao1);
printf("Digite a Área em KM²: \n");
scanf("%f", &area1);
printf("Pib em Bilhões:  \n");
scanf("%f", &pib1);
printf("Digite o Número de pontos turisticos: \n");
scanf("%d", &pturisticos1);
printf("\n");
printf("=======Carta 2=======  \n");
printf("Digite seu Estado:  \n");
scanf("%s", estado2);
printf("Digite o Codigo da Carta: \n");
scanf("%s", codigo_carta2);
printf("Digite a sua Cidade: \n");
scanf("%s", cidade2);
printf("Digite a sua População em Milhões:  \n");
scanf("%d", &populacao2);
printf("Digite a Área em KM²: \n");
scanf("%f", &area2);
printf("Pib em Bilhões:  \n");
scanf("%f", &pib2);
printf("Digite o Número de pontos turisticos: \n");
scanf("%d", &pturisticos2);

// Listando as informações das Cartas difitadas pelo usuário

printf("=======Carta1======= \n");
printf("\n");
printf("Estado: %s", estado1);
printf("\n");
printf("Codigo da Carta: %s", codigo_carta1);
printf("\n");
printf("Cidade: %s", cidade1);
printf("\n");
printf("População em Milhões: %d", populacao1);
printf("\n");
printf("Área em KM²: %.3f", area1);
printf("\n");
printf("Pib em Bilhões: %.3f", pib1);
printf("\n");
printf("Números de Pontos Turísticos: %d", pturisticos1);
printf("\n");
printf("\n");
printf("=======Carta2======= \n");
printf("\n");
printf("Estado: %s", estado2);
printf("\n");
printf("Codigo da Carta: %s", codigo_carta2);
printf("\n");
printf("Cidade: %s", cidade2);
printf("\n");
printf("População em Milhões: %d", populacao2);
printf("\n");
printf("Área em KM²: %.3f", area2);
printf("\n");
printf("Pib em Bilhões: %.3f", pib2);
printf("\n");
printf("Número de Pontos Turísticos: %d", pturisticos2);
printf("\n");

return 0;

}








