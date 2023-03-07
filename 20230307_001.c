#include <stdio.h>

void Print_vetor(float *inicio, float *fim) {
	float *i;

	for (i=inicio; i<= fim; i++) {
		printf("%.2f ", *i);
	}
	printf("\n");
}

int main() {
	float v1[3] = {1.1, 1.2, 1.3};
	float v2[4] = {2.1, 2.2, 2.3, 2.4};
	float v3[5] = {3.1, 3.2, 3.3, 3.4, 3.5};

	printf("Vetor 1 (0-1)\n");
	Print_vetor(v1, v1+1);
	printf("Vetor 1 (1-2)\n");
	Print_vetor(v1+1, v1+2);


	printf("Vetor 2 (0-1)\n");
	Print_vetor(v2, v2+1);
	printf("Vetor 2 (2-3)\n");
	Print_vetor(v2+2, v2+3);


	printf("Vetor 3 (0-2)\n");
	Print_vetor(v3, v3+2);
	printf("Vetor 3 (2-4)\n");
	Print_vetor(v3+2, v3+4);

	return 0;
}
