#include <stdio.h>
#include <math.h>

float num() {
	float f;

	printf("Digite um núrmero real entre 0 e 1: ");
	scanf("%f", &f);

	while (f < 0 || f > 1) {
		printf("Número fora do limite válido\n");
		printf("Digite um núrmero real entre 0 e 1: ");
		scanf("%f", &f);
	}

	return f;
}

float arctan(float x) {
	int i=1, j=0;
	float atan=0;

	while (pow(x,i)/i >= 0.0001) {
		atan += pow(-1,j)*pow(x,i)/i;
		i += 2;
		j++;
	}

	return atan;
}

void print(float x, float atanx) {
	printf("O arcotangente de %.2f é: %.4f radianos.\n", x, atanx);
}

int main() {
	float x, atanx;

	x = num();
	atanx = arctan(x);

	print(x, atanx);

	return 0;
}
