#include <stdio.h>
#include <math.h>

#define ERRO 0.1

int main() {

    double x1, x2, y, var;

    printf("Digite um número: ");
    scanf("%lf", &y);

    x1 = y/2;
    x2 = x1 - (x1*x1 - y)/(2*x1);

    var = fabs(x2 - x1);

    while (var > ERRO) {
        x1 = x2;
        x2 = x1 - (x1*x1 - y)/(2*x1);

        var = fabs(x2 - x1);
    }

    printf("Usando a aproximação, a raiz de %.2lf, é %lf\n", y, x2);
    printf("Usando a função sqrt(), a raiz de %.2lf, é %lf\n", y, sqrt(y));

    return 0;
}

