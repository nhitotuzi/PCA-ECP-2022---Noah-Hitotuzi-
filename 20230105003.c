#include <stdio.h>

void numero_par(int *num) {
    printf("Digite um número par: ");
    scanf("%d", num);
    while((*num % 2) != 0){
        printf("O número digitado é ímpar\n");
        printf("Digite um número par: ");
        scanf("%d", num);
    }
}

void perfeito(int num) {
    int soma = 0;
    for (int i=1; i<num; i++) {
        if (num%i == 0) soma += i;
    }
    if (num == soma) printf("%d é um número perfeito", num);
    else printf("%d não é um número perfeito", num);
}

int main() {
    int num;

    numero_par(&num);

    perfeito(num);

    return 0;
}