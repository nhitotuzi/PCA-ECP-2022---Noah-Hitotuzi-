#include <stdio.h>

int comparar(long long n, int d) {
	int soma = 0;
	do {
		if (n % 10 == d) soma++;	
		n /= 10;
	} while (n != 0);
	
	return soma;
}

int digitos(int n) {
	int dig = 0;

	do {
		n /= 10;
		dig++;
	} while (n != 0);

	return dig;
}

int e_permuta(int a, int b) {
	int a1=a;
	if (digitos(a)!= digitos(b)) return 0;
	do {
		if (comparar(b, a1%10) != comparar(a, a1%10)) return 0;
		a1 /= 10;
	} while (a1 != 0);

	return 1;
}	

int main() {
	int a, b, q;

	printf("Digite o primeiro número a ser comparado: ");
	scanf("%d", &a);
	printf("Digite o segundo número a ser comparado: ");
	scanf("%d", &b);

	q = e_permuta(a, b);
	q ? printf("é permuração\n") : printf("não é permutação\n");

	return 0;
}
