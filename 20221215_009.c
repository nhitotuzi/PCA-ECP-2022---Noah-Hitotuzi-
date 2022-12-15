#include <stdio.h>

int main() {
	int n1, n2;
	float n3;

	printf("Digite um número inteiro: ");
	scanf("%d", &n1);
	printf("Digite outro número inteiro: ");
	scanf("%d", &n2);
	printf("Digite um número real: ");
	scanf("%f", &n3);
	printf("2*n1 * n2/2 = %.2f\n", 2*n1 * n2/2.0); 
	printf("3*n1 + n3 = %.2f\n", 3*n1 + n3);
	printf("n3^3 = %.2f\n", n3 * n3 * n3);

	return 0;
}
