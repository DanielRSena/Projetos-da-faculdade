#include <stdio.h>

int main() {
    int a1, a2;
    do {
        printf("\n	Coloca o primeiro ano: ");
        scanf("%d", &a1);
        printf("\n	Coloca o segundo ano: ");
        scanf("%d", &a2);
        if (a1 >= a2) printf("\n\tErro! o segundo ano tem que ser maior que o primeiro!\n");
    } while (a1 >= a2);

    printf("\n");

    while (a1 <= a2) {
        if ((a1 % 4 == 0 && a1 % 100 != 1) || (a1 % 4 == 0 && a1 % 100 != 0 && a1 % 400 == 0))
            printf("	 %i", a1);
        a1 = a1 + 1;
    }
    printf("\n");
}