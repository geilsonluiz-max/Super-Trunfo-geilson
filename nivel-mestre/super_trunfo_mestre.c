#include <stdio.h>
#include <string.h>

/*
 Estrutura que representa uma carta do Super Trunfo
 Contém apenas atributos numéricos para comparação
*/
typedef struct {
    char pais[50];
    long populacao;
    float area;
    float pib;
    float densidade;
} Carta;

/*
 Função que exibe o menu de atributos.
 O atributo já escolhido é "bloqueado" e não aparece novamente.
*/
void mostrarMenu(int atributoBloqueado) {

    printf("\nEscolha um atributo para comparação:\n");

    if (atributoBloqueado != 1)
        printf("1 - População\n");
    if (atributoBloqueado != 2)
        printf("2 - Área\n");
    if (atributoBloqueado != 3)
        printf("3 - PIB\n");
    if (atributoBloqueado != 4)
        printf("4 - Densidade Demográfica\n");

    printf("Opção: ");
}

/*
 Retorna o valor do atributo escolhido da carta
*/
float obterValorAtributo(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        default: return 0;
    }
}

/*
 Retorna o nome do atributo para exibição
*/
char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        default: return "Inválido";
    }
}

int main() {

    /*
     Cartas previamente cadastradas
     (conforme permitido no enunciado)
    */
    Carta carta1 = {"Brasil", 203000000, 8515767.0, 1900000.0, 23.8};
    Carta carta2 = {"Canadá", 38000000, 9984670.0, 2100000.0, 4.2};

    int atributo1, atributo2;

    printf("===== SUPER TRUNFO - NÍVEL MESTRE =====\n");
    printf("\nCarta 1: %s", carta1.pais);
    printf("\nCarta 2: %s\n", carta2.pais);

    /* Escolha do primeiro atributo */
    mostrarMenu(0);
    scanf("%d", &atributo1);

    /* Validação da escolha */
    if (atributo1 < 1 || atributo1 > 4) {
        printf("\nOpção inválida! Encerrando o programa.\n");
        return 0;
    }

    /* Escolha do segundo atributo (menu dinâmico) */
    mostrarMenu(atributo1);
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
        printf("\nOpção inválida! Encerrando o programa.\n");
        return 0;
    }

    /* Obtenção dos valores dos atributos escolhidos */
    float c1_valor1 = obterValorAtributo(carta1, atributo1);
    float c2_valor1 = obterValorAtributo(carta2, atributo1);

    float c1_valor2 = obterValorAtributo(carta1, atributo2);
    float c2_valor2 = obterValorAtributo(carta2, atributo2);

    /* Soma dos atributos */
    float somaCarta1 = c1_valor1 + c1_valor2;
    float somaCarta2 = c2_valor1 + c2_valor2;

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    printf("\nAtributo 1: %s", nomeAtributo(atributo1));
    printf("\n%s: %.2f", carta1.pais, c1_valor1);
    printf("\n%s: %.2f\n", carta2.pais, c2_valor1);

    printf("\nAtributo 2: %s", nomeAtributo(atributo2));
    printf("\n%s: %.2f", carta1.pais, c1_valor2);
    printf("\n%s: %.2f\n", carta2.pais, c2_valor2);

    printf("\nSoma dos atributos:");
    printf("\n%s: %.2f", carta1.pais, somaCarta1);
    printf("\n%s: %.2f\n", carta2.pais, somaCarta2);

    /*
     Operador ternário para decidir o vencedor final
     Caso as somas sejam iguais, ocorre empate
    */
    printf("\nResultado final: ");
    printf("%s\n",
           somaCarta1 > somaCarta2 ? carta1.pais :
           somaCarta2 > somaCarta1 ? carta2.pais :
           "Empate!");

    return 0;
}