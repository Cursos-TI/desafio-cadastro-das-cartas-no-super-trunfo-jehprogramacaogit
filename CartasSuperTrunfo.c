#include <stdio.h>
    int main(){
    //Estrutura para armazenar os dados da cidade 1
    char estado = "A";
    char código[4] = "A01";
    char nomedacidade [20] = "sao paulo";
    int polulação = 12325000;
    float áreakm² = 15221.11;
    float Pib = 699.28;
    int turísticos = 50;


    


        printf("digite o estado\n");
        scanf("%c", &estado);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
