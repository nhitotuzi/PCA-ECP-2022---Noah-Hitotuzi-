#include <stdio.h>

int main() {
	int i, n, soma=0;

	for (i=0; i<50; i++){
		printf("Digite um número: ");
		scanf("%d", &n);

		if (n%2 != 0){
			soma = soma + n;
		}
	}

	printf("A soma é dos números ímpares é: %d\n", soma);
}
