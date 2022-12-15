#include <stdio.h>

int main() {
	float valor_hora, hora_mes, salario;

	printf("Digite quanto você ganha por hora: ");
	scanf("%f", &valor_hora);
	printf("Digite quantas horas você trabalhou no mês: ");
	scanf("%f", &hora_mes);
	salario = valor_hora * hora_mes;
	printf("Seu salário esse mês é R$ %.2f\n", salario);

	return 0;
}
