#include <stdio.h>
#include <math.h>
main ()

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


//tabuada até 10
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
  
  
  //tabuada até 10 ao contrario
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
