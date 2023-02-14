#include <stdio.h>
#include <math.h>

int main() {

    int n, c, a, b;

    printf("Digite um número natural: ");
    scanf("%d", &n);


    for (c = n; c > 2; c--) {
        for (b = c-1; b>1; b--) {
            for (a = b-1; a>0; a--) {
                if (c*c == a*a + b*b) {
                    printf("a = %d, b = %d, c = %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
