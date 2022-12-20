#include <stdio.h>

int main() {
	int i=0, n, maior, menor, primeiro=1;

	while (i<20){
		printf("Digite um número positivo: ");
		scanf("%d", &n);
		if (n>0){
			if (primeiro){ 
				menor = n;
				maior = n;
				primeiro = 0;
			} else if (n > maior){
				maior = n;
			} else if (n < menor){
				menor = n;
			}
			i++;
		} else {
			printf("O númeno digitado é negativo\n");
		}
	}

	printf("O menor valor é: %d\n", menor);
	printf("O maior valor é: %d\n", maior);

	return 0;
}
