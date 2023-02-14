#include <stdio.h>
#include <string.h>
#define MAX 20
#define LEN 120

int Nomes(char nomes[MAX][LEN]) {
	int i=-1;
	
	printf("Digite os nomes da lista ou digite (fim) para terminar.\n");
	do {
		i++;
		printf("Nome: ");
		scanf("%120s", &nomes[i]);
	} while (strcmp(nomes[i], "fim"));

	return 0;
}

int Print(char nomes[MAX][LEN]) {
	int i = 0;

	printf("\n");
	while (strcmp(nomes[i], "fim")) {
		printf("%s ", nomes[i]);
		i++;
	}
	printf("\n\n");

	return 0;
}

int main () {
	char nomes[MAX][LEN];

	Nomes(nomes);
	Print(nomes);


	return 0;
}
