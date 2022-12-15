#include <stdio.h>

int main() {
	float lado, area;

	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);
	area = lado * lado;
	printf("O dobro da área do quadrado é: %.2f\n", 2 * area);

	return 0;
}
