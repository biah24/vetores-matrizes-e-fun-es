#include <stdio.h>

float PesoIdeal(float altura, char sexo[]) {
    float calculoPeso;

    if (sexo[0] == 'f') {
        calculoPeso = (62.1 * altura) - 44.7;
        return calculoPeso;
    } else if (sexo[0] == 'm') {
        calculoPeso = (72.7 * altura) - 58;
        return calculoPeso;
    } else {
        printf("Invalido. Digite 'f' para feminino ou 'm' para masculino!\n");
        return 1; 
    }
}

int main() {
    float altura;
    char sexo[10];

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo 'f' para feminino ou 'm' para masculino): ");
    scanf("%s", sexo);

    float pesoIdeal = PesoIdeal(altura, sexo);
    
    if (pesoIdeal != 1) {
        printf("Peso ideal: %.2f\n", pesoIdeal);
    }

    return 0;    
}

