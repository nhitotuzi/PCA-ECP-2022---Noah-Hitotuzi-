#include <stdio.h>

int main(){
	float n1, n2, soma;

	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	soma = n1 + n2;
	printf("%.2f\n", soma);	

	return 0;
}
