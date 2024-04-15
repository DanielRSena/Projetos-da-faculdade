#include <stdio.h>

int main() {

    int lugares, idade, cont = 1;
    float cmin, pa = 0, pb = 0, pc = 0, pd = 0, pt = 0;
    printf("\n\t\t- Organizador de lucro em um onibus -\n\n");
    do {
        printf("\n	Digite a quantidade de lugares disponiveis no onibus: ");
        scanf("%d", &lugares);
    } while (lugares <= 0);

    do {
        printf("\n	Digite o custo minimo por pessoa: ");
        scanf("%f", &cmin);
    } while (cmin <= 0);

    while (cont <= lugares) {

        do {
            printf("\n	Digite a idade do passageiro %d: ", cont);
            scanf("%d", &idade);
        } while (idade < 0);

        if (idade < 7) pa = pa + cmin;
        else if (idade >= 7 && idade <= 12) pb = pb + cmin * 1.1;
        else if (idade > 12 && idade <= 17) pc = pc + cmin * 1.2;
        else if (idade > 17) pd = pd + cmin * 1.3;
        cont = cont + 1;
        pt = pa + pb + pc + pd;
    }

    printf("\n\n\t	- Total arrecadado por faixa etaria -\n\n \tMenos de 7 anos: %.2f", pa);
    printf("\n	Entre 7 e 12 anos: %.2f", pb);
    printf("\n	Entre 12 e 17 anos: %.2f", pc);
    printf("\n	Com mais de 17 anos: %.2f", pd);
    printf("\n\n	O valor total arrecadado eh de: %.2f\n\n", pt);
}