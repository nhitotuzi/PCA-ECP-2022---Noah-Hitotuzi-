#include <stdio.h>

int main() {
	float valor_hora, hora_mes, salario;

	printf("Digite quanto você ganha por hora: ");
	scanf("%f", &valor_hora);
	printf("Digite quantas horas você trabalhou no mês: ");
	scanf("%f", &hora_mes);
	salario = valor_hora * hora_mes;
	printf("Seu salário bruto esse mês é de R$ %.2f\n", salario);
	printf("Imposto de renda: R$ %.2f\n", salario * 0.11);
	printf("INSS: R$ %.2f\n", salario * 0.08);
	printf("Sindicato: R$ %.2f\n", salario * 0.05);
	printf("Seu salário liquido esse mês é de R$ %.2f\n", salario * 0.76);

	return 0;
}
