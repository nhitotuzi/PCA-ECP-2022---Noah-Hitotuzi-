#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int len, float *media, float *desvio) {
	*media = 0;
	*desvio = 0;

	for (int i=0; i<len; i++) *media += *(notas + i);

	*media = *media/len;
	
	for (int i=0; i<len; i++) {
		*desvio += (*(notas + i) - *media) * (*(notas + i) - *media);
	}

	*desvio = sqrt(*desvio/len);
}


int main() {
	float *notas, media, desvio;
	int len; 
	
	printf("Digite o número de alunos: ");
	scanf("%d", &len);

	notas = (float *) malloc(len * sizeof(float));

	if (notas == NULL) {
		printf("Erro de alocação de memória.\n");
		return -1;
	}
	
	for (int i=0; i<len; i++) {
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", notas + i);
	}

	mediaDesvio(notas, len, &media, &desvio);

	printf("Média = %.3f \t Desvio Padrão = %.4f\n", media, desvio);

	free(notas);
	return 0;
}
