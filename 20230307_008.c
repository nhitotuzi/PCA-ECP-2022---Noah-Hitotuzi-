#include <stdio.h>

void troca(float *a, float *b) {
	float tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	float a = 1.0, b = 0.0;

	printf("a = %.1f; b = %.1f\n", a, b);
	troca(&a, &b);
	printf("a = %.1f; b = %.1f\n", a, b);

	return 0;
}
