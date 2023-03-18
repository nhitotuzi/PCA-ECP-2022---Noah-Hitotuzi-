#include <stdio.h>
#include <stdlib.h>

int ** matriz(int m, int n) {
	int **mtrz = (int **)  malloc(m * sizeof(int *));

	if (mtrz == NULL) {
		printf("Erro de alocação de memória.\n");
		exit(1);
	}

	for (int i=0; i < m; i++) {
		*(mtrz + i) = (int *) malloc(n * sizeof(int));
		if (*(mtrz + i) == NULL) {
			printf("Erro de alocação de memória.\n");
			exit(1);
		}

	       	for (int j=0; j<n; j++) {
			printf("Digite o elemento %d,%d: ", i, j);
			scanf("%d", *(mtrz +i) + j);
		}	
	}

	return mtrz; 
}

int main() {
	int m, n;

	printf("Digite o número de linhas da matriz: ");
	scanf("%d", &m);
	printf("Digite o número de colunas da matriz: ");
	scanf("%d", &n);

	int ** M = matriz(m, n);

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ", *(*(M + i) + j));
		}
		printf("\n");
	}

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}

	for (int i=0; i < m; i++) free(*(M + i));
	free(M);	

	return 0;
}
