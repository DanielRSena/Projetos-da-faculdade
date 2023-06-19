#include <stdio.h>
#include <math.h>
int main()


//	1.	Quadrado perfeito (numero que é um produto de outro numero elevado à 2)
/*{
	float num, qua;
	int nan;
	printf("\n	Digite um numero para saber se eh um quadrado perfeito: "); scanf("%f", &num);
	if (num < 0) num = num * (-1);
	qua = sqrt (num);
	nan = qua;
	if (nan == qua) printf ("\n	%.2f eh um quadrado perfeito pois %.2f elevado ao quadrado eh %.2f!\n\n ", num, qua, num);
	else printf("\n	Sinto muito, %.2f nao eh um quadrado perfeito.\n\n", num);
}*/


//	2.	Caixa eletronico
/*{
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
}*/


//	3.	Calculadora simples
/*{
	float n1, n2, resultado;
	int op, fim = 1;
	printf("\n\t\tBem vindo a minha calculadora simples!\n");
	while (fim == 1)
	{
		printf("\n	Digite o primeiro numero: "); scanf("%f", &n1);
		do { printf("\n	Soma = 1\n	Subtracao = 2\n	Multiplicacao = 3\n	Divisao = 4\n\n	Operando: "); scanf("%i", &op); } while (op < 1 || op > 4);
		printf("\n	Digite o segundo numero: "); scanf("%f", &n2);
		if (op == 1) { resultado = n1 + n2; printf("\n\n\t\t %f + %f = %f", n1, n2, resultado);}
		else if (op == 2) {resultado = n1 - n2; printf("\n\n\t\t %f - %f = %f", n1, n2, resultado);}
		else if (op == 3) {resultado = n1 * n2; printf("\n\n\t\t %f * %f = %f", n1, n2, resultado);}
		else if (op == 4) 
			{
				if (n2 != 0) {resultado = n1 / n2; printf ("\n\n\t\t	%f / %f = %f", n1, n2, resultado);}
				else printf("\n	Operacao inexistente, nao se divide por 0!\n");
			}
		printf("\n\n	Quer fazer mais uma conta?\n\nDigite 1 para sim\nDigite 2 para nao: "); scanf ("%i", &fim);
	}
	printf("\n\n");
}*/


//	4.	Descobrir se tres medidas formam um triangulo
/*{
	float a, b, c;
	printf("\n\t\t- Programa para classificar triangulos - \n\n");	
	do { printf("\n\tMedida do lado 1: "); scanf("%f", &a); } while (a <= 0);
	do { printf("\n\tMedida do lado 2: "); scanf("%f", &b); } while (b <= 0);
	do { printf("\n\tMedida do lado 3: "); scanf("%f", &c); } while (c <= 0); 
	if(a >= b + c || c >= a + b || b >= a + c) printf ("\n	Erro! Nenhuma das medidas pode ser maior que a soma das outras duas!\n\n");
	else if (a == b && b == c) printf("\n	Temos um triangulo equilatero! (tres lados iguais)\n\n");
	else if (a == b && b != c) printf ("\n	Temos um triangulo isoceles! (dois lados iguais)\n\n");
	else printf("\n	Temos um triangulo escaleno! (tres lados iguais)\n\n");
}*/


