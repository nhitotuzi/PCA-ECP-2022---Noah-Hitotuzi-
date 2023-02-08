#include <stdio.h>
#include <string.h>

int main() {
    int i, economico=0;
    char modelo[5][1000];
    float consumo[5], dist;

    for (i=0; i<5; i++) {
        printf("Digite o modelo do carro: ");
        scanf(" %s", modelo[i]);
        printf("Digite o consumo do carro (Km/L): ");
        scanf(" %f", &consumo[i]);
        if (consumo[i] > consumo[economico]) economico = i;
    }

    printf("Digite uma distância em quilômetros: ");
    scanf("%f", &dist);

    printf("O modelo mais econômico é o %s\n", modelo[economico]);

    printf("Para percorrer %.2f quilômetros, é necessário:\n", dist);

    for (i=0; i<5; i++) printf("%s: %.2f Litros\n", modelo[i], dist/(consumo[i]));


    return 0;
}