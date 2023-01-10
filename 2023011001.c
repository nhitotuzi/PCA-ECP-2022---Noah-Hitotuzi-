#include <stdio.h>

int encontrar_digito(long long n, int d) {
	int soma = 0;

	while (n != 0) {
		if (n % 10 == d) soma++;
		n = n/10;
	}
	
	return soma;
}

int main() {
	int d, q;
	long long n;

	printf("Digite o número a ser comparado: ");
	scanf("%lli", &n);
	printf("Digite o dígito (0-9) a ser encontrado: ");
	scanf("%d", &d);

	q = encontrar_digito(n, d);

	printf("%d aparece em %lli, %d vezes\n", d, n, q);

	return 0;
}
