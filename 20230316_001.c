#include <stdio.h>
#include <stdlib.h>

int Inic_v(int **v, int n) {
	*v = malloc(n * sizeof(int));

	if (*v == NULL) return -1;

	for (int i=0; i<n; i++) {
		printf("Digite o %dº inteiro: ", i+1);
		scanf("%d", *v + i);
	}
	return 0;
}

void MaiorMenor(int *v, int n, int *maior, int *menor) {
	*maior = *v;
	*menor = *v;
	for (int i=1; i<n; i++) {
		if (*(v+i) > *maior) *maior = *(v+i);
		if (*(v+i) < *menor) *menor = *(v+i);
	}

}

int main() {
	int *v, n, maior, menor;

	printf("Digite o número de inteiros: ");
	scanf("%d", &n);

	if(Inic_v(&v, n) == -1) {
		printf("Erro de alocação de memória\n");
		return -1;
	}

	MaiorMenor(v, n, &maior, &menor);

	printf("\nMaior = %d \t Menor = %d\n\n", maior, menor);

	free(v);
	return 0;
}