//	5.	Situações de um aluno
/*{
	int cont, alunos;
	float aulas;
	printf("\n\t\t- Situacoes dos alunos -\n");
	do { printf("\n	Quantos serao os alunos analisados? "); scanf("%i", &alunos); } while (alunos <= 0);
	do { printf("\n	Quantas aulas foram dadas durante o intervalo? "); scanf("%f", &aulas); } while (aulas < 1);
  	for (cont = 0; cont < alunos; cont = cont + 1)
  	{
  		float n1 = 0, n2 = 0, m = 0, p = 0;
		do { printf("\n\t----------------\n\n\t\tAluno %i\n\n\tAulas presentes: ", cont); scanf("%f", &p); } while (p < 0 || p > aulas);
		p = p / aulas * 100;
		if (p < 75) printf("\n\tFrequencia: %.0f%% (reprovado)\n\n", p);
		else {
			do { printf("\n	Primeira nota: "); scanf("%f", &n1); } while (n1 < 0 || n1 > 10);
			do { printf("\n	Segunda nota: ", cont); scanf("%f", &n2); } while (n1 < 0 || n1 > 10);
			m = (n1 + n2) / 2;
			if (m >= 6) printf("\n	Media: %f\n\tFrequencia: %.0f%%\n\n\t\t(aprovado)\n\n", m, p);
			else if (m >= 3) printf("\n	Media: %f\n\tFrequencia: %.0f%%\n\n\t\t(exame)\n\n", m, p);
			else printf("\n	Media: %f\n\tFrequencia: %.0f%%\n\n\t\t(reprovado)\n\n", m, p);
			 }
	}
}*/


//	6.	Verificar se tres angulos podem ser de um triangulo
//{
//float a1, a2, a3;
//printf("\n	Fala a medida do angulo 1: "); scanf("%f", &a1);
//printf("\n	Fala a medida do angulo 2: "); scanf("%f", &a2);
//printf("\n	Fala a medida do angulo 3: "); scanf("%f", &a3);
//if ((a1 <=0 || a2 <= 0 || a3 <= 0) || (a1 + a2 + a3 != 180)) printf ("\n	Erro! Os tres angulos somados tem que ser igual a 180 e nenhum pode ser 0 ou negativo!\n");
//else if (a1 < 90 && a2 < 90 && a3 < 90) printf("\n	Temos um triangulo acutangulo!\n");
//else if (a1 == 90 || a2 == 90 || a3 == 90) printf("\n	temos um triangulo retangulo!\n");
//else printf ("\n	Temos um triangulo obstusangulo!\n");
//}


//	10	Qtd numeros divisiveis por x entre a e b (b > a)
/*{
	int a, b, x;
	do {
		printf("\n	Coloca o primeiro numero: "); scanf("%d", &a);
		printf("\n	Coloca o primeiro numero: "); scanf("%d", &b);
		if (a >= b) printf("\n	Erro! o segundo numero tem que ser maior que o primeiro!\n");
		} while (a >= b);
	printf("\n	E qual eh o numero que sera o divisor? "); scanf("%i", &x);
	printf("\n");
	while (a <= b)
	{
		if (a % x == 0) printf("	%d", a);
		a = a + 1;
	}
	printf("\n");
	}*/
	
	
//	11.	Anos bissextos em intervalos de outros dois
/*{
			int a1, a2;
	do {
		printf("\n	Coloca o primeiro ano: "); scanf("%d", &a1);
		printf("\n	Coloca o segundo ano: "); scanf("%d", &a2);
		if (a1 >= a2) printf("\n	Erro! o segundo ano tem que ser maior que o primeiro!\n");
		} while (a1 >= a2);
	printf("\n");
	while (a1 <= a2)
	{
		if ((a1 % 4 == 0 && a1 % 100 != 1) || (a1 % 4 == 0 && a1 % 100 != 0 && a1 % 400 == 0)) printf("	 %i", a1);
		a1 = a1 + 1;
	}
	printf("\n");
	}*/
	
	
//	12.	Registro e media de precos de n produtos
/*{
	float v, vt, media;
	const int k = 3;
	int cont = 1;
	while (cont <= k)
	{
		printf("\n	Coloque o valor do produto %i: ", cont); scanf("%f", &v);
		if (v > 150) v = v * 1.05;
		cont = cont + 1;
		vt = vt + v;
	}
		printf("\n	O valor total eh %.2f, e a media dos valores eh de %.2f\n\n", vt, vt/k);
}*/


