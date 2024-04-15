#include <stdio.h>

int main() {
    int t, cont;
    printf("\n\t\t- Somador de vetores - \n\n");
    do {
        printf("\n	Qual o tamanho do vetor? ");
        scanf("%d", &t);
        if (t < 2 || t % 2 != 0) 
            printf("\n\tO vetor tem que ser par e maior que 2!\n");
    } while (t < 2 || t % 2 != 0);

    int v1[t], v2[t / 2];

    for (cont = 0; cont < t; cont = cont + 1) {
        printf("\n	Qual o numero que ficara no local %d? ", cont);
        scanf("%d", &v1[cont]);
    }

    for (cont = 0; cont < t / 2; cont = cont + 1)
        v2[cont] = v1[2 * cont + 1] + v1[2 * cont];
    
    printf("\n\n\t\t");

    for (cont = 0; cont < t; cont = cont + 1)
        printf("%d   ", v1[cont]);
    printf("\n\n\t\t");

    for (cont = 0; cont < t / 2; cont = cont + 1)
        printf("   %d    ", v2[cont]);
    printf("\n\n");
}