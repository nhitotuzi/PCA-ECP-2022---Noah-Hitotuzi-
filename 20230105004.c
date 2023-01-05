#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i=1; i<=n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {
    int num;

    printf("Digite um número natural: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, fatorial(num));

}