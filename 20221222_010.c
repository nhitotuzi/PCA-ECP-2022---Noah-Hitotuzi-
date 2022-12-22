#include <stdio.h>

int main() {

	int n, n3, i, j, soma;

	printf("Digite um número natural: ");
	scanf("%d", &n);

	n3 = n*n*n;
	printf("%d^3 = %d é igual à soma dos seguintes números ímpares consecutivos:\n", n, n3);

	for (i=1; i<=n3-2*n+2; i+=2) {
		soma = n*i + n*(n-1); // soma dos n consecutivos
		
		if (soma == n3) {
			for (j=0; j<2*n; j+=2) printf("%d ", i+j);
			break;
		}
	}
	printf("\n");

	return 0;
}
