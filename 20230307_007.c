#include <stdio.h>

void MinMax(int *ini, int *fim, int *min, int *max) {
	
	*min = *ini;
	*max = *ini;

	for (;ini <= fim; ini++) {
		if (*ini < *min) *min = *ini;
		if (*ini > *max) *max = *ini;
	}
}

int main() {
	int v[] = {20, -3, 38, 3, -21, 3, 1001};
	int min, max;

	MinMax(v, v+6, &min, &max);

	printf("Menor = %d, Maior = %d\n", min, max);

	return 0;
}
