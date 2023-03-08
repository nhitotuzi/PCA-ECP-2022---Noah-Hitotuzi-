#include <stdio.h>

int main() {
	int v[8], i;

	for (i=0; i<8; i++) {
		printf("Digite um inteiro para v[%d]: ", i);
		scanf("%d", v+i);
	}

	printf("\n");
	printf("2v = ");
	for (i=0; i<8; i++) printf("%d ", *(v+i) * 2);

	printf("\n\n");

	printf("Posição dos numeros pares:\n");
	for (i=0; i<8; i++) {
		if (*(v+i)%2 == 0) printf("%p\n",v+i);
	}

	return 0;
}
