#include <stdio.h>
#include <string.h>
#define MAX 20

int Voltar() {
    char r;

    printf("Voltar? (S/N) ");
    scanf(" %c", &r);

    while (r != 'S' && r != 'N' && r != 's' && r != 'n'){
        printf("Voltar? (S/N) ");
        scanf(" %c", &r);
    }

    if (r == 'S' || r == 's') return 1;
    return 0;
}

void Ler_s(char str[]) {
    printf("\n\nDigite uma string: ");
    scanf(" %s", str);
    printf("\n");
}

int Tam(char str[]) {

    printf("\n\nO tamanho da string é: %d\n\n", strlen(str));
    
    if (Voltar()) return 1;

    return 0;
}

int Comp(char str[]) {
    char str2[MAX];
    int i, len;

    len = strlen(str);

    printf("\n\nDigite outra string: ");
    scanf("%s", str2);

    if (strlen(str2) != len) {
        printf("\nAs strings são diferentes.\n\n");
        if (Voltar()) return 1;
        return 0;
    }

    for (i=0; i<len; i++) {
        if (str[i] != str2[i]) {
            printf("\nAs strings são diferentes.\n\n");
            if (Voltar()) return 1;
            return 0;
        }
    }

    printf("\nAs strings são iguais.\n\n");
    if (Voltar()) return 1;
    return 0;
}

int Concat(char str[]) {
    char str2[MAX], str3[MAX+MAX];
    int i, len1, len2;

    len1 = strlen(str);

    printf("\n\nDigite outra string: ");
    scanf("%s", str2);

    len2 = strlen(str2);

    for (i=0; i<len1; i++) str3[i] = str[i];
    for (i=0; i<len2; i++) str3[i+len1] = str2[i];

    str3[len1+len2] = '\0';

    printf("Concatenação: %s\n\n", str3);

    if (Voltar()) return 1;
    return 0;

    return 0;
}

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
    char opcao;
	char str[MAX] = "", rev[MAX], s_vg[MAX], mai[MAX], s_ch[MAX], c;

    while (1) {
        printf("\n######################################\n   ____  _        _                 \n  / ___|| |_ _ __(_)_ __   __ _ ___ \n  \\___ \\| __| '__| | '_ \\ / _` / __|\n   ___) | |_| |  | | | | | (_| \\__ \\\n  |____/ \\__|_|  |_|_| |_|\\__, |___/\n                          |___/     \n######################################\n\n");
        printf("(a) Ler uma string S1 (tamanho máximo 20 caracteres)\n");
        printf("(b) Imprimir o tamanho da string S1\n");
        printf("(c) Comparar a string S1 com uma nova string S2\n");
        printf("(d) Concatenar a string S1 com uma nova string S2\n");
        printf("(e) Imprimir a string S1 de forma reversa\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1.\n");
        printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2\n");
        printf("(h) Verificar se uma string S2 é substring de S1\n");
        printf("(i) Retornar uma substring da string S1\n");
        printf("(j) Sair\n");
        printf("Selecione uma das opções: ");
        scanf("  %c", &opcao);

        switch (opcao) {
        case 'a':
            Ler_s(str);            
            break;        
        
        case 'b':
            if (!Tam(str)) return 0;
            break;

        case 'c':
            if (!Comp(str)) return 0;
            break;
        
        case 'd':
            if (!Concat(str)) return 0;
            break;

        case 'e':
            Ler_s(str);            
            break;

        case 'f':
            Ler_s(str);            
            break;

        case 'g':
            Ler_s(str);            
            break;

        case 'h':
            Ler_s(str);            
            break;

        case 'i':
            Ler_s(str);            
            break;

        case 'j':
            return 0;            
            break;
        
        default:
            printf("Opção inválida, tente novamente.\n");
            break;
        }
    }



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
