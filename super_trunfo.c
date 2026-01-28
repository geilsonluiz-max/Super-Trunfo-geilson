#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado;                // Letra de A a H
    char codigo[4];             // Ex: A01
    char cidade[50];            // Nome da cidade
    int populacao;              // População
    float area;                 // Área em km2
    float pib;                  // PIB
    int pontos_turisticos;      // Pontos turísticos
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // ===== CARTA 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // ===== CARTA 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // ===== EXIBICAO =====
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}