#include <stdio.h>

int main() {
    
    int a, b, x;
    printf("\n\t\t- Numeros divisiveis por x entre a e b (b > a) -\n\n");
    do {
        printf("\n	Primeiro numero do intervalo: ");
        scanf("%d", &a);
        printf("\n	Segundo numero do intervalo: ");
        scanf("%d", &b);
        if (a >= b) printf("\n	Erro! o segundo numero tem que ser maior que o primeiro!\n");
    } while (a >= b);

    printf("\n	Qual eh o numero divisor (x)? ");
    scanf("%i", &x);
    printf("\n\n\tOs numeros entre %i e %i divisiveis por %i sao: \n\n", a, b, x);
    while (a <= b) {
        if (a % x == 0)
            printf("	%d", a);
        a = a + 1;
    }
    printf("\n\n");
}