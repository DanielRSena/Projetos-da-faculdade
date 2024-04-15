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
	inserePilha(5);
	inserePilha(20);
	inserePilha(4);
	inserePilha(51);
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
	while(aux!=NULL) {
		printf("\n\n\t%d", aux->chave);
		printf("\n\n\t|");
		aux = aux->prox;	
	}
	printf("\n\tNULL");
}