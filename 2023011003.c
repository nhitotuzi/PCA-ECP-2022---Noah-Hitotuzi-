#include <stdio.h>

int comparar_num(long long n, int d) {

	do {
		if (n % 10 != d % 10) return 0;
		d = d/10;
		n = n/10;
	} while (d!=0);
	
	return 1;
}

int main() {
	int d, q;
	long long n;

	printf("Digite o número a ser comparado: ");
	scanf("%lli", &n);
	printf("Digite o número para comparar aos últimos dígitos do anterior: ");
	scanf("%d", &d);

	q = comparar_num(n, d);
	q ? printf("corresponde\n") : printf("não corresponde\n");

	return 0;
}
