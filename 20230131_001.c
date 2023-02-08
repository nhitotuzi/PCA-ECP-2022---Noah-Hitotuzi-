#include <stdio.h>
#include <string.h>
#define MAX 1000

int reverse(char str[], char rev[]) { // retorna a string (str) em ordem reversa em (rev). 
	int i, len;

	len = strlen(str);

	for (i=0; i<len; i++) rev[len-1 - i] = str[i];
	rev[len] = '\0';

	return 0;
}

int s_vogais(char str[], char s_vg[]) { // remove todas as vogais de (str). retorna o resultado em (s_vg)
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

int maiusculas(char str[], char mai[]) { // transforma os caracteres de (str) em maiúsculos. Retorna o resultado em (mai)
	int i, len;

	len = strlen(str);

	for (i=0; i<len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') mai[i] = str[i] - ('a' - 'A');
		else mai[i] = str[i];
	}

	mai[len] = '\0';

	return 0;
}

int ocorrencias(char f, char str[]) { // retorna o número de ocorrencias de (f) em (str)
	int i, len, ocrr=0;
	char m = f, M = f;

	len = strlen(str);

	if (f >= 'a' && f <= 'z') M = f - 32;
	else if (f >= 'A' && f <= 'Z') m = f + 32;

	for (i=0; i<len; i++) if (str[i] == M || str[i] == m) ocrr++;

	return ocrr;
}

int remov_char(char c, char str[], char s_ch[]) { // copia todos os caracteres de (str) em (s_ch), exceto (c), ou seja, remove (c) de (str)
	int i, len1, len2=0;
	char m = c, M = c;

	if (c >= 'a' && c <= 'z') {
		m = c;
		M = c - 32;
	}
	else if (c >= 'A' && c <= 'Z') {
		m = c + 32;
		M = c;
	}

	len1 = strlen(str);

	for (i=0; i<len1; i++) {
		if (str[i] != M && str[i] != m) {
			s_ch[len2] = str[i];
			len2++;
		}
	}
	s_ch[len2] = '\0';

	return 0;
}

int main() {
	int ocrr;
	char str[MAX], rev[MAX], s_vg[MAX], mai[MAX], s_ch[MAX], c;

	printf("Digite uma palavra: ");
	scanf("%s", str);
	printf("Digite uma letra: ");
	scanf(" %c", &c);
	//c = 'e';
	reverse(str, rev);
	s_vogais(str, s_vg);
	maiusculas(str, mai);
	ocrr = ocorrencias(c, str);
	remov_char(c, str, s_ch);

	printf("Reversa: %s\n", rev);
	printf("Sem vogais: %s\n", s_vg);
	printf("Maiúscula: %s\n", mai);
	printf("Ocorrências de %c: %d\n", c, ocrr);
	printf("Sem o caracter %c: %s\n", c, s_ch);

return 0;
}
