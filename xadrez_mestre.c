#include <stdio.h>

// ==================== TORRE ====================
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// ==================== BISPO ====================
void moverBispo(int i, int j, int limite) {
    if (i >= limite || j >= limite) return;

    // Loop vertical (externo)
    for (int x = i; x < limite; x++) {
        // Loop horizontal (interno)
        for (int y = j; y < limite; y++) {
            if (x == y) {
                printf("Diagonal superior direita\n");
            }
        }
    }

    // Recursão após loops
    moverBispo(i + 1, j + 1, limite);
}

// ==================== RAINHA ====================
void moverRainhaVertical(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverRainhaVertical(casas - 1);
}

void moverRainhaDiagonal(int casas) {
    if (casas <= 0) return;
    printf("Diagonal superior direita\n");
    moverRainhaDiagonal(casas - 1);
}

// ==================== CAVALO ====================
void moverCavalo(int limite) {
    int movimentos = 0;

    for (int cima = 1; cima <= limite; cima++) {
        for (int direita = 1; direita <= limite; direita++) {
            if (cima == 2 && direita == 1) {
                movimentos++;
                printf("Movimento %d: 2 casas para cima e 1 para a direita\n", movimentos);
                continue; // Continua o próximo movimento válido
            }

            if (cima + direita > 3) {
                break; // Evita movimentos fora do padrão desejado
            }
        }
    }
}

// ==================== MAIN ====================
int main() {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 3;
    int limiteCavalo = 3;

    printf("Movimentos da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);

    printf("\nMovimentos do Bispo:\n");
    moverBispo(0, 0, casasBispo);

    printf("\nMovimentos da Rainha:\n");
    moverRainhaVertical(casasRainha);
    moverRainhaDiagonal(casasRainha);

    printf("\nMovimentos do Cavalo:\n");
    moverCavalo(limiteCavalo);

    return 0;
}

