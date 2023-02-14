#include <stdio.h>
#include <string.h>
#define MAX 20
#define LEN 120

int Nomes(char nomes[MAX][LEN]) {
	int i=-1;
	
	printf("\n\nDigite os nomes da lista (ou digite \"fim\" para terminar).\n\n");
	do {
		i++;
		printf("Nome: ");
		scanf("%120s", nomes[i]);
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

int Del(char nomes[MAX][LEN]) {
	int i = 0, c = 0, achou = 0;
	char temp[MAX][LEN];
	char nome[LEN];

	printf("Digite um nome para apagar da lista: ");
	scanf("%s", nome);

	while (strcmp(nomes[i], "fim")) {
		if (strcmp(nomes[i], nome)) {
			strcpy(temp[c], nomes[i]);
			c++;
		} else achou = 1;
		i++;
	}
	strcpy(temp[c], "fim");

	if (achou) {
		i = 0;
		while (strcmp(temp[i], "fim")) {
			strcpy(nomes[i], temp[i]);
			i++;
		}
		strcpy(nomes[i], "fim");


		Print(nomes);
	} else printf("Nome não encontrado.\n");

	return 0;	
}

int Ord(char nomes[MAX][LEN]) {
	int i, len = 0, t;
	char temp[LEN], a, b;
	char nomes_o[MAX][LEN];

	while (strcmp(nomes[len], "fim")) {
		strcpy(nomes_o[len], nomes[len]);
		len++;
	}
	strcpy(nomes_o[len], "fim");

	do {
		t = 0;
		for (i=0; i < len-1; i++){
			if (nomes_o[i][0] >= 'a' && nomes_o[i][0] <= 'z') a = nomes_o[i][0] - ('a' - 'A');
			else a = nomes_o[i][0];
			if (nomes_o[i+1][0] >= 'a' && nomes_o[i+1][0] <= 'z') b = nomes_o[i+1][0] - ('a' - 'A');
			else b = nomes_o[i+1][0];

			if (a > b) {
				strcpy(temp, nomes_o[i]);
				strcpy(nomes_o[i], nomes_o[i+1]);
				strcpy(nomes_o[i+1], temp);
				t = 1;
			}
		}
	} while (t);

	Print(nomes_o);

	return 0;
}

int Ord_l(char nomes_o[MAX][LEN] , char nomes[MAX][LEN]) {
	int i, len = 0, t;
	char temp[LEN], a, b;

	while (strcmp(nomes[len], "fim")) {
		strcpy(nomes_o[len], nomes[len]);
		len++;
	}
	strcpy(nomes_o[len], "fim");

	do {
		t = 0;
		for (i=0; i < len-1; i++){
			if (nomes_o[i][0] >= 'a' && nomes_o[i][0] <= 'z') a = nomes_o[i][0] - ('a' - 'A');
			else a = nomes_o[i][0];
			if (nomes_o[i+1][0] >= 'a' && nomes_o[i+1][0] <= 'z') b = nomes_o[i+1][0] - ('a' - 'A');
			else b = nomes_o[i+1][0];

			if (a > b) {
				strcpy(temp, nomes_o[i]);
				strcpy(nomes_o[i], nomes_o[i+1]);
				strcpy(nomes_o[i+1], temp);
				t = 1;
			}
		}
	} while (t);

	Print(nomes_o);

	return 0;
}

int main () {
	char nomes[MAX][LEN];
	char nomes_o[MAX][LEN];

	Nomes(nomes);
	Print(nomes);
	Del(nomes);
	Ord(nomes);
	Ord_l(nomes_o, nomes);


	return 0;
}
