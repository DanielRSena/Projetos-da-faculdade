#include <stdio.h>
#include <stdbool.h> //biblioteca para usar bool
#include "util.h"

int main(){
    
    int tamanho, inicio = 0, fim, x, aux;
	bool achado = false;
	
	do {
		printf("\nTamanho do vetor: "); 
		scanf("%d", &tamanho);
	} while (tamanho <= 0);

	fim = tamanho - 1;
	int med = (inicio + fim) / 2;
	
	int vet[tamanho];
	
	for(int i = 0; i < tamanho;i++) {
		printf("\nValor da posicao [%d]: ", i); 
		scanf("%d", &vet[i]);
	}

	bubbleSort(vet, tamanho);
		
	printf("\nQuer qual?: ");
	scanf("%d", &x);
	
	while(inicio <= fim){
		if(vet[med] == x) {
			achado = true;
			break;
		}
		else if(vet[med] > x) fim = med -1;
		else inicio = med + 1;

		if(!inicio <= fim) break;
	}

	mostrarVetor(vet, tamanho);
	
	if(achado) printf("\n%d encontrado na posicao %d\n\n", x, med);
	else printf("\n%d nao encontrado\n\n", x);
}