#include <stdio.h>

int main() {
    // Definindo variáveis inteiras para o número de casas de cada movimento
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    int i; // Variável de controle para as repetições

    // ----------------------- Movimento da Torre -----------------------
    // A Torre se move em linha reta, para direita neste exemplo.
    printf("Movimento da Torre:\n");

    for (i = 1; i <= casas_torre; i++) {  // Estrutura for
        printf("Direita\n");
    }

    printf("\n");  // Linha em branco para separar os movimentos

    // ----------------------- Movimento do Bispo -----------------------
    // O Bispo se move na diagonal: para cima e para a direita.
    printf("Movimento do Bispo:\n");

    i = 1;  // Reinicia a variável de controle
    while (i <= casas_bispo) {  // Estrutura while
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");  // Linha em branco para separar os movimentos

    // ----------------------- Movimento da Rainha -----------------------
    // A Rainha se move em todas as direções, mas neste exemplo, para a esquerda.
    printf("Movimento da Rainha:\n");

    i = 1;  // Reinicia a variável de controle
    do {  // Estrutura do-while
        printf("Esquerda\n");
        i++;
    } while (i <= casas_rainha);

    printf("\n");  // Fim do programa

    return 0;
}