#include <stdio.h>
int main() {
    // Estrutura para armazenar os dados da cidade
    char estado[3];  
    char codigo[4];  
    char cidade[20]; 
    int populacao; 
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float divisao;

    divisao = populacao / area;
    divisao = pib / populacao;




    //imprimindo o testo na tela e lendo a entrada do usuário carta 1 
    //usando especificadores de formato 
    printf("Digite a sigla do estado:\n");
    scanf("%s", estado);  
    printf("Digite o código:\n");
    scanf("%s", codigo); 
    printf("Digite a cidade:\n");
    scanf("%s", cidade); 
    printf("Digite a população:\n");
    scanf("%d", &populacao); 
    printf("Digite a área:\n");
    scanf("%f", &area); 
    printf("Digite o PIB:\n");
    scanf("%f", &pib);  
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);  
    printf("digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional);
    printf("digite o pib per capita:\n");
    scanf("%f", &pib_per_capita);



    // Exibição dos dados cadastrados Carta 1
    printf("\nDados cadastrados Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos); 
    printf("densidade populacional: %f\n", densidade_populacional);
    printf("pib per capita: %.2f\n", pib_per_capita); 


     
    printf("\n");

    //imprimindo o testo na tela e lendo a entrada do usuário carta 2
    //usando especificadores de formato
    printf("Digite a sigla do estado:\n");
    scanf("%s", estado);  
    printf("Digite o código:\n");
    scanf("%s", codigo); 
    printf("Digite a cidade:\n");
    scanf("%s", cidade); 
    printf("Digite a população:\n");
    scanf("%d", &populacao); 
    printf("Digite a área:\n");
    scanf("%f", &area);  
    printf("Digite o PIB:\n");
    scanf("%f", &pib);  
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);  
    printf("digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional);
    printf("digite o pib per capita:\n");
    scanf("%f", &pib_per_capita);


    
    printf("\n");

    // Exibição dos dados cadastrados Carta 2
    printf("\nDados cadastrados Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos); 
    printf("densidade populacional: %.2f\n", densidade_populacional);
    printf("pib per capita: %.2f\n", pib_per_capita);

     
       
    return 0;
}
