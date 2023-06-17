#include <stdio.h>
#include <math.h>
int main()


//	1.	x1 e x2 de baskara (desatualizada, sem do...while ou repetição da conta)
/*{
float a, b, c, d, x1, x2;
printf("\nAgora eu vou calcular o x1 e x2 da equaï¿½ao de 2 grau para vc. Fala o 'a' primeiro: ");
scanf("%f", &a);
if (a == 0 ) printf("\nAi n eh equacao de 2 grau chefe, me quebrou agora");
else
{
printf("\nAgora o 'b': ");
scanf("%f", &b);
printf("\nSo falta o 'c': ");
scanf("%f", &c);
d = (b * b) - (4 * a * c);
if (d < 0) printf("\nDeixa quieto, raiz quadrada de %.2f eh moh rolo", d);
else
{
	d = sqrt (d);
	if (d == 0) 
	{
	x1 = - b / (2 * a);	
	printf("\nO x1 e o x2 valem %.2f", x1);
	}
	else
	{
x1 = (- b + d) / (2 * a);
x2 = (- b - d) / (2 * a);
printf("\n O x1 vale %.2f e o x2 vale %.2f", x1, x2);
}}}
}*/


//	2.	Quadrado perfeito, que é um numero que pode é um produto de outro numero elevado à 2
/*{
float num, qua;
int nan;
printf("\nDigite um numero para saber se eh um quadrado perfeito: "); scanf("%f", &num);
if (num < 0) num = num * (-1);
qua = sqrt (num);
nan = qua;
if (nan == qua) printf ("\nBoa!! Ele eh um quadrado perfeito pois %.2f elevado ao quadrado eh %.2f! ", qua, num);
else printf("\nSInto muito, %.2f nao eh um quadrado perfeito. ", num);
}*/


//	3.	Caixa eletronico
/*{
int valor, n1, n2, n5, n10, n20, n50, n100, n200;
printf("\nQual eh o valor para o valor patrao? ");
scanf("%i", &valor);
n200 = valor / 200; valor = valor % 200;
n100 = valor / 100; valor = valor % 100;
n50 = valor / 50; valor = valor % 50;
n20 = valor / 20; valor = valor % 20;
n10 = valor / 10; valor = valor % 10;
n5 = valor / 5; valor = valor % 5;
n2 = valor / 2; valor = valor % 2;
n1 = valor / 1; valor = valor % 1;
printf("\nNotas de 200 reais: %i\nNotas de 100: %i\nNotas de 50: %i\nNotas de 20: %i\nNotas de 10: %i\nNotas de 5: %i\nNotas de 2: %i\nNotas de 1: %i ", n200, n100, n50, n20, n10, n5, n2, n1);
}*/


//	4.	Aumento do salario com base no tempo de casa
/*{
printf("\n	Qual eh o seu salario? "); scanf("%f", &sal);
printf("\n	E o seu tempo de casa, em anos? "); scanf("%f", &tempo);
if (tempo > 20) sal = sal * 1.25; //se o cara tem mais de 20 anos de empresa, o aumento eh de 25%
if (tempo > 10 && tempo <= 20) sal = sal * 1.2; // se o cara tem + de 10 e - ou = a 20, aumento de 20%
if (tempo >= 5 && tempo <= 10) sal = sal * 1.1; //entre 5 e 10 anos? 10%
if (tempo < 5) sal = sal * 1.05; //menos de 5 anos? 5% de aumento
printf("\n	Entao seu salario com aumento eh de RS %.2f reais. ", sal);//podemos seguir uma ordem diferente, e usar o else para t>20
}*/


