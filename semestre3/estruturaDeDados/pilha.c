#include <stdio.h>
#include <malloc.h>

typedef struct nDados {
	int chave;
	struct nDados *prox;	
} membro;

membro *topo, *novo, *aux;

void inserePilha(int num);
void mostraPilha();

int main(){
    topo = NULL;
	inserePilha(13);
	inserePilha(64);
	inserePilha(87);
	inserePilha(144);
	mostraPilha();
}

void inserePilha(int num){
	novo = (membro*) malloc (sizeof(membro));
	novo -> chave = num;
	if (topo == NULL) novo->prox = NULL;
	else novo->prox = topo;
	topo = novo;
}

void mostraPilha(){
	aux = topo;
	printf("\n");
	while(aux!=NULL) {
		printf("  %d  ->", aux->chave);
		aux = aux->prox;	
	}
	printf("  NULL\n\n");
}