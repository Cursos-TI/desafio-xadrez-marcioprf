#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // Movimento do Cavalo: 2 para baixo, 1 para esquerda
    int movimentos_cavalo = 1; // número de movimentos completos em "L"

    int i, j; // Variáveis de controle

    // ----------------------- Movimento da Torre -----------------------
    printf("Movimento da Torre:\n");

    for (i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------- Movimento do Bispo -----------------------
    printf("Movimento do Bispo:\n");

    i = 1;
    while (i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ----------------------- Movimento da Rainha -----------------------
    printf("Movimento da Rainha:\n");

    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casas_rainha);

    printf("\n");

    // ----------------------- Movimento do Cavalo -----------------------
    printf("Movimento do Cavalo:\n");

    // Loop externo: número de vezes que o cavalo faz o movimento em "L"
    for (i = 0; i < movimentos_cavalo; i++) {

        // Primeiro faz duas casas para baixo
        j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Depois uma casa para a esquerda
        printf("Esquerda\n");
    }

    printf("\n");

    return 0;
}

