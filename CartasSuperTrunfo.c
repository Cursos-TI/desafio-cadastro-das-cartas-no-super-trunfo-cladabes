#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //declaração das informações das cartas
    char estado;
    char codigo[4];
    char nomeCidade[40];
    int populacao;
    float area;
    float pib;
    int numPontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //instruções para usuário
    printf("Digite o Estado (letra A a H): \n");
    scanf("%c", &estado);
    printf("Digite o código da carta: \n");
    scanf("%c", &codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%c", &nomeCidade);
    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao);
    printf("Digite a area: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%c", &numPontosturisticos);



    return 0;
}
