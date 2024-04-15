#include <stdio.h>
#include <malloc.h>
#include "util.h"

int main(){

    int n, i, aux = 0;
    printf("\n\tTamanho do vetor: ");
    scanf("%d",&n);

    int *v = (int *) malloc (n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("\n\tendereco[%d]: ", (i+1));
        scanf("%d", &v[i]);
    }

    printaVetor(v, n);

    for(i = n - 1; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            if(v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    
    printf("\n");
    printaVetor(v, n);
    free(v);
}