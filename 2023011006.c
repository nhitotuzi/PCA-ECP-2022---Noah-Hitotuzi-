#include <stdio.h>
#include <math.h>

unsigned long long binario(int dec) {
	unsigned long long bin=0;
	int i=0;

	do {
		bin += (dec%2)*pow(10, i);
		dec /= 2;
		i++;
	} while (dec != 0);

	return bin;
}

int main() {
	int dec;

	printf("Digite um número decimal: ");
	scanf("%d", &dec);

	printf("%d equivale a %llu em binário\n", dec, binario(dec));

	return 0;
}
