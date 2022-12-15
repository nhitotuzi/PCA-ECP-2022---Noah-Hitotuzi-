#include <stdio.h>

int main() {
	float celcius, fahrenheit;

	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &fahrenheit);
	celcius = 5 * (fahrenheit - 32) / 9;
	printf("%.2f graus Fahrenheit são %.2f graus Celcius\n", fahrenheit, celcius);

	return 0;
}
