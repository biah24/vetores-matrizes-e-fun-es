#include <stdio.h>

int main() {
    float matriz[4][4];
    float minValor;
    float MINMAX;
    int minLinha, minColuna;

    printf("Insira os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    minValor= matriz[0][0];
    minLinha = 0;
    minColuna = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
        if (matriz[i][j] < minValor) {
            minValor = matriz[i][j];
            minLinha = i;
            minColuna = j;
            }
        }
    }
    MINMAX = matriz[minLinha][0];
    for (int j = 1; j < 4; j++) {
        if (matriz[minLinha][j] > MINMAX) {
            MINMAX= matriz[minLinha][j];
        }
    }
    printf("\nO menor elemento da matriz: %.2f na posicao [%d][%d]\n", minValor, minLinha, minColuna);
    printf("MINMAX: %.2f\n", MINMAX);
    printf("Sua posicao na matriz: linha %d", MINMAX); 

    return 0;
}

