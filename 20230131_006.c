#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
	int i, j=0, len;
	char str[MAX], str2[MAX], c;

	printf("Digite a string: ");
	scanf("%[^\n]s", str);

	len = strlen(str);

	for (i=0; i<len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - ('a' - 'A');
		}
	}

	for (i=0; i<len; i++) {
		if (str[i] != ' ') {
			str2[j] = str[i];
			j++;
		}
	}
	str2[j] = '\0';

	for (i=0; i<j/2; i++) {
		if (str2[i] != str2[j-1-i]) {
			printf("Não é palindromo.\n");
			return 0;
		}
	}

	printf("É palindromo.\n");
	return 0;
}
