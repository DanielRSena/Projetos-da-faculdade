#include <stdio.h>
#include <malloc.h>

int mostrarVetor(int vet[], int n){

    printf("\nVetor: ");

    for (int i = 0; i < n; i++) 
       printf("%d ", vet[i]);

    
    printf("\n");
    return 0;
}

int mostraMatriz(int **m, int v){
	for(int i = 0; i < v; i++){
		printf("\n");
		for(int j = 0; j <= i; j++)
			printf("%d ", m[i][j]);
	}
    return 0;
}

int zeraMatriz(int **m, int v){
	for(int i = 0; i < v; i++){
		for(int j = 0; j <= i; j++)
			m[i][j] = 0;
	}
    return 0;
}

void calculaGrau(int *vet, int v1, int v2) {
    vet[v1] += 1;
    vet[v2] += 1;
}

void verificaTipo(int *v, int n) {

    int cont = 0;

    for (int i = 0; i < n; i++) {
        if(v[i] % 2 != 0) cont++;
        if(cont > 2) break;
    }
    
    if(cont == 0) printf("\n\nO grafo eh euleriano\n\n");
    else if (cont == 2) printf("\n\nO grafo eh semi-euleriano\n\n");
    else printf("\n\nO grafo eh comum\n\n");
}

void freeMatriz(int **mat, int n){
    for (int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
}

void bubbleSort(int v[], int n) {
    int i, aux;

    for(i = n - 1; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}