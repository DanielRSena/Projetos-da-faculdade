#include <stdio.h>

int main() {

	int valor, n1, n2, n5, n10, n20, n50, n100, n200;

	do {
		printf("\n Qual o valor do saque? "); scanf("%i", &valor);
	} while (valor <= 0);

	n200 = valor / 200; valor = valor % 200;
	n100 = valor / 100; valor = valor % 100;
	n50 = valor / 50; valor = valor % 50;
	n20 = valor / 20; valor = valor % 20;
	n10 = valor / 10; valor = valor % 10;
	n5 = valor / 5; valor = valor % 5;
	n2 = valor / 2; valor = valor % 2;
	n1 = valor / 1; valor = valor % 1;

	printf("\n\n\t\t- Numero de notas a serem liberadas -\n\n\tNotas de 200: %i\n\tNotas de 100: %i\n\tNotas de 50: %i\n\tNotas de 20: %i\n\tNotas de 10: %i\n\tNotas de 5: %i\n\tNotas de 2: %i\n\tNotas de 1: %i\n\n ", n200, n100, n50, n20, n10, n5, n2, n1);
}