#include <stdio.h>

int main() {
	int i, n, maior=0, menor, primeiro=1;

	for (i=0; i<20; i++){
		printf("Digite um número: ");
		scanf("%d", &n);

		if (primeiro){ 
			menor = n;
			maior = n;
			primeiro = 0;
		}

		if (n > maior){
			maior = n;
		} else if (n < menor){
			menor = n;
		}
	}

	printf("O menor valor é: %d\n", menor);
	printf("O maior valor é: %d\n", maior);

	return 0;
}
