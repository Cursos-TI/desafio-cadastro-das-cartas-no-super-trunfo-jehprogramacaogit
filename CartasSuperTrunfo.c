#include <stdio.h>
int main() {
    // Estrutura para armazenar os dados da cidade
    char estado[3];  
    char codigo[4];  
    char cidade[20]; 
    char populacao[10]; 
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite a sigla do estado:\n");
    scanf("%s", estado);  
    printf("Digite o código:\n");
    scanf("%s", codigo); 
    printf("Digite a cidade:\n");
    scanf("%s", cidade); 

    printf("Digite a população:\n");
    scanf("%s", populacao); 

    printf("Digite a área:\n");
    scanf("%f", &area);  

    printf("Digite o PIB:\n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);  

    // Exibição dos dados cadastrados Carta 01
    printf("\nDados cadastrados Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %s habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);  
     
    printf("\n");

    printf("Digite a sigla do estado:\n");
    scanf("%s", estado);  
    printf("Digite o código:\n");
    scanf("%s", codigo); 
    printf("Digite a cidade:\n");
    scanf("%s", cidade); 

    printf("Digite a população:\n");
    scanf("%s", populacao); 

    printf("Digite a área:\n");
    scanf("%f", &area);  

    printf("Digite o PIB:\n");
    scanf("%f", &pib);  

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);  
    
    printf("\n");

    // Exibição dos dados cadastrados A02
    printf("\nDados cadastrados Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %s habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos); 
       
    return 0;
}
