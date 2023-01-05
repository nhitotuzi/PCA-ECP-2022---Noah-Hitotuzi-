#include <stdio.h>

void scanIntIntervalo(int *n1, int *n2) {

    printf("Digite o primeiro número inteiro entre 0 e 1000: ");
    scanf("%d", n1);
    while (*n1<0 || *n1>1000) {
        printf("Intervalo incorreto, tente novamente.\n");
        printf("Digite o primeiro número inteiro entre 0 e 1000: ");
        scanf("%d", n1);
    }

    printf("Digite o segundo número inteiro entre 0 e 1000: ");
    scanf("%d", n2);
    while (*n2<0 || *n2>1000) {
        printf("Intervalo incorreto, tente novamente.\n");
        printf("Digite o primeiro número inteiro entre 0 e 1000: ");
        scanf("%d", n2);
    }
}

float percentual(int maior, int menor) {
    float percentual;

    percentual = ((float) menor/maior) * 100;
    return percentual;
}

int absdif(int maior, int menor) {
    return (maior - menor);
}

int main() {
    int n1, n2;
    int maior, menor;

    scanIntIntervalo(&n1, &n2);

    if (n1>n2) {
        maior = n1;
        menor = n2;
    } else {
        maior = n2;
        menor = n1;
    }

    printf("O percentual de %d em relação à %d é de %.1f%%\n", menor, maior, percentual(maior, menor));
    printf("O módulo da diferença entre %d e %d é %d\n", maior, menor, absdif(maior, menor));

    return 0;
}