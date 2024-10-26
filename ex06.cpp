

#include <stdio.h>

void calcularMedia(float nota1, float nota2, float nota3, char letra) {
    float media;

    if (letra == 'A') {
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("Media: %.2f\n", media);
    } else if (letra == 'P') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
        printf("Media Ponderada: %.2f\n", media);
    } else {
        printf("invalido. Use A para media aritmetica ou P para media ponderada\n");
    }
}

int main() {
    float nota1, nota2, nota3;
    char letra;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
	printf("Digite A para media aritmetica ou P para media ponderada (MAIUSCULO): ");
    scanf(" %c", &letra);
	calcularMedia(nota1, nota2, nota3, letra);

    return 0;
}