//	13.	Lugares de onibus, viagens
/*{
	int lugares, idade, cont = 1; 
	float cmin, pa = 0, pb = 0, pc = 0, pd = 0, pt = 0; 
	do{
		printf("\n	Digite a quantidade de lugares disponiveis no onibus: "); scanf("%d", &lugares); 
	  } while (lugares <= 0);
	do{
		printf("\n	Digite o custo minimo: "); scanf("%f", &cmin); 
	  } while (cmin <= 0);
	while(cont <= lugares)
	{
		do{
				printf("\n	Digite a idade do passageiro %d: ", cont); scanf("%d",&idade); 
		  } while (idade < 0);
	
			if (idade<7) pa = pa + cmin;
			else if(idade >= 7 && idade <= 12)	pb = pb + cmin * 1.1; 
			else if(idade > 12 && idade <= 17)	pc = pc +  cmin * 1.2; 
			else if(idade > 17)	pd = pd + cmin * 1.3; 
			cont = cont + 1;
			pt = pa + pb + pc + pd; 
	} 
	printf("\n	O total arrecadado entre pessoas com menos de 7 anos eh: %.2f", pa);	
	printf("\n	O total arrecadado de pessoas entre 7 e 12 anos eh: %.2f", pb);
	printf("\n	O total arrecadado de pessoas ente 12 e 17 anos eh: %.2f", pc);
	printf("\n	O total arrecadado de pessoas com mais de 17 anos eh: %.2f", pd);
	printf("\n\n	O valor total arrecadado eh de: %.2f\n\n", pt); 
}*/


//	14.	Potencia sem função pow
/*{
	int a, b, c, p, t = 1, cont = 1;
	do {
  		printf("\n	Qual eh o numero que voce quer multiplicar? "); scanf("%i", &a);
  		if (a <= 0) printf ("\n	Erro! O numero tem que ser positivo.\n");
  	   } while (a <=0);
  	printf("\n	Qual eh o numero que voce quer elevar? "); scanf("%i", &b);
  	c = b;
  	if (b < 0)  b = b * (-1);
  	while (cont <= b) {
  			t = t * a;
  			cont = cont + 1;
		  }
	if (c < 0) printf("\nO resultado eh 1/%d\n\n", t);
	else printf ("\n	O numero eh %d\n\n", t);
}*/
	

//	15.	Numeros primos
/*{
	int n, cont = 2, p;
	do {
  		printf("\n	Coloque um numero para eu informar se eh primo ou nao: "); scanf("%i", &n);
  		if (n < 0) printf("\n	Erro! O numero tem que ser maior que 2, o primeiro numero primo.\n\n");
	   } while (n < 0);
	if (n < 2) p = 0;
	else p = 1;
	while ( cont <= sqrt(n))
		{
			if (n % cont == 0)	
			{
				p = 0;
				break;
			}
			else cont = cont + 1;
		}
	if (p == 1) printf ("\n	O numero %d eh primo!\n\n", n);
	else printf ("\n	O numero %d naoh eh primo.\n\n", n);
}*/
	

//	16.	MDC segundo euclides
/*{
	int rst, a, b;
	do {
		printf("\n	Coloque o primeiro numero: "); scanf("%d", &a);
		printf("\n	Coloque o segundo numero: "); scanf("%d", &b);
		if 	(a >= b) printf("\n	Erro! o segundo numero tem que ser maior que o primeiro!\n\n");
       } while (a > b || a <= 0 || b <= 0);
    rst = b % a;
	while (rst != 0)
	{
			b = a;
			a = rst;
			rst = b % a;
	} 
	printf("\n	O MDC eh %d\n\n", b);
} 


//	17.	Distancia entre n cidades, distancia percorrida tambem incluida
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


//	18. Vetor criado pelo usuário, tamanho > 2 e par. Outro vetor guardará a soma de duas posições do primeiro
/*{
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
}*/


//	19. Pede salarios, tal que n > 0 e exibe o maior e menor deles, alem da media
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


//	20.	Cadastra n vetores, tal que n > 5 e exibe valores em escada.
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

