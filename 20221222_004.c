#include <stdio.h>
#include <string.h>

int main() {

    int n, i;
    char prm[15] = "é primo";

    printf("Digite um número natural: ");
    scanf("%d", &n);

    for (i = n-1; i > 1; i--) {
        if (n%i == 0) {
            strcpy(prm, "não é primo");
            break;
        }
    }

    printf("O número %d %s\n", n, prm);

    return 0;
}