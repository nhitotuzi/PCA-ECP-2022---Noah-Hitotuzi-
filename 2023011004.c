#include <stdio.h>

int comparar_num(long long n, int d) {

	do {
		if (n % 10 != d % 10) return 0;
		d = d/10;
		n = n/10;
	} while (d!=0);
	
	return 1;
}

int segmento(int x, long long y) {
	do {
		if (comparar_num(y, x)) return 1;
		y = y/10;
	} while (y > x);

	return 0;
	
}

int main() {
	int x, q;
	long long y;

	printf("Digite um número para comparar: ");
	scanf("%d", &x);

	printf("Digite um número maior que o anterior para ser comparado: ");
	scanf("%lli", &y);

	q = segmento(x, y);
	q ? printf("é um segmento\n") : printf("não é um segmento\n");

	return 0;
}
