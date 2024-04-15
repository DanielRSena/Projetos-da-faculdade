#include <stdio.h>

int main() {

	int op = 0;
	float n1, n2, resultado;
    char fim = 's', operacao[] = {'+', '-', '*', '/'};

    printf("\n\t\tBem vindo a minha calculadora simples!\n");

	while (fim == 's') {
		
        printf("\n	Digite o primeiro numero: "); scanf("%f", &n1);
		
        do { 
            printf("\n	Soma = 1\n	Subtracao = 2\n	Multiplicacao = 3\n	Divisao = 4\n\n	Operando: "); 
            scanf("%i", &op); 
        } while (op < 1 || op > 4);

		printf("\n	Digite o segundo numero: "); scanf("%f", &n2);

		if (op == 1) resultado = n1 + n2; 
		else if (op == 2) resultado = n1 - n2; 
		else if (op == 3) resultado = n1 * n2;
		else if (op == 4) {
			if (n2 != 0) resultado = n1 / n2;
			else printf("\n	Erro! Nao se divide por 0!");
		}
        if(op == 4 && n2 == 0) printf("\n");
        else printf("\n\n\t\t %.2f %c %.2f = %.2f", n1, operacao[op - 1], n2, resultado);
		printf("\n\n\tQuer fazer mais uma conta?\n\nDigite s para sim: "); 
        fflush(stdin);
        scanf ("%c", &fim);
	}
	printf("\n\n");
}