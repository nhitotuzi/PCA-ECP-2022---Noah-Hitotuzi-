#include <stdio.h>

int main() {
	float celcius, fahrenheit;

	printf("Digite a temperatura em Celcius: ");
	scanf("%f", &celcius);
	fahrenheit = 9 * celcius / 5 + 32;
	printf("%.2f graus Celcius são %.2f graus Fahrenheit\n", celcius, fahrenheit);

	return 0;
}
