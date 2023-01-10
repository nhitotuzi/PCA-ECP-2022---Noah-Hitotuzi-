#include <stdio.h>
#include <math.h>

int decimal(long long unsigned bin) {
	int dec = 0, i = 0;

	do {
		dec += (bin % 10) * pow(2, i);
		bin /= 10;
		i++;
	} while (bin != 0);

	return dec;
}


int main() {
	long long unsigned bin;

	printf("Digite um número binário: ");
	scanf("%llu", &bin);

	printf("%llu em decimal é %d em decimal\n", bin, decimal(bin));

	return 0;
}
