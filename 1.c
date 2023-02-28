#include <stdio.h>
#include <string.h>

int Pontos(float notas[2][6], char sexo[2][6], int equipe) {

    for (int i=0; i<6; i++) {
        if (sexo[equipe][i] == 'f') notas[equipe][i]++;
    }

    return 0;
}

int Novo(char nomes_n[2][7][100], char sexo_n[2][7], float notas_n[2][7], char nomes[2][6][100], char sexo[2][6], float notas[2][6]) {

    for (int i=0; i<2; i++) {
        for (int j=0; j<6; j++) {
            strcpy(nomes_n[i][j], nomes[i][j]);
            sexo_n[i][j] = sexo[i][j];
            notas_n[i][j] = notas[i][j];
        }
    }

    int eq;
    char nome[100], s;
    float nota;

    printf("Digite a equipe na qual deseja adicionar um aluno: ");
    scanf("%d", &eq);
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite o sexo do aluno (m/f): ");
    scanf(" %c", &s);
    printf("Digite a nota do aluno (0-10): ");
    scanf("%f", &nota);

    strcpy(nomes_n[eq][6], nome);
    sexo_n[eq][6] = s;
    notas_n[eq][6] = nota;
    
    return 0;
}

int main() {
    char nomes[2][6][100] = {{"a","b","c","d","e", "f"},{"g","h","i","j","k","l"}};
    char sexo[2][6] = {{'f','f','f','f','f','f'},{'f','m','m','f','m','m'}};
    float notas[2][6] = {{10, 9, 8, 7, 6, 5},{6, 5, 4, 3, 2, 1}};

    int f1=0, f2=0;

    for (int i=0; i<6; i++) {
        if (sexo[0][i] == 'f') f1++;
        if (sexo[1][i] == 'f') f2++;
    }

    if (f1>f2) printf("A equipe 1 tem mais mulheres.\n");
    else if (f2>f1) printf("A equipe 2 tem mais mulheres.\n");
    else printf("Mesma quantidade de mulheres nas duas equipes.\n");

    char alunas[12][100];
    int c = 0;

    for (int i=0; i<12; i++) {
        if ((sexo[i/6][i%6] == 'f') && (notas[i/6][i%6] >= 8)) {
            strcpy(alunas[c], nomes[i/6][i%6]);
            c++;
        }
    }

    for (int i=0; i<c; i++) printf("%s ", alunas[i]);
    printf("\n");

    Pontos(notas, sexo, 1);

    /*
    for (int i=0; i<2; i++) {
        for (int j=0; j<6; j++) printf("%.1f ", notas[i][j]);
        printf("\n");
    }
    */

    char nomes_n[2][7][100];
    char sexo_n[2][7];
    float notas_n[2][7];
    
    Novo(nomes_n, sexo_n, notas_n, nomes, sexo, notas);
    
    
    for (int i=0; i<2; i++) {
        for (int j=0; j<7; j++) printf("(%s, %c, %.1f) ", nomes_n[i][j], sexo_n[i][j], notas_n[i][j]);
        printf("\n");
    }

    

    return 0;
}