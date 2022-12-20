#include <stdio.h>

int main() {
	float n, soma=0.0;
	int i;

	for (i=0; i<5; i++){
		printf("Digite um número: ");
		scanf("%f", &n);
		soma = soma + n;
	}

	printf("A soma é: %.2f\n", soma);

	return 0;
}
