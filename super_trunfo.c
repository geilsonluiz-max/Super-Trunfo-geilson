#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {

    // ===============================
    // Cadastro das cartas (pré-definidas)
    // ===============================

    Carta carta1 = {
        "SP",
        "A01",
        "Sao Paulo",
        12300000,
        1521.11,
        828000.0,
        15
    };

    Carta carta2 = {
        "RJ",
        "B02",
        "Rio de Janeiro",
        6000000,
        1200.27,
        410000.0,
        10
    };

    // ===============================
    // Cálculos obrigatórios
    // ===============================

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===============================
    // Comparação principal
    // Atributo escolhido: POPULAÇÃO
    // ===============================

    printf("=== COMPARACAO DE CARTAS SUPER TRUNFO ===\n\n");
    printf("Atributo utilizado: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n",
           carta1.cidade, carta1.estado, carta1.populacao);

    printf("Carta 2 - %s (%s): %d habitantes\n\n",
           carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    // ===============================
    // Exibição dos cálculos
    // ===============================

    printf("\n--- INFORMACOES CALCULADAS ---\n");

    printf("%s - Densidade Populacional: %.2f hab/km2\n",
           carta1.cidade, carta1.densidadePopulacional);

    printf("%s - PIB per capita: %.2f\n",
           carta1.cidade, carta1.pibPerCapita);

    printf("%s - Densidade Populacional: %.2f hab/km2\n",
           carta2.cidade, carta2.densidadePopulacional);

    printf("%s - PIB per capita: %.2f\n",
           carta2.cidade, carta2.pibPerCapita);

    return 0;
}