#include <stdio.h>
    int main(){
    //Estrutura para armazenar os dados da cidade 1
    char estado = 'A';
    char codigo [4] = 'A01';
    char cidade [20] = "saopaulo";
    int populacao = 12325;
    float area = 1521.110;
    float pib = 699.28;


    printf("digite a letra do estado\n");
    scanf("%s", &estado);

    printf("digite o codigo\n");
    scanf("%s", &codigo);

    printf("digite a cidade\n");
    scanf("%s", &cidade);

    printf("digite a populacao\n");
    scanf("%d", &populacao);

    printf("digite a area\n");
    scanf("%f", area);
    
    









    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
