#include <stdio.h>

int main() {
	int inteiro = 1;
	float real = 3.1415923565;
	char caractere = 'n';
	int *p_int;
	float *p_float;
	char *p_char;

	printf("Antes\n");
	printf("%d\n", inteiro);
	printf("%.2f\n", real);
	printf("%c\n", caractere);

	p_int = &inteiro;
	p_float = &real;
	p_char = &caractere;

	*p_int = 2;
	*p_float = 6.23;
	*p_char = 'h';

	printf("Depois\n");
	printf("%d\n", inteiro);
	printf("%.2f\n", real);
	printf("%c\n", caractere);

	return 0;
}
