#include <stdio.h>;
int main()

{
s, dias, idade;
printf (" Digite o ano atual: ");
scanf ("%i", &aa);
printf (" Digite o ano de nascimento:");
scanf ("%i", &an);
idade = aa - an;
meses = idade * 12;
dias = meses * 30;
printf (" Logo, vc tem %i anos = %i meses = %i dias", idade, meses, dias);
}


x1 e x2 de baskara
/*{	
float a, b, c, d, x1, x2;
printf("\nAgora eu vou calcular o x1 e x2 da equa�ao de 2 grau para vc. Fala o 'a' primeiro: ");
scanf("%f", &a);
if (a == 0 ) printf("\nAi n eh equacao de 2 grau chefe, me quebrou agora");
else
{
printf("\nAgora o 'b': ");
scanf("%f", &b);
printf("\nSo falta o 'c'': ");
scanf("%f", &c);
d = (b * b - 4 * a * c);
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
x1 = (- b + d) / (2 * a) ;
x2 = (- b - d) / (2 * a) ;
printf("\n O x1 vale %.2f e o x2 vale %.2f", x1, x2);
}}}
}*/


//programa que reprova ou anota pelas faltas 
/*{
float total, aulas, faltas; 
printf("\nDigite o numero de aulas dadas: "); 
scanf("%f", &aulas); 
printf ("\nE em quantas aulas vc foi? "); 
scanf("%f", &faltas); 
total = faltas / aulas; 
if (total < 0.25) printf ("\nPelas faltas, vc foi reprovado"); 
else printf ("\nSe for so pelas faltas, vc passou"); 
}*/


//saber se o numero eh impar ou par
/*{ 
int num, d; 
printf ("\nDigite um numero e eu vou falar se eh impar ou par: "); 
scanf ("%i", &num); 
d = num % 2 ; 
if ( d == 0) printf ("\nO numero %i eh par", num); 
else 
printf("\nO numero %i eh impar", num); 
}*/
 

//como saber se eh positivo ou negativo
/*{ 
float num; 
printf("\nDigite um numero e vou falar se eh positivo ou negativo "); 
scanf("%f", &num); 
if (num > 0 ) printf("\nO numero %.2f eh positivo ", num); 
else 
{ 
if (num == 0 ) printf ("\nEh uma boa pergunta. O 0 eh o que?"); 
else printf ("\nO n�mero %.2f eh negativo ", num); 
} 
}*/


//ordem crescente de 3 numeros
/*{
int n1, n2, n3;
printf("\nVou falar a ordem crescente de tres numeros. Fala o primeiro ai: ");
scanf("%i", &n1);
printf("\nFala o segundo ai: ");
scanf("%i", &n2);
printf("\nFala o terceiro ai: ");
scanf("%i", &n3);
if (n3 > n2 && n2 > n1) printf("\n	%i, %i, %i.", n1, n2, n3);
else {
if (n2 > n3 && n3 > n1) printf("\n	%i, %i, %i.", n1, n3, n2);
/else {
if (n3 > n1 && n1 > n2) printf("\n	%i, %i, %i.", n2, n1, n3);
else {
if (n1 > n3 && n3 > n2) printf("\n	%i, %i, %i.", n2, n3, n1);
else {
if (n2 > n1 && n1 > n3) printf("\n	%i, %i, %i.", n3, n1, n2);
else printf("\n	%i, %i, %i.", n3, n2, n1);
}}}}
}*/

//quadrado perfeito
//{
//float num, qua;
//int nan;
//printf("\nDigite um numero para saber se eh um quadrado perfeito: "); scanf("%f", &num);
//if (num < 0) num = num * (-1);
//qua = sqrt (num);
//nan = qua;
//if (nan == qua) printf ("\nBoa!! Ele eh um quadrado perfeito pois %.2f elevado ao quadrado eh %.2f! ", qua, num);
//else printf("\nNao mano, %.2f nao eh um quadrado perfeito. ", num);
//}


//numero invertido
//{
//int num, inv;
//printf("\nFala o numero pra inverter, patrao: ");
//scanf("%i", &num);
//inv = (num % 10) * 10 + (num / 10);
//printf("\n o numero %i invertido eh %i.", num, inv);
//}


