#include <stdio.h>

int main(){
    
    int tamanho, inicio = 0, fim, x;
	
	printf("\nTamanho do vetor: "); scanf("%d", &tamanho);
	fim = tamanho -1;
	int med = (inicio + fim) / 2;
	
	int vet[tamanho];
	
	for(int i = 0; i < tamanho;i++) {
		printf("\nValor da posicao [%d]: ", i); 
		scanf("%d", &vet[i]);
	}
		
	printf("\nQuer qual?: "); 
	scanf("%d", &x);
	
	while(inicio <= fim){
		
		if(vet[med] == x) break;
		else if(vet[med]>x) fim = med -1;
		else inicio = med + 1;
	}
	
	printf("\n %d encontrado na posicao %d", x, med);
}