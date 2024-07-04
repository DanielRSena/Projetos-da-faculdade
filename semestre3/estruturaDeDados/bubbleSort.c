#include <stdio.h>
#include <malloc.h>
#include "util.h"

int main(){

    int n, i;
    printf("\n\tTamanho do vetor: ");
    scanf("%d",&n);

    int *v = (int *) malloc (n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("\n\tendereco[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\n\nVetor desordenado: ");
    printaVetor(v, n);

    bubbleSort(v, n);
    
    printf("\n\nVetor ordenado: ");
    printaVetor(v, n);
    printf("\n\n");
    free(v);
}