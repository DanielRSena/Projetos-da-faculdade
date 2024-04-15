#include <stdio.h>
#include<malloc.h>
#include "util.h"

int main() {
	
	int v1, v2, v, i = 0;
     char cont;
	
	printf("\n\nQuantos vertices? "); scanf("%d", &v);
    
    int *vet = (int *) malloc (v * sizeof(int));
    for(int i = 0; i < v; i++)
        vet[i] = 0;
    
	do {
		do {
			printf("\n\tAresta %d\n", i);
			printf("\nNumero vertice: "); scanf("%d", &v1);
			printf("\nSegundo vertice: "); scanf("%d", &v2);
			i++;
		} while(v1 < 0 || v2 < 0 ||  v1 >= v || v2 >= v); 
		
        calculaGrau(vet, v1, v2);
		
		printf("\nContinua?: "); fflush(stdin); 
		cont  = getchar();
	} while(cont == 's'  || cont == 'S');
	
	printf("\n\tvertice\t\tgrau");
	
	for(i = 0; i < v; i++)
        printf("\n\t   %d\t\t  %d", i, vet[i]);

	cont  = getchar();
    verificaTipo(vet, v);
}