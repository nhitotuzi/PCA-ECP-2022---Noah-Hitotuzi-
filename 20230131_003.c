#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Int(char c) {
    return (c - 48);
}

int main() {
  char data[11];
  int dia, mes, ano;

  printf("Digite a data (DD/MM/YYYY): ");
  scanf("%s", data);

  while (strlen(data) != 10 || data[2] != '/' || data[5] != '/' ||
      !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3]) ||
      !isdigit(data[4]) || !isdigit(data[6]) || !isdigit(data[7]) ||
      !isdigit(data[8]) || !isdigit(data[9])) {
    printf("Formato inválido. Tente noavamente.\n");
    printf("Digite a data (DD/MM/YYYY): ");
    scanf("%s", data);
  }

  dia = Int(data[0]) * 10 + Int(data[1]);
  mes = Int(data[3]) * 10 + Int(data[4]);
  ano = Int(data[6]) * 1000 + Int(data[7]) * 100 + Int(data[8]) * 10 + Int(data[9]);

  printf("Dia: %d\n", dia);
  printf("Mes: %d\n", mes);
  printf("Ano: %d\n", ano);

  return 0;
}