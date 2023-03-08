#include <stdio.h>

int Ord(int *v1, int *v2, int *v3) {
	int temp, troca = 1;

	if (*v1 == *v2 && *v2 == *v3) return 0;

	while (troca) {
		troca = 0;
		if (*v1>*v2) {
			temp = *v1;
			*v1 = *v2;
			*v2 = temp;
			troca = 1;
		}
		if (*v2>*v3) {
			temp = *v2;
			*v2 = *v3;
			*v3 = temp;
			troca = 1;
		}
	}

	return 0;
}

int main() {
	int v1 = 3, v2 = 2, v3 = 1;

	Ord(&v1, &v2, &v3);

	printf("%d\n", v1);
	printf("%d\n", v2);
	printf("%d\n", v3);

	return 0;
}
