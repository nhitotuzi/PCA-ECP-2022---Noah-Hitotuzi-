#include <stdio.h>

int main() {

    int n=0, par=0, impar=0;

    while (n <= 1000) {
        if (n%2 == 0) par += n;
        else impar += n;

        printf("Digite um número inteiro: ");
        scanf("%d", &n);   
    }

    printf("A soma dos números pares é %d\n", par);
    printf("A soma dos números ímpares é %d\n", impar);

    return 0;
}