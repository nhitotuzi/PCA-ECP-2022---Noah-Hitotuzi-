#include <stdio.h>

int main(){
	float salario, novo_salario;
	printf("Digite o salário: ");
	scanf("%f", &salario);
	novo_salario = salario*1.1;
	printf("Novo salário: R$ %.2f\n", novo_salario);	
}
