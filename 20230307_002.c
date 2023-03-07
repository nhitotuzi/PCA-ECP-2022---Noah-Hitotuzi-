#include <stdio.h>

int* Search(int valor, int *inicio, int *fim) {
	int *i;

	for (i=inicio; i<=fim; i++) {
		if (*i == valor) return i;
	}

	return NULL;
}

int main() {
	int v1[10] = {1,2,3,2,5,2,7,8,9,2};
	//int v1[10] = {0,0,0,0,0,0,0,0,0,0};
	
	int *res;

	res = Search(2, v1, v1+9);

	if (!res) printf("Valor não encontrado.\n");

	while (res) {
		printf("Valor encontrado em %p\n", res);
		res = Search(2, res+1, v1+9);
	}
 
	return 0;
}