//	5.	Imc
/*{
float h, p, imc;
do{
	printf("\n	Boa? vamos calcular e classificar seu IMC. Primeiro, coloque o peso: "); scanf("%f", &p);
  } while (p <= 0);
do{
	printf("\n	Agora, a altura: "); scanf("%f", &h);
	if (h < 0) printf ("\n	Entï¿½o vc nao existe?\n");
	if (h > 0 && h <= 1.5) printf ("\n	ANAO?\n");
	if (h > 2) printf("\n	POSTE?\n");
  } while (h <= 0);
imc = p / (h * h);
if (imc < 20) printf ("\n	Seu IMC eh de %.2f, ou subnormal. Qualquer vento vc voa.\n", imc);
else if (imc < 25) printf("\n	Seu imc eh de de %.2f, ou normal. Tudo tranquilo por enquanto, continua assim\n", imc);
else if (imc < 30) printf ("\n	Seu IMC eh de %.2f, ou sobrepeso. Um pouco acima do normal, mas nada pra se preocupar (por enquanto)\n", imc);
else if (imc < 35) printf("\n	Seu imc eh de de %.2f, ou obesidade leve. Talvez uns exercicios seriam interessantes\n", imc);
else if (imc < 40) printf ("\n	Seu IMC eh de %.2f, ou obesidade moderada. talvez sua locomocao e saude nao devem estar tao legais.\n", imc);
else printf("\n	Seu imc eh de de %.2f, ou obesidade morbida.\n", imc);
}


//	6.	Calculadora simples
//{
//float n1, n2, resultado;
//int op;
//printf("\n	Digite o primeiro numero: "); scanf("%f", &n1);
//printf("\n	Digite o segundo numero: "); scanf("%f", &n2);
//printf("\n	Soma = 1\n	Subtracao = 2\n	Multiplicacao = 3\n	Divisao = 4\n\n	Operando: "); scanf("%i", &op);
//if (op == 1) { resultado = n1 + n2; printf("\n O resultado eh %f\n", resultado);}
//else if (op == 2) {resultado = n1 - n2; printf("\n O resultado eh %f\n", resultado);}
//else if (op == 3) {resultado = n1 * n2; printf("\n O resultado eh %f\n", resultado);}
//else if (op == 4) 
//{
//if (n2 != 0) {resultado = n1 / n2; printf ("\n	O resultado eh %f\n", resultado);}
//else printf("\n	Operacao inexistente, nao se divide por 0!\n");}
//}


//	7.	Descobrir se tres medidas formam um triangulo
//{
//float a, b, c;
//printf("\n	Fala a medida do lado 1: "); scanf("%f", &a);
//printf("\n	Fala a medida do lado 2: "); scanf("%f", &b);
//printf("\n	Fala a medida do lado 3: "); scanf("%f", &c);
//if(a >= b + c || c >= a + b || b >= a + c) printf ("\n	Assim nao vai, patrao\n");
//else if (a == b && b == c) printf("\n	temos um triangulo equilatero!\n");
//else if (a == b && b != c) printf ("\n	Temos um triangulo isoceles!\n");
//else printf("\n	Temos um triangulo escaleno!\n");
//}


//	8.	Situações de um aluno
//{
//float qa, n1, n2, m, p;
//const float a = 80;
//printf("\n	Fala em quantas aulas vc foi: "); scanf("%f", &qa);
//p = qa / a * 100;
//if (p < 75) printf("\n	Com frequencia de %.2f%% nem tem como ter passado, man, foi mal\n", p);
//else if (p > 100) printf("\n	Vc tah com %.2f%% de presenca. Isso eh possivel?\n", p);
//else {
//printf("\n	Fala a sua primeira nota: "); scanf("%f", &n1);
//printf("\n	Fala a sua segunda nota: "); scanf("%f", &n2);
//m = (n1 + n2) / 2;
//if (m >= 3 && p <= 75) printf("\n	Com media %.2f e presenca de %.2f%%, talvez o exame te ajude a passar.\n", m, p);
//else if (m >= 6 && p >= 75) printf("\n	Se livrando como sempre, neh? Com media %.2f e presenca de %.2f%% vc passou!\n", m, p);
//else printf("\n	Com media %.2f e presenca de %.2f%%, vc vai ficar nessa classe mais um ano. Quem sabe na proxima.\n", m, p);
//}}


//	9.	Verificar se tres angulos podem ser de um triangulo
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