//caixa eletronico
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


//situa��o do aluno
//{
//float n1, n2, media;
//printf("\n	Salve, fala a n1: "); scanf("%f", &n1);
//printf("\n	Agora fala a n2: "); scanf("%f", &n2);
//media = (n1 + n2) / 2;
//if (n1 && n2 >= 6 || media >= 6) printf("\n	Ufa, com a media %.2f, vc se salvou dessa vez", media);
//else if(media < 3) printf("\n	Escapou nao mano, com media %.2f, ano que vem vc tah na mesma sala", media);
//else printf("\n	Com media %.2f, soh o exame te salva", media);
//}


//aumento do salario com base no tempo de casa
//{
//printf("\n	Qual eh o seu salario? "); scanf("%f", &sal);
//printf("\n	E o seu tempo de casa, em anos? "); scanf("%f", &tempo);
//if (tempo > 20) sal = sal * 1.25; //se o cara tem mais de 20 anos de empresa, o aumento eh de 25%
//if (tempo > 10 && tempo <= 20) sal = sal * 1.2; // se o cara tem + de 10 at� 20, aumento de 20%
//if (tempo >= 5 && tempo <= 10) sal = sal * 1.1; //entre 5 e 10 anos? 10%
//if (tempo < 5) sal = sal * 1.05; //menos de 5 anos? Ent�o tem 5% de aumento
//printf("\n	Entao seu salario com aumento eh de RS %.2f reais. ", sal);//podemos seguir uma ordem diferente, e usar o else para t>20
//}


//{
//float prato, valor, valorf, valorp, sobremesa;
//printf("\n	Escolha um valor para come�ar: "); scanf("%f", &valor);
//printf("\n		Cardapio\n1. Peixe\n2. Carne bovina\n3. Frango\n4. Vegetariano");
//printf("\n\n	Digite 1, 2, 3 ou 4 pro prato que deseja: "); scanf ("%f", &prato);
//if (valor == 1) valorp = valor * 1.1;
//else if (valor == 2) valorp = valor * 1.2;
//else if (valor == 3) valorp = valor * 1.15;
//else valorp = valor * 1.05;
//printf("\nE sobremesa, voce quer? Digite 1 para sim ou 0 para nao: "); scanf("%f", &sobremesa);
//if (sobremesa == 1) valor = valor * 0.05;
//valorf = valor + valorp;
//printf("\n	O valor do prato: %.2f\n	Valor da sobremesa: %.2f\n	Valor total: %.2f", valorp, valor, valorf); 
//}


//teste de poligono
//{
//int l;
//printf("\n	Fala meu bom!Quantos lados tem a forma? "); scanf("%i", &l);
//if (l <0) printf("\n	O que isso significa?\n");
//else if (l == 0) printf("\n	Um circulo, talvez?\n");
//else if (l > 0 && l<= 2) printf("\n	Nao eh um poligono\n");
//else if (l == 3) printf("\n	Parabens, isso eh um triangulo!\n");
//else if (l == 4) printf("\n 	Ado, aado sua forma eh um quadrado\n");
//else if (l == 5) printf ("\n	Vamos lah no PENTAGONO\n");
//else if (l == 6) printf ("\n	Temos um hexagono, o que nem os BR tem\n");
//else printf("\n	Calma lah, isso eh mais do que eu consigo\n");
//}


//valor dos livros
//{
//float valor, cod;
//printf("\n	Coloque o cod. do livro: "); scanf("%f", &cod);
//if (cod < 1) printf("\n	Erro! reinicie o programa e insira um codigo valido");
//else if (cod >= 1 && cod <= 30) 
//{ valor = 80  * 0.94; printf("\n	Genero: Suspense\n	Valor: %.2f\n", valor); }
//else if (cod >= 31 && cod <= 45) 
//{ valor = 80  * 0.92; printf("\n	Genero: Terror\n	Valor: %.2f\n", valor); }
//else if (cod >= 46 && cod <= 60) 
//{ valor = 80  * 0.88; printf("\n	Genero: Biografia\n	Valor: %.2f\n", valor); }
//else
//{ valor = 80  * 0.85; printf("\n	Genero: Didatico\n	Valor: %.2f\n", valor); }
//}


