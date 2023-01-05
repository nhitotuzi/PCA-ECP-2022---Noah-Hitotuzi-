#include <stdio.h>

int fib(int n) {
    int n1=1, n2=1, soma = 1;
    
    for (int i=3; i<=n; i++) {
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;
    }

    return soma;
}

int main() {
    int num;

    printf("Digite um inteiro maior que 0: ");
    scanf("%d", &num);

    printf("O %dº termo da sequência de Fibonacci é %d\n", num, fib(num));

}