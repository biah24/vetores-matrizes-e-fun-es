#include <stdio.h>

int main() {
    int numero[5] = {1, 2, 3, 4, 5};
    int numero2[5] = {6, 7, 8, 9, 10};
    
    printf("Vetor Original 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numero[i]);
    }
    
    printf("\n Vetor Original 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numero2[i]);
    }
    int inverter;
    for (int i = 0; i < 5; i++) {
        inverter = numero[i];
        numero[i] = numero2[i];
        numero2[i] = inverter;
        
    } printf("\nValores invertidos do vetor 1:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", numero[i]);
    }
    
    printf("\nValores invertidos do vetor 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numero2[i]);
    }

    return 0;
}