//Imc mais completo
{
float h, p, imc;
do{
	printf("\n	Boa? vamos calcular e classificar seu IMC. Primeiro, coloque o peso: "); scanf("%f", &p);
  } while (p <= 0);
do{
	printf("\n	Agora, a altura: "); scanf("%f", &h);
	if (h < 0) printf ("\n	Ent�o vc nao existe?\n");
	if (h > 0 && h <= 1.5) printf ("\n	ANAO?\n");
	if (h > 2) printf("\n	POSTE?\n");
  } while (h <= 0);
imc = p / (h * h);
if (imc < 20) printf ("\n	Seu IMC eh de %.2f, ou subnormal. Qualquer vento vc voa.\n", imc);
else if (imc < 25) printf("\n	Seu imc eh de de %.2f, ou normal. Tudo tranquilo por enquanto, continua assim\n", imc);
else if (imc < 30) printf ("\n	Seu IMC eh de %.2f, ou sobrepeso. Um pouco acima do normal, mas nada pra se preocupar (por enquanto)\n", imc);
else if (imc < 35) printf("\n	Seu imc eh de de %.2f, ou obesidade leve. Talvez uns exercicios seriam interessantes\n", imc);
else if (imc < 40) printf ("\n	Seu IMC eh de %.2f, ou obesidade moderada. talvez sua locomocao e saude nao devem estar tao legais.\n", imc);
else printf("\n	Seu imc eh de de %.2f, ou obesidade morbida. Jah pensou em gravar para os quilos mortais?\n", imc);
}


//dois numeros, maiores, menores ou iguais
//{
//int n1, n2;
//printf("\n	Digite dois numeros, e vou falar se sao iguais, menores ou maiores. Coloque o primeiro: "); scanf("%i", &n1);
//printf("\n	Digite o segundo numero: "); scanf("%i", &n2);
//if (n1 == n2) printf("\n	Os dois sao iguais. Ambos sao %i\n", n1);
//else if (n1 > n2) printf("\n	O numero %i eh maior que o %i\n", n1, n2);
//else printf("\n	O numero %i eh maior que %i\n", n2, n1);
//}


//calculadora simples
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


//ano bissexto com condicionais
//{
//int ano;
//printf("\n	Digite o ano e vou falar se ele eh bissexto: "); scanf("%i", &ano);
//if ((ano % 4 == 0 && ano % 100 != 1) || (ano % 4 == 0 && ano % 100 != 0 && ano % 400 == 0) printf("\n	Boa mano, %i eh bissexto", ano);
//else printf("\n	O ano %i nao eh bissexto", ano);
//}


//descobrir se tres medidas formam um triangulo
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


//novas situa��es de um novo aluno
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


//verificar se tres angulos podem ser de um triangulo
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


//	Qtd numeros divisiveis por x entre a e b (b > a)
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
	
	
//anos bissextos em intervalos de outros dois
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
	
	
//registro e media de precos de n produtos
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


//soma de numeros impares de 1 ate x
/*{
	int x, a = 1, t;
	do
	{
		printf("\n	Coloca um numero para eu te falar quais numeros impares estao entre 1 e o numero que voce escolher: "); scanf("%d", &x);
		if (x <= 0) printf("\n	O seu numero precisa ser maior que 0, entao esse aqui nao dah.");
	} while (x <= 0);
	printf("\n	");
	while (a <= x)
	{
		if (a % 2 != 0) printf ("%i ", a);
		t = t + a;
		a = a + 1;
	}
	printf("\n\n");
}*/


//tabuada at� 10
 /*{
  int tb, nb, cont = 0;
  do {
  	printf("\n	Coloca o numero base da tabuada: "); scanf("%i", &nb);
  	printf("\n	Coloca ate onde vc quer que a tabuada vah: "); scanf("%i", &tb);
  	if (nb <= 0 || tb <= 0) printf("\n	Ainda nao consigo esse tipo de conta, foi mal");
	 } while (nb <= 0 || tb <= 0);
	 printf("\n");
	 while (cont <= tb) {
	 	printf("	%i	x	%i	=	%i\n", nb, cont, nb*cont);
	 	cont = cont + 1;
	 }
  }*/
  
  
  //tabuada at� 10 ao contrario
