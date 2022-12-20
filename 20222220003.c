#include <stdio.h>

int main() {
	int i, n, soma=0;

	for (i=0; i<50; i++){
		printf("Digite um número: ");
		scanf("%d", &n);

		if (n%2 != 0 && n>100 && n<200){
			soma = soma + n;
		}
	}

	printf("A soma é dos números ímpares entre 100 e 200 é: %d\n", soma);
}
