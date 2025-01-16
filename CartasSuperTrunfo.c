#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Rafael Castelani

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigoCidade1, codigoCidade2, codigoCidade13;
    char nomeCidade1[150], nomeCidade2[150], nomeCidade3[150];
    double popoulacaoCidade1, popoulacaoCidade2, popoulacaoCidade3;
    double areaCidade1, areaCidade2, areaCidade3;
    float pibCidade1 , pibCidade2, pibCidade3;
    int numerosPontosTuristicosCidade1, numerosPontosTuristicosCidade2, numerosPontosTuristicosCidade3;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da cidade 1: ");
    scanf("%d", &codigoCidade1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", &nomeCidade1);

    printf("Digite o total da População da Cidade 1: ");
    scanf("%lf", &popoulacaoCidade1); // Usando %lf para double

    printf("Digite o total de Área da Cidade 1: ");
    scanf("%lf", &areaCidade1); // Usando %lf para double

    printf("Digite o PIB da Cidade 1: ");
    scanf("%f", &pibCidade1); // Usando %f para float

    printf("Digite o Números de Pontos Turísticos da Cidade 1: ");
    scanf("%d", &numerosPontosTuristicosCidade1);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
