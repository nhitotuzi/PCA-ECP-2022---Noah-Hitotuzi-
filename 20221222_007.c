#include <stdio.h>

int main() {

    double massa_i, massa_f;
    int  seg = 0, min, hrs;

    printf("Digite a massa em gramas: ");
    scanf("%lf", &massa_i);

    massa_f = massa_i;

    while (massa_f >= 0.5) {
        seg += 50;
        massa_f = massa_f/2.0;
    }

    printf("%d\n",seg);

    hrs = seg / 3600;

    min = (seg % 3600) / 60;

    seg = (seg % 3600) % 60;

    printf("A massa foi de %.2lf g para %.2lf g em\n",  massa_i, massa_f);
    printf("%d hora(s), %d minuto(s) e %d segundos", hrs, min, seg);
    
    return 0;
}