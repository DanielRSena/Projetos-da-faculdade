#include <stdio.h>

int main() {
	
    int cidades;
	do {
		printf("\n	fala o numero de cidades, patrao: "); 
        scanf("%d", &cidades);
	} while (cidades < 2);
	
    int c[cidades * 2 - 1], cont;
	do {
		printf ("\n	Coloque a cidade de numero 0: "); 
        scanf("%d", &c[0]);
	} while (c[0] < 1);

	for (cont = 2; cont < cidades * 2 - 1; cont = cont + 2) {
		do {
			printf ("\n	Coloque a cidade de numero %d: ", cont); 
            scanf("%d", &c[cont]);
		} while (c[cont] <= c[cont - 2]);
	}

	for (cont = 1; cont < cidades * 2 - 1; cont = cont + 2) 
        c[cont] = c[cont + 1] - c[cont - 1];
	printf("\n\n\t");

	for (cont = 0; cont < cidades * 2 - 1; cont = cont + 1) 
        printf ("%d	", c[cont]);
	printf("\n\n");
}