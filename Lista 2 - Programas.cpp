#include <stdio.h>
#include <math.h>
main ()

//Exercicios aula 3 - prioridade aritmetica, if else


//aumento no salario de 5k
//{
//float sal;
//printf ("\nDigite seu salario para eu acrescentar o aumento: ");
//scanf("%f", &sal);
//if (sal > 5000) sal = sal * 1.12;
//else sal = sal * 1.15;
//printf ("\nSeu salario final eh de %f", sal);
//}


//produto com desconto na quinzena
//{
//float p;
//int dia;
//printf("\nDigite o valor do produto: ");
//scanf("%f", &p);
//printf("\nDigite agora o dia da compra: ");
//scanf("%i", &dia);
//if (dia > 15) p = p * 0.94;
//else p = p * 0.92;
//printf("\nO valor final do produto eh de R$ %.2f", p);
//}

//x1 e x2 de baskara
/*{	
float a, b, c, d, x1, x2;
printf("\nAgora eu vou calcular o x1 e x2 da equaçao de 2 grau para vc. Fala o 'a' primeiro: ");
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
else printf ("\nO número %.2f eh negativo ", num); 
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


// saber se vc eh maior de idade ou não
/*{
int idade;
printf("Mano, esse site tem que saber sua idade. Digita ai: ");
scanf ("%i", &idade);
if (idade > 18) printf("\nVc jah pode ser preso, parabens. Quer o de sempre, chefia? ");
else printf ("\n%i? Sai daqui, menor, sem Mia para vc", idade);
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


//investimento da cidade
//{
//float v, h;
//printf("\nVamos calcular o investimento por pessoa? Digite a quantidade de habitantes: ");
//scanf("%f", &h);
//printf("\nAgora, o valor que serah investido: ");
//scanf("%f", &v);
//if (h > 10000) v = v * 1.2;
//else v = v * 1.15;
//h = v / h;
//printf ("\n	Valor por habitante: %.2f \n	Valor ideal para investimento: %.2f", h, v);
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
