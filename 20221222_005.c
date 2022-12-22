#include <stdio.h>

int main() {

    int i;
    float soma=0, a, b;

    for (i=1; i<=50; i++) {
        a = 2.0*i - 1.0;
        b = i*1.0;
        // printf("%.0f/%.0f ", a, b);
        soma += (a)/(b);
    }

    printf("A soma é %f\n", soma);

    return 0;
}