#include <stdio.h>

float converter(int segundos, int *horas, int *minutos, int *segRestantes) {
    *horas = segundos / 3600;               // Calcula as horas
    *minutos = (segundos % 3600) / 60;      
    *segRestantes = segundos % 60;      
}

int main() {
    int totalSeg;
    int horas, minutos, segRestantes;
    
    printf("Digite o total de segundos: ");
    scanf("%d", &totalSeg);

    converter(totalSeg, &horas, &minutos, &segRestantes);
    
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", 
           totalSeg, horas, minutos, segRestantes);

    return 0;
}


