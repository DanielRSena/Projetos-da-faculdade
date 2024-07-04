#include <stdio.h>
#include <malloc.h>
#include "util.h"

int main(){
	
	int v1, v2, v, i = 0;
	char cont;
	
	printf("\n\nQuantos vertices? "); scanf("%d", &v);
	
	int **mat = (int **) malloc (v * sizeof(int));
	
	for(i = 0; i < v; i++)
		mat[i] = (int *) malloc ((i + 1) * sizeof(int));
	zeraMatriz(mat, v);

	i = 0;
	
	do {
		do {
			printf("\n Aresta %d", i);
			printf("\n\tNumero vertice: "); scanf("%d", &v1);
			printf("\n\tSegundo vertice: "); scanf("%d", &v2);
			if(v1 < 0 || v1 > v || v2 < 0 || v2 > v) {
				printf("\nErro! Preencha os vertices corretamente\n");
				continue;
			}
			else i++;
		} while(v1 < 1 || v2 < 1 ||  v1 >= v || v2 >= v); 
		
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