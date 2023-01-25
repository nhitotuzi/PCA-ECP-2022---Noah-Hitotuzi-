#include <stdio.h>

void print_seq(int n, float seq[]) {
	int i;

	for (i = n-1; i >= 0; i--) {
		printf("%.1f ", seq[i]);
	}

	printf("\n");
}

int main() {
	int n, i;
	float a, v[100];

	printf("Digite o tamanho da sequência (até 100): ");
	scanf("%d", &n);
	while (n>100) {
	printf("Número maior que 100");
	printf("Digite o tamanho da sequência (até 100): ");
	scanf("%d", &n);
	}

	for (i = 0; i < n; i++) {
		printf("Digite o número: ");
		scanf("%f", &a);
		v[i] = a;
	}

	print_seq(n, v);

	return 0;
}
