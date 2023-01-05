#include <stdio.h>

void leitura_peso_semana(float *peso, float *semanas) {

    printf("Digite o peso em gramas: ");
    scanf("%f", peso);
    printf("Digite o número de semanas: ");
    scanf("%f", semanas);
}

void avaliar(float peso, float semanas) {

    if (peso < 100 || semanas < 28) printf("Parto não deverá ser realizado, reavaliar clinicamente\n");
    else if (peso > 2500 && (semanas/4) > 7) printf("Parto normal\n");
    else if (peso > 2500 && (semanas/4) <= 7) printf("Parto Cesariana\n");
    else if (peso > 1500 && peso < 2000 && (semanas/4) > 9) printf("Parto normal\n");
    else printf("Parto Cesariana\n");
}

int main() {
    
    float peso, semanas;

    leitura_peso_semana(&peso, &semanas);

    avaliar(peso, semanas);

    return 0;
}