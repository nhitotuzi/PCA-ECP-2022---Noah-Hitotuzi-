#include <stdio.h>
#define M_TO_CM 1e3

int main() {
	float metros, centimetros;
	printf("Digite a quantidade em METROS: ");
	scanf("%f", &metros);	
	centimetros = metros * M_TO_CM;
	printf("%.2f metros equivalem a %.2f centímetros\n", metros, centimetros);
	return 0;
			
}
