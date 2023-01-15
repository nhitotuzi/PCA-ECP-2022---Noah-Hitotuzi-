#include <stdio.h>
#include <math.h>

int num() {
	int n;

	printf("Digite um núrmero inteiro positivo: ");
	scanf("%d", &n);

	while (n < 0) {
		printf("Número negativo\n");
		printf("Digite um núrmero inteiro positivo: ");
		scanf("%d", &n);
	}

	return n;
}

int hiperfatorial(int n) {
	int h=1, i;

	for (i=0; i<=n; i++) {
		h *= pow(i,i);	
	}

	return h;
}

void print(int n, int h) {
	printf("O hiperfatorial de %d é: %d\n", n, h);
}

int main() {
	int n, h;

	n = num();
	h = hiperfatorial(n);

	print(n, h);

	return 0;
}
