#include <stdio.h> 

int main (){

    // Dados da Carta 1 
    int populacao; 
    int pontos_turisticos; 
    float area; 
    float pib; 
    char codigo[20]; 

    // Dados da Carta 2 
    int populacao2; 
    int pontos_turisticos2; 
    float area2; 
    float pib2; 
    char codigo2[20]; 

     // Abertura do mesmo 
printf("Desafio Aula: Super_Trunfo_C_Estacio. \n"); 

     // Inserir os dados da PRIMEIRA*1 carta  
printf("Cadastro, digite o código da primeira cidade: \n");
scanf("%s", codigo); 

printf("Digite a área desta cidade: \n"); 
scanf("%f", &area); 

printf("Digite a população: \n");
scanf("%d", &populacao);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontos_turisticos);

     // Inserir os dados da SEGUNDA*2 carta  
printf("Cadastro, digite o código da segunda cidade: \n");
scanf("%s", &codigo2); 

printf("Digite a área desta cidade: \n"); 
scanf("%f", &area2); 

printf("Digite a população: \n");
scanf("%d", &populacao2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);

     //Apresentação dos dados da PRIMEIRA*1 carta: 
printf("Dados inseridos da Primeira Carta: \n"); 
printf("Código: %s\n", codigo); 
printf("Àrea: %f", area); 
printf("População: %d", populacao);
printf("PIB: %f", pib); 
printf("Pontos Turísticos: %d", pontos_turisticos); 

     //Apresentação dos dados da SEGUNDA*2 carta:
printf("Dados inseridos da Segunda Carta: \n"); 
printf("Código: %s\n", codigo2); 
printf("Àrea: %f", area2); 
printf("População: %d", populacao2);
printf("PIB: %f", pib2); 
printf("Pontos Turísticos: %d", pontos_turisticos2); 




return 0; 

}