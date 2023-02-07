#include <stdio.h>
#include <string.h>
#define MAX 1000

int reverse(char str[], char rev[]) {
	int i, len;

	len = strlen(str);

	for (i=0; i<len; i++) rev[i] = str[len-1 - i];
	rev[len] = '\0';

	return 0;
}

int s_vogais(char str[], char s_vg[]) {
	int i, len1, len2=0;

	len1 = strlen(str);

	for (i=0; i<len1; i++) {
		if (str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' &&
		    str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' &&
		    str[i]!='O' && str[i]!='U') {
			s_vg[len2] = str[i];
			len2++;
		}
	}
	s_vg[len2] = '\0';

	return 0;
}

int maiusculas(char str[], char mai[]) {
	int i, len;

	len = strlen(str);

	for (i=0; i<len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') mai[i] = str[i] - ('a' - 'A');
		else mai[i] = str[i];
	}

	return 0;
}

int ocorrencias(char f, char str[]) {
	int i, len, ocrr=0;

	for (i=0; i<len; i++) if (str[i] == f) ocrr++;

	return ocrr;
}

int main() {
	int i, ocrr;
	char str[MAX], rev[MAX], s_vg[MAX], mai[MAX], c;

	scanf("%s", str);
	scanf(" %c", c);
	reverse(str, rev);
	s_vogais(str, s_vg);
	maiusculas(str, mai);
	ocrr = ocorrencias(c, str);

	printf("%s\n", rev);
	printf("%s\n", s_vg);
	printf("%s\n", mai);
	printf("%d\n", ocrr);

return 0;
}
