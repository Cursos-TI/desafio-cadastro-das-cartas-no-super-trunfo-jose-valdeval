#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


        // Carta 1
    // Declaração de variaveis
    char estado1;
    char idCarta1[5] = "01";
    char nomeCidade1[50];
    int populacao1;
    float areaTerritorio1;
    float PIB1;
    int pontosTuristicos1;

    // Fluxo de estradas
    printf("Cadastro da Carta 1:\n\n");

    printf("Digite o caracter representande do estado [A-H]: ");
    scanf("%c", &estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite o número correspondente a população: ");
    scanf("%d", &populacao1);

    printf("Digite o tamanho do territorio: ");
    scanf("%f", &areaTerritorio1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a quantia de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    // Declaração de variaveis
    char estado2;
    char idCarta2[5] = "02";
    char nomeCidade2[50];
    int populacao2;
    float areaTerritorio2;
    float PIB2;
    int pontosTuristicos2;

    // Fluxo de estradas
    printf("Cadastro da Carta 2:\n\n");

    printf("Digite o caracter representande do estado [A-H]: ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite o número correspondente a população: ");
    scanf("%d", &populacao2);

    printf("Digite o tamanho do territorio: ");
    scanf("%f", &areaTerritorio2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a quantia de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // Saidas
    // Fluxo de saida 1
    printf("\n\n\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, idCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", areaTerritorio1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n\n\n\n\n", pontosTuristicos1);

    // Fluxo de saida 2
    printf("\n\n\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, idCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", areaTerritorio2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n\n\n\n\n", pontosTuristicos2);


    return 0;
}
