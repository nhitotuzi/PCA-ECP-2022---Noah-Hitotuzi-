#include <stdio.h>
#define MAX 100

int Soma(int *i1, int *f1, int *i2, int *f2, int *ar) {
	int len1 = f1-i1 + 1;
	int len2 = f2-i2 + 1;

	if (len1 != len2) return 0;

	for (int i=0; i<len1; i++) {
		*(ar + i) = *(i1 + i) + *(i2 + i);
	}

	return 1;
}


int main() {
	int a1[4] = {1,2,3,4};
	int a2[4] = {1,1,1,1};
	int a3[2] = {11,12};
	int ar[MAX];
	
	if(Soma(a1, a1+3, a3, a3+1, ar)) {
		for (int i=0; i<4; i++) printf("%d ", *(ar+i));
		printf("\n");
	}

	return 0;
}