/*{
  int tb, nb;
  do {
  	printf("\n	Coloca o numero base da tabuada: "); scanf("%i", &nb);
  	printf("\n	Coloca ate onde vc quer que a tabuada vah: "); scanf("%i", &tb);
  	if (nb <= 0 || tb <= 0) printf("\n	Ainda nao consigo esse tipo de conta, foi mal");
	 } while (nb <= 0 || tb <= 0);
	 printf("\n");
	 while (0 <= tb) {
	 	printf("	%i	x	%i	=	%i\n", nb, tb, nb*tb);
	 	tb = tb - 1;
	 }
}*/


//lugares de onibus, viagens
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


//potencia sem pow
/*{
  	int a, b, x = 2, t;
  	do {
  		printf("\n	Qual eh o numero que voce quer multiplicar? "); scanf("%i", &a);
  		if (a <= 0) printf ("\n	Erro! O numero tem que ser positivo.\n");
  	   } while (a <= 0);
  	do {
  		printf("\n	Qual eh o numero que voce quer elevar? "); scanf("%i", &b);
  		if (b <= 0) printf ("\n	Erro! O numero tem que ser positivo.\n");
  		} while (b <= 0);
  		t = a;
  		while (x <= b) {
  			t = t * a;
  			x = x + 1;
		  }
		printf ("\n	%d\n\n", t);
}*/

// essquecemos de alguma coisa coisa no exercicio do pau
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
	

//o numero eh primo //
/*{
  	int n, quo = 2, ds;
  	do {
  		printf("\n	Coloque um numero para eu informar se eh primo ou nao: "); scanf("%i", &n);
  		if (n <= 0) printf("\n	Erro! O numero tem que ser positivo.\n\n");
	   } while (n <= 0);
	  if (n % 2 == 0) printf ("\n	O numero %d eh par e diferente de dois, portanto nao eh primo.\n\n", n);
	  else
	  	  {
	  		ds = n - 2;
		  	while (quo != 1 || n % ds == 1) 
		  		{
		  		n = n / ds;
		 		ds = ds - 2;
		 		if (n % quo == 1) printf("\n	O numero nao eh primo.\n\n");
		 		}
		 printf("\n	O numero eh primo.\n\n");
	  	  }
}*/

//novos numeros primos
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
	


//MDC euclides
/*{
int rst, a, b;
do {
	printf("\n	Coloque o primeiro numero: "); scanf("%d", &a);
	printf("\n	Coloque o segundo numero: "); scanf("%d", &b);
	if 	(a >= b) printf("\n	Erro! o segundo numero tem que ser maior que o primeiro!\n\n");
   } while (a >= b);
	while(a != 0)
	{
		if (a <= b) 
		{
			rst = b % a;
			b = a;
			a = rst;
		}	
	} 
	printf("\n	O MDC eh %d\n\n", b);
}*/

//outra forma 
{
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


/	1. distancia entre n cidades, distancia percorrida tambem incluida
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

/*vetor de 7 posi��es para os dias da semana. Assuma que a posi��o 0 tem o dado do domingo, etc, at� o s�bado 6. Cada posi��o guarda as qtds vendidas de um produto, que
ser� dado pelo usu�rio. Calcule o valor das vendas de cada dia, armazenando em um outro vetor. Mostre v1 e v2 e escreva o nome do dia da semana com maior valor de venda.*/
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


//	3. vetor criado pelo usu�rio 

/*	v1 de tamanho t, t >= 2 e par. Para cada duas posi��es, crie uma posi��o em um v2 que guardar� os resultados das 
somas do v1, dois n�meros de cada vez. No final, exiba os 2 vetores*/

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


//	4. Pede salarios, tal que n > 0 e exibe o maior e menor deles, al�m da m�dia
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


//	5. cadastra n vetores, sendo que n > 5 e exibe em fun��o de escada.
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
	


