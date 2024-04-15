#include <stdio.h>
#include <malloc.h>
#include "util.h"

int main(){
	
	int v1, v2, v, i;
	
	printf("\n\nQuantos vertices? "); scanf("%d", &v);
	
	int **mat = (int **) malloc (v * sizeof(int));
	
	for(i = 0; i < v; i++)
		mat[i] = (int *) malloc ((i + 1) * sizeof(int));
	zeraMatriz(mat, v); char cont; i = 0;
	
	do {
		do {
			printf("\n Aresta %d", i);
			printf("\n\tNumero vertice: "); scanf("%d", &v1);
			printf("\n\tSegundo vertice: "); scanf("%d", &v2);
			i++;
		} while(v1 < 0 || v2 < 0 ||  v1 >= v || v2 >= v); 
		
		if(v1 >= v2) mat[v1][v2]++;
		else mat[v2][v1]++;
		
		printf("\nContinua?: "); fflush(stdin); 
		cont  = getchar();
	} while(cont == 's'  || cont == 'S');
	
	printf("\n");
	
	mostraMatriz(mat, v);
	cont  = getchar();

	freeMatriz(mat, v);
}