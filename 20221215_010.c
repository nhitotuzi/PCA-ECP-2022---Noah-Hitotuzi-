#include <stdio.h>

int main() {
	float altura, peso;
	printf("Digite a altura: ");
	scanf("%f", &altura);
	peso = 72.7 * altura - 58;
	printf("O peso ideal é: %.2f\n", peso);

	return 0;
}
