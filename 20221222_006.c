#include <stdio.h>
#include <string.h>

int main() {

    int n, i, soma=0;
    char prf[] = "não é perfeito";

    printf("Digite um número natural: ");
    scanf("%d", &n);

    for (i = n-1; i > 0; i--) {
        if (n%i == 0) {
            soma += i;
        }
    }

    if (soma == n) strcpy(prf, "é perfeito");

    printf("O número %d %s\n", n, prf);

    return 0;
}