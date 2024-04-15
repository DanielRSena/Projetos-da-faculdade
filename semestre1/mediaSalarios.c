#include <stdio.h>

int main() {
    int n, cont;
    do {
        printf("\n	Salve patrao, quantos salarios eu calculo? ");
        scanf("%d", &n);
    } while (n < 1);

    float sal[n], salmin, salmax = 0, media = 0;

    do {
        printf("\n	Qual o salario do funcionario 0? ");
        scanf("%f", &sal[0]);
    } while (sal[0] <= 0);

    salmin = sal[0];
    media = salmin;

    for (cont = 1; cont < n; cont = cont + 1) {
        do {
            printf("\n	Qual o salario do funcionario %d? ", cont);
            scanf("%f", &sal[cont]);
        } while (sal[cont] <= 0);

        media = media + sal[cont];

        if (salmax < sal[cont]) salmax = sal[cont];
        if (salmin > sal[cont]) salmin = sal[cont];
    }

    media = media / n;
    printf("\n\n\tVamos aos dados:\n\n\tMaior salario: %.2f\n\tMenor salario: %.2f\n\tMedia dos salarios: %.2f\n\n", salmax, salmin, media);
}