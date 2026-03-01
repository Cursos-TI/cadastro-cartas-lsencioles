#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    // Área para definição das variáveis
    char estado;
    int numero;
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Área para entrada de dados
    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &numero);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Área para exibição dos dados
    printf("\n===== DADOS DA CARTA =====\n");
    printf("Codigo da Carta: %c%02d\n", estado, numero);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
