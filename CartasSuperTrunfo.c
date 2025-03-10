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
    float divisao_populacional;  // Para armazenar populacao / area
    float divisao_pib;  // Para armazenar pib / populacao

    // Solicitar entradas
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
    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional);
    printf("Digite o pib per capita:\n");
    scanf("%f", &pib_per_capita);

    // Cálculos
    divisao_populacional = populacao / area;
    divisao_pib = pib / populacao;

    // Exibição dos dados cadastrados Carta 1
    printf("\nDados cadastrados Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos); 
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita); 

    // Exibir os cálculos
    printf("\nCálculos:\n");
    printf("Densidade populacional (população / área): %.2f habitantes/km²\n", divisao_populacional);
    // Exibir o PIB per capita em bilhões, com mais casas decimais
    printf("PIB per capita (PIB / população): %.6f bilhões por habitante\n", divisao_pib); // Mostra até 6 casas decimais
    
    printf("\n");

    // Repetindo o processo para a carta 2 (pode ser otimizado, mas mantendo igual à sua estrutura)
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
    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade_populacional);
    printf("Digite o pib per capita:\n");
    scanf("%f", &pib_per_capita);

    // Recalcular para carta 2
    divisao_populacional = populacao / area;
    divisao_pib = pib / populacao;

    // Exibição dos dados cadastrados Carta 2
    printf("\nDados cadastrados Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos); 
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita); 

    // Exibir os cálculos para a carta 2
    printf("\nCálculos para Carta 2:\n");
    printf("Densidade populacional (população / área): %.2f habitantes/km²\n", divisao_populacional);
    // Exibir o PIB per capita em bilhões, com mais casas decimais
    printf("PIB per capita (PIB / população): %.6f bilhões por habitante\n", divisao_pib); // Mostra até 6 casas decimais


    return 0;
}