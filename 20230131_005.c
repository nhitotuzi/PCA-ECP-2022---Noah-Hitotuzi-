#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
	int i, len;
	char str[MAX], c;

	printf("Digite a mensagem a ser codificada: ");
	scanf("%[^\n]s", str);

	len = strlen(str);

	for (i=0; i<len; i++) {
		if (str[i]>='a' && str[i]<='z') {
			c = str[i] - ('a'-'A') - 'A'; 
			printf("%c", (c + 3)%26 + 'A');
		}
		else if (str[i]>='A' && str[i]<='Z') {
			c = str[i] - 'A'; 
			printf("%c", (c + 3)%26 + 'A');
		} else printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
