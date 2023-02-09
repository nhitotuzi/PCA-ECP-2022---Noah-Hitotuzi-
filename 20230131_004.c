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
}

int Rev(char str[]) { // printa a string (str) em ordem reversa. 
	int i, len;

	len = strlen(str);

    printf("\n\n");
	for (i=len-1; i>=0; i--) printf("%c", str[i]);
    printf("\n\n");

	if (Voltar()) return 1;
    return 0;
}

int Ocorr(char str[]) { // retorna o número de ocorrencias de (f) em (str)
	int i, len, ocrr=0;
	char f, m, M;

	len = strlen(str);

    printf("\n\nDigite o caractere para encontrar: ");
    scanf(" %c", &f);

    m = f;
    M = f;

	if (f >= 'a' && f <= 'z') M = f - 32;
	else if (f >= 'A' && f <= 'Z') m = f + 32;

	for (i=0; i<len; i++) if (str[i] == M || str[i] == m) ocrr++;

	printf("\nForam encotrados %d ocorrencias do caractere na string.\n\n", ocrr);

    if (Voltar()) return 1;
    return 0;
}

int Rmv(char str[]) { // copia todos os caracteres de (str) em (s_ch), exceto (c), ou seja, remove (c) de (str)
	int i, len, b=1;
	char c, f, m, M;

    printf("\n\nDigite o caractere a ser substituído: ");
    scanf(" %c", &c);

    printf("Digite o caractere para substituir: ");
    scanf(" %c", &f);

	if (c >= 'a' && c <= 'z') {
		m = c;
		M = c - 32;
	}
	else if (c >= 'A' && c <= 'Z') {
		m = c + 32;
		M = c;
	}

	len = strlen(str);

    printf("\n\n");
	for (i=0; i<len; i++) {
		if (str[i] == c) {
            if (b) {
                printf("%c", f);
                b = 0;
            }
            else printf("%c", str[i]);
		} 
        else printf("%c", str[i]);
	}
    printf("\n\n\n");

	if (Voltar()) return 1;
    return 0;
}

int Csub(char str[]) {
    int i, j, len1, len2, esub = 1;
    char sub[MAX];

    printf("\n\nDigite a substring a ser encontrada: ");
    scanf(" %s", sub);

    len1 = strlen(str);
    len2 = strlen(sub);

    if (len2 > len1) {
        printf("\n Não é substring.\n\n");
        if (Voltar()) return 1;
        return 0;
    }

    for (i=0; i<(len1-len2 +1); i++) {
        esub = 1;
        for ( j = 0; j < len2; j++) {
            if (sub[j] != str[i+j]) esub = 0;
        }
        
        if (esub) {
            printf("\nÉ substring.\n\n");
            if (Voltar()) return 1;
            return 0;
        }
    }

    printf("\nNão é substring.\n\n");
    if (Voltar()) return 1;
    return 0;

}

int Sub(char str[]) {
    int i, inic, fim, len;

    len = strlen(str);

    printf("\n\nDigite a posição inicial da substring (0-%d): ", len-1);
    scanf("%d", &inic);

    while (inic<0 || inic >= len) {
        printf("Posição inválida, tente novamente\n");
        printf("Digite a posição inicial da substring (0-%d): ", len-1);
        scanf("%d", &inic);
    }

    printf("Digite a posição final da substring (%d-%d): ", inic, len-1);
    scanf("%d", &fim);

    while (fim<inic || fim >= len) {
        printf("Posição inválida, tente novamente\n");
        printf("Digite a posição inicial da substring (%d-%d): ", inic+1, len-1);
        scanf("%d", &fim);
    }

    for (i = inic; i <= fim; i++) printf("%c", str[i]);
    printf("\n\n");

    if (Voltar()) return 1;
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
            if (!Rev(str)) return 0;
            break;

        case 'f':
            if (!Ocorr(str)) return 0;
            break;

        case 'g':
            if (!Rmv(str)) return 0;
            break;

        case 'h':
            if (!Csub(str)) return 0;
            break;

        case 'i':
            if (!Sub(str)) return 0;
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
