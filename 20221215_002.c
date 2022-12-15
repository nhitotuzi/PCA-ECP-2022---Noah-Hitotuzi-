#include <stdio.h>

int main() {
	float nota, soma=0;
	int i;

	for (i=0; i<4; i++) {
		printf("Digite a nota%d: ", i+1);
		scanf("%f", &nota);
		soma += nota;
	}
	printf("Média : %.2f\n", soma/i);
	
	return 0;
}
