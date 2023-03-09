#include <stdio.h>
#include <string.h>
#define MAX 100

void Search(char **ini, char **fim, char *palavra, int *res, int *qnt) {
	int len = (fim - ini) +1;
	int cont = 0;

	for (int i=0; i<len; i++) {
		if (!strcmp(*(ini+i), palavra)) {
			*(res+cont) = i;
			cont++;
		}
	}

	*qnt = cont;
}

int main() {
	char *palavras[7] = {"Um", "dois", "Um", "Um", "Tres", "quatro", "Cinco"};
	char palavra[] = "Um";
	int res[MAX], len;

	Search(palavras, (palavras+6), palavra, res, &len);

	for (int i=0; i<len; i++) printf("%d\n", res[i]);

	return 0;
}
