#include <stdio.h>

int main() {
	int n=0;
	float med, soma, maior, menor;

	printf("Digite a média do aluno: ");
	scanf("%f", &med);
	maior = med;
	menor = med;

	while (med >=0) {
		soma += med;
		n++;
		if (med > maior) maior = med;
		if (med < menor) menor = med;
		
		printf("Digite a média do aluno: ");
		scanf("%f", &med);
	}

	printf("A maior média é: %.2f\n", maior);
	printf("A menor média é: %.2f\n", menor);
	printf("A média da turma é: %.2f\n", soma/n);

}
