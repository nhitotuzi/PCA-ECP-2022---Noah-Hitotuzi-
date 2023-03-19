#include <stdio.h>
#include <stdlib.h>

double ** alloc_matriz(int m, int n) {
	double **mtrz = (double **)  malloc(m * sizeof(double *));

	if (mtrz == NULL) {
		printf("Erro de alocação de memória.\n");
		exit(1);
	}

	for (int i=0; i < m; i++) {
		*(mtrz + i) = (double *) malloc(n * sizeof(double));
		if (*(mtrz + i) == NULL) {
			printf("Erro de alocação de memória.\n");
			exit(1);
		}
	}

	return mtrz; 
}

void init_matriz(double **mtrz, int m, int n) {
	for (int i=0; i < m; i++) {
	       	for (int j=0; j<n; j++) {
			printf("Digite o elemento %d,%d: ", i, j);
			scanf("%lf", *(mtrz + i) + j);
		}	
	}
}

int main() {
	int m, n;

	printf("Digite o número de linhas das matrizes: ");
	scanf("%d", &m);
	printf("Digite o número de colunas das matrizes: ");
	scanf("%d", &n);

	double **M1 = alloc_matriz(m, n);
	double **M2 = alloc_matriz(m, n);
	double **MS = alloc_matriz(m, n);

	printf("\nPrimeira matriz\n");
	init_matriz(M1, m, n);
	printf("\nSegunda matriz\n");
	init_matriz(M2, m, n);

	printf("\nSoma =\n");
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			MS[i][j] = M1[i][j] + M2[i][j];
			printf("%.2lf ", MS[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i=0; i < m; i++) free(*(M1 + i));
	free(M1);	
	for (int i=0; i < m; i++) free(*(M2 + i));
	free(M2);	
	for (int i=0; i < m; i++) free(*(MS + i));
	free(MS);	

	return 0;
}
