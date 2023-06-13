#include <stdio.h>
main ()


//situação do aluno
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
//if (tempo > 10 && tempo <= 20) sal = sal * 1.2; // se o cara tem + de 10 até 20, aumento de 20%
//if (tempo >= 5 && tempo <= 10) sal = sal * 1.1; //entre 5 e 10 anos? 10%
//if (tempo < 5) sal = sal * 1.05; //menos de 5 anos? Então tem 5% de aumento
//printf("\n	Entao seu salario com aumento eh de RS %.2f reais. ", sal);//podemos seguir uma ordem diferente, e usar o else para t>20
//}


//{
//float prato, valor, valorf, valorp, sobremesa;
//printf("\n	Escolha um valor para começar: "); scanf("%f", &valor);
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
	if (h < 0) printf ("\n	Então vc nao existe?\n");
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


//novas situações de um novo aluno
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


//quem vc eh nos cavaleiros do zodiaco
/*{
int dia, mes;
do {
printf("\n	Eu vou te falar qual armadura de ouro teria em cdz.\n	Qual a sua data de nascimento?: "); scanf("%i", &dia);
   } while (dia <= 0 || dia > 31);
do {
	printf("\n	E o numero do mes?: "); scanf("%i", &mes);
   } while (mes <= 0 || mes > 12);
if ((dia >= 21 && dia <= 31 && mes == 3) || (dia >= 1 && dia <= 20 && mes == 4 )) printf ("\n	Vc eh do signo de aries, a primeira casa do zodiaco!\n");
else if ((dia >= 21 && dia <= 30 && mes == 4) || (dia >= 1 && dia <= 20 && mes == 5 )) printf ("\n	Vc eh do signo de touro, a segunda casa do zodiaco!\n");
else if ((dia >= 21 && dia <= 31 && mes == 5) || (dia >= 1 && dia <= 20 && mes == 6 )) printf ("\n	Vc eh do signo de gemeos, a terceira casa do zodiaco!\n");
else if ((dia >= 21 && dia <= 31 && mes == 6) || (dia >= 1 && dia <= 22 && mes == 7 )) printf ("\n	Vc eh do signo de cancer, a quarta casa do zodiaco!\n");
else if ((dia >= 23 && dia <= 31 && mes == 7) || (dia >= 1 && dia <= 22 && mes == 8 )) printf ("\n	Vc eh do signo de leao, a quinta casa do zodiaco!\n");
else if ((dia >= 23 && dia <= 31 && mes == 8) || (dia >= 1 && dia <= 22 && mes == 9 )) printf ("\n	Vc eh do signo de virgem, a sexta casa do zodiaco!\n");
else if ((dia >= 23 && dia <= 31 && mes == 9) || (dia >= 1 && dia <= 22 && mes == 10 )) printf ("\n	Vc eh do signo de libra, a setima casa do zodiaco!\n");
else if ((dia >= 23 && dia <= 31 && mes == 10) || (dia >= 1 && dia <= 21 && mes == 11)) printf ("\n	Vc eh do signo de escorpiao, a oitava casa do zodiaco!\n");
else if ((dia >= 22 && dia <= 31 && mes == 11) || (dia >= 1 && dia <= 21 && mes == 12)) printf ("\n	Vc eh do signo de sagitario, a nona casa do zodiaco!\n");
else if ((dia >= 22 && dia <= 31 && mes == 12) || (dia >= 1 && dia <= 20 && mes == 1)) printf ("\n	Vc eh do signo de capricornio, a decima casa do zodiaco!\n");
else if ((dia >= 21 && dia <= 31 && mes == 1) || (dia >= 1 && dia <= 19 && mes == 2 )) printf ("\n	Vc eh do signo de aquario, a decima primeira casa do zodiaco!\n");
else if ((dia >= 19 && dia <= 31 && mes == 2) || (dia >= 1 && dia <= 20 && mes == 3 )) printf ("\n	Vc eh do signo de peixes, a decima segunda casa do zodiaco!\n");
}*/

