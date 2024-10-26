
#include <stdio.h>

int main() {
    int matriz[3][4];      
    int soma[3] = {0};     
    int matrizResultante[3][4]; 

    printf("Insira os valores da matriz 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            soma[i] += matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrizResultante[i][j] = matriz[i][j] * soma[i];
        }
    }

    printf("\nResultado Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}

