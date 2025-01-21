#include <stdio.h>

// Definição do número de estados
#define NUM_ESTADOS 8
// Definição do número de cidades por estado
#define NUM_CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct { // Cria um tipo chamado "Carta" com informações de uma cidade
    char codigoCarta[4];     // Código único da carta (ex: A01)
    char nomeCidade[50];     // Nome da cidade
    int populacao;           // População da cidade
    float area;              // Área da cidade em km²
    float PIB;               // PIB da cidade
    int pontosTuristicos;    // Quantidade de pontos turísticos
} Carta;

int main() {
    // Array para armazenar todas as cartas (uma por cidade)
    Carta cartas[NUM_ESTADOS * NUM_CIDADES];
    // Contador para rastrear o número total de cartas cadastradas
    int totalCartas = 0;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Países!\n");

    // Laço externo: percorre cada estado
    for (char estado = 'A'; estado < 'A' + NUM_ESTADOS; estado++) { // Itera sobre os estados representados pelas letras A a H
        // Laço interno: percorre cada cidade dentro de um estado
        for (int cidadeNum = 1; cidadeNum <= NUM_CIDADES; cidadeNum++) { // Itera sobre 4 cidades por estado
            Carta novaCarta; // Cria uma nova carta para armazenar os dados da cidade atual
            
            // Gera o código da carta combinando a letra do estado e o número da cidade
            sprintf(novaCarta.codigoCarta, "%c%02d", estado, cidadeNum);

            // Solicita os dados da cidade ao usuário
            printf("\n--- Cadastro da Carta %s ---\n", novaCarta.codigoCarta);

            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", novaCarta.nomeCidade); // Corrige o formato para capturar strings com espaços

            printf("Digite a populacao: ");
            scanf("%d", &novaCarta.populacao); // Lê a população

            printf("Digite a area em km²: ");
            scanf("%f", &novaCarta.area); // Lê a área

            printf("Digite o PIB: ");
            scanf("%f", &novaCarta.PIB); // Lê o PIB

            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &novaCarta.pontosTuristicos); // Lê os pontos turísticos

            // Armazena a nova carta no array de cartas
            cartas[totalCartas] = novaCarta;
            totalCartas++; // Incrementa o total de cartas cadastradas

            printf("Carta %s cadastrada com sucesso!\n", novaCarta.codigoCarta); // Confirmação de cadastro
        }
    }

    // Exibe todas as cartas cadastradas
    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < totalCartas; i++) { // Percorre todas as cartas cadastradas
        printf("\nCodigo da Carta: %s\n", cartas[i].codigoCarta); // Exibe o código da carta
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade); // Exibe o nome da cidade
        printf("Populacao: %d\n", cartas[i].populacao); // Exibe a população
        printf("Area em Km²: %.2f\n", cartas[i].area); // Exibe a área
        printf("PIB: %.2f\n", cartas[i].PIB); // Exibe o PIB
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos); // Exibe os pontos turísticos
    }

    // Mensagem final
    printf("\nCadastro concluido. Obrigado por participar do desafio Super Trunfo!\n");
    return 0; // Indica que o programa terminou com sucesso
}
