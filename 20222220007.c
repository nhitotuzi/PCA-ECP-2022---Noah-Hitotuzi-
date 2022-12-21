#include <stdio.h>

int main(){
	int i, num_alunos, primeiro=1;
	float e1, e2, e3, media;
	float maior_e1, maior_e2, maior_e3, maior_med;
	float menor_e1, menor_e2, menor_e3, menor_med;

	printf("Digite o número de alunos: ");
	scanf("%d", &num_alunos);

	for (i=0; i<num_alunos; i++){
		printf("Aluno %d\n", i+1);
		printf("Digite a nota do Exercício 1: ");
		scanf("%f", &e1);
		printf("Digite a nota do Exercício 2: ");
		scanf("%f", &e2);
		printf("Digite a nota do Exercício 3: ");
		scanf("%f", &e3);
		media = (e1+e2+e3)/3;

		if (primeiro){
			maior_e1 = e1;
			maior_e2 = e2;
			maior_e3 = e3;
			maior_med = media;
			menor_e1 = e1;
			menor_e2 = e2;
			menor_e3 = e3;
			menor_med = media;

			primeiro = 0;
		}
		if(e1 > maior_e1) maior_e1 = e1;
		if(e2 > maior_e2) maior_e2 = e2;
		if(e3 > maior_e3) maior_e3 = e3;
		if(media > maior_med) maior_med = media;
		if(e1 < menor_e1) menor_e1 = e1;
		if(e2 < menor_e2) menor_e2 = e2;
		if(e3 < menor_e3) menor_e3 = e3;
		if(media < menor_med) menor_med = media;
       	}

	printf("Exercício 1: Maior = %.2f, Menor = %.2f\n", maior_e1, menor_e1);
	printf("Exercício 2: Maior = %.2f, Menor = %.2f\n", maior_e2, menor_e2);
	printf("Exercício 3: Maior = %.2f, Menor = %.2f\n", maior_e3, menor_e3);
	printf("Média: Maior = %.2f, Menor = %.2f\n", maior_med, menor_med);

	return 0;
}
