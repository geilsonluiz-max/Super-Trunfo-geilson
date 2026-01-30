//  Biblioteca padrão de entrada e saída
#include <stdio.h>

//  Definição de estrutura da carta
typedef struct {
    char pais[50];  // Nome do país
    int populacao;  // População   
    float area;      // Área
    float pib;       // PIB
    int pontos_turisticos;  // Pontos turísticos
    float densidade;    // Densidade demográfica
} Carta;

int main() {
    // Cartas já cadastradas (do desafio anterior)
    Carta carta1 = {"Brasil", 23000000, 8515767.0, 1920000.0, 30, 23.8};
    Carta carta2 = {"Canadá", 38000000, 9984670.0, 2130000.0, 20, 4.0};

    int opcao; // Opção do menu

    // Exibição do menu
    printf("==== SUPER TRUNFO - NIVEL AVENTUREIRO ====\n");
    printf("Cartas em jogo:\n");
    printf("1 - %s\n", carta1.pais);
    printf("2 - %s\n\n", carta2.pais);

    printf("Escolha o atributo de comparacao\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n===============\n");

    // Estrutura swithch para o menu
    switch (opcao) {

        case 1: // População
            printf("Atributo: Populacao\n");
            if (carta1.populacao > carta2.populacao) {    
                printf("Vencedor:   %s\n", carta1.pais);
            } else {
                if (carta2.populacao > carta1.populacao) {   
                    printf("Vencedor: %s\n", carta2.pais);
                } else {
                    printf("Empate!\n");   
                }
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");

            if (carta1.area > carta2.area) {
                printf("Vencedor:%s\n", carta1.pais);
            } else {
                if (carta2.area > carta1.area) {
                    printf("Vencedor: %s\n", carta2.pais);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");

            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.pais);
            } else {
                if (carta2.pib > carta1.pib) {
                    printf("Vencedor: %s\n", carta2.pais);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos turisticos\n");

            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta1.pais);
            } else {
                if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                    printf("Vencedor: %s\n", carta2.pais);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5: //Densidade (Menor vence)
            printf("Atributo: Densidade Demografica\n");

            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s\n", carta1.pais);
            } else {
                if (carta2.densidade < carta1.densidade) {
                    printf("Vencedor: %s\n", carta2.pais);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default: // Tratamento de erro
            printf("Opcao invalida! Escolha entre 1 e 5.\n");

    }
    return 0; // Fim do programa
}