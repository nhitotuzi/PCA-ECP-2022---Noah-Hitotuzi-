#include <stdio.h>

int main() {
	float conta, gorgeta;

	printf("Digite o valor da conta: ");
	scanf("%f", &conta);
	gorgeta = conta*0.1;
	printf("Valor da gorgeta: R$ %.2f\n", gorgeta);
	
	return 0;
}
