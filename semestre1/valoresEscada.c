#include <stdio.h>

int main() {
    
    int n;
    printf("\n\t\t- Vetores em escada -\n\n");
    do {
        printf("\n	Qual o tamanho do vetor? ");
        scanf("%i", &n);
        if (n <= 5) printf("\n\tErro! O tamanho tem que ser maior que 5.");
    } while (n <= 5);

    int cont, v[n];
    for (cont = 0; cont < n; cont = cont + 1) {
        printf("\n\tQual o valor guardado no vetor %d? ", cont);
        scanf("%i", &v[cont]);
    }

    printf("\n\n");

    while (n > 0) {
        for (cont = 0; cont < n; cont = cont + 1) printf("\t%d", v[cont]);
        n--;
        printf("\n\n");
    }
}