#include <stdio.h>

int main() {

	int m, n, m_max, n_max, i, j;
	int valor, max=0;

	printf("Digite o primeiro número natural: ");
	scanf("%d", &m);
	printf("Digite o segundo número natural: ");
	scanf("%d", &n);

	for (i=1; i<=m; i++) {
		for (j=1; j<=n; j++){
			valor = i*j - i*i + j;
			if (valor > max) {
				max = valor;
				m_max = i;
				n_max = j;
			}
		}
	}
	
	printf("x = %d, y = %d\n", m_max, n_max);

	return 0;
}
