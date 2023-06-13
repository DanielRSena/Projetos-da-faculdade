#include <stdio.h>
main ()


//	1. distancia entre n cidades, distancia percorrida tambem incluida
/*{
	int cidades;
	do {
		printf("\n	fala o numero de cidades, patrao: "); scanf("%d", &cidades);
	   } while (cidades < 2);
	int c[cidades * 2 - 1], cont;
	do {
		printf ("\n	Coloque a cidade de numero 0: "); scanf("%d", &c[0]);
	   } while (c[0] < 1);
	for (cont = 2; cont < cidades * 2 - 1; cont = cont + 2)
		{
			do {
					printf ("\n	Coloque a cidade de numero %d: ", cont); scanf("%d", &c[cont]); 
			   } while (c[cont] <= c[cont - 2]);
	    }
	for (cont = 1; cont < cidades * 2 - 1; cont = cont + 2) c[cont] = c[cont + 1] - c[cont - 1];
	printf("\n\n	");
	for (cont = 0; cont < cidades * 2 - 1; cont = cont + 1) printf ("%d	", c[cont]); 
	printf("\n\n");
}*/


//	2. vendas na semana

/*vetor de 7 posições para os dias da semana. Assuma que a posição 0 tem o dado do domingo, etc, até o sábado 6. Cada posição guarda as qtds vendidas de um produto, que
será dado pelo usuário. Calcule o valor das vendas de cada dia, armazenando em um outro vetor. Mostre v1 e v2 e escreva o nome do dia da semana com maior valor de venda.*/
/*{
	int dias[7], cont;
	float valor, p[7];
	printf("\n	Qual o valor dos produtos? "); scanf("%f", &valor);
	for (cont = 0; cont < 7; cont = cont + 1)
	{
		printf("\n	Qual o valor dos produtos no dia %d? ", cont); scanf("%f", &p[cont]);
		p[cont] = p[cont] * valor;
    }
    printf("\n\n	Dia 0 = domingo\n\tDia 1 = segunda\n\tDia 2 = terca\n\tDia 3 = quarta\n\tDia 4 = quinta\n\tDia 5 = sexta\n\tDia 6 = sabado\n\t\n	");
    for (cont = 0; cont < 7; cont = cont + 1)
    {
    	printf("Dia %d: ", cont); 
    	printf("%.2f\n\t", p[cont]);
	}
}*/


//	3. vetor criado pelo usuário 

/*	v1 de tamanho t, t >= 2 e par. Para cada duas posições, crie uma posição em um v2 que guardará os resultados das 
somas do v1, dois números de cada vez. No final, exiba os 2 vetores*/

{
	int t, cont;
	do { printf("\n	Salve chefia, qual o tamanho do vetor? "); scanf("%d", &t); } while (t < 2 || t % 2 != 0);
	int v1[t], v2[t / 2];
	for (cont = 0; cont < t; cont = cont + 1)
	{ printf("\n	Qual o numero que ficara no local %d? ", cont); scanf ("%d", &v1[cont]); }
	for (cont = 0; cont < t / 2; cont = cont + 1) { v2[cont] = v1[ 2 * cont + 1] + v1[2 * cont]; }
	printf("\n\n\t");
	for (cont = 0; cont < t; cont = cont + 1) printf ("%d   ", v1[cont]);
	printf("\n\n\t");
	for (cont = 0; cont < t / 2; cont = cont + 1)	printf ("   %d    ", v2[cont]);
	printf("\n\n");
}


//	4. Pede salarios, tal que n > 0 e exibe o maior e menor deles, além da média
/*{
	int n;
	do {
		printf("\n	Salve patrao, quantos salarios eu calculo? "); scanf("%d", &n);
	   } while(n < 1);
	float sal[n], salmin, salmax = 0, media = 0;
	int cont;
	do { printf("\n	Qual o salario do funcionario 0? "); scanf("%f", &sal[0]); } while (sal[0] <= 0);
	salmin = sal[0]; media = salmin;
	for (cont = 1; cont < n; cont = cont + 1)
	{ 
		do { printf("\n	Qual o salario do funcionario %d? ", cont); scanf("%f", &sal[cont]); } while (sal[cont] <= 0);
		media = media + sal[cont];
		if (salmax < sal[cont]) salmax = sal[cont];
		if (salmin > sal[cont]) salmin = sal[cont];
	}
	media = media / n;
	printf("\n\n	Vamos aos dados:\n\n	Maior salario: %.2f\n	Menor salario: %.2f\n	Media dos salarios: %.2f\n\n", salmax, salmin, media);
}*/


//	5. cadastra n vetores, sendo que n > 5 e exibe em função de escada.
/*{
	int n;
	do { printf("\n	Salve patrao, qual o numero de vetores de hoje? "); scanf("%i", &n); } while (n <= 5);
	int cont, v[n];
	for (cont = 0; cont < n; cont = cont + 1) 
	{ printf("\n	Qual o valor guardado no vetor %d? ", cont); scanf("%i", &v[cont]); }
	printf("\n\n");
	while (n > 0)
	{
		for (cont = 0; cont < n; cont = cont + 1)
		{ printf ("	%d", v[cont]); }
		n = n - 1;
		printf("\n\n");
    }
}*/
	

//	6. cadastra vetor de tamanho n, com n > 0 e gera outro em forma crescente 
/*{
	int n, vmax = 0;
	do { printf("\n	Salve patrao, qual o numero de vetores de hoje? "); scanf("%i", &n); } while (n < 1);
	int cont, v1[n], v2[n], aux;
	for (cont = 0; cont < n; cont = cont + 1)
	{
		printf("\n	Qual o valor guardado no vetor %d? ", cont); scanf("%i", &v1[cont]);
		v2[cont] = v1[cont];
		if (v2[cont] < v2[cont - 1])
		{
			for (cont = cont; cont = 0; cont = cont - 1)
			{
				aux = v2[cont - 1];
				v2[cont - 1] = v2[cont];
				v2[cont] = aux;
			}
		}
	}	
	printf("\n\n	"); 
	for (cont = 0; cont < n; cont = cont + 1) printf ("%d\t", v1[cont]);
	printf("\n\n	");
	for (cont = 0; cont < n; cont = cont + 1) printf ("%d\t", v2[cont]);
	printf("\n\n");
}*/



/*int t, i, j;
for (i=0, j =0; i < t; i = i + 1)
{p
printf
if(i%2!=0)
{
	v2[j] = v1[i] + v1[i - 1]; j = j + 1;
}
}*/
	

