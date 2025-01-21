#include <stdio.h>


#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosTuristicos;
} Carta;

int main() {
    Carta cartas[NUM_ESTADOS * NUM_CIDADES];
    int totalCartas = 0;

    printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Países!\n");

    // Loop para cadastrar cartas
    for (char estado = 'A'; estado < 'A' + NUM_ESTADOS; estado++) {
        for (int cidadeNum = 1; cidadeNum <= NUM_CIDADES; cidadeNum++) {
            Carta novaCarta;
            sprintf(novaCarta.codigoCarta, "%c%02d", estado, cidadeNum); // Gera o código da carta
            
            printf("\n--- Cadastro da Carta %s ---\n", novaCarta.codigoCarta);

            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", novaCarta.nomeCidade);

            printf("Digite a populacao: ");
            scanf("%d", &novaCarta.populacao);

            printf("Digite a area em km²: ");
            scanf("%f", &novaCarta.area);

            printf("Digite o PIB: ");
            scanf("%f", &novaCarta.PIB);

            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &novaCarta.pontosTuristicos);

            // Armazena a carta no array
            cartas[totalCartas] = novaCarta;
            totalCartas++;

            printf("Carta %s cadastrada com sucesso!\n", novaCarta.codigoCarta);
        }
    }

    // Exibe todas as cartas cadastradas
    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < totalCartas; i++) {
        printf("\nCodigo da Carta: %s\n", cartas[i].codigoCarta);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area em Km²: %.2f\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].PIB);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    printf("\nCadastro concluido. Obrigado por participar do desafio Super Trunfo!\n");
    return 0;
}