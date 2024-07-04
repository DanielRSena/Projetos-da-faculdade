#include <stdio.h>
#include <malloc.h>

typedef struct pont {
    int chave;
    struct pont *esq;
    struct pont *dir;
} galho;

galho *raiz, *aux, *novo;

void inserir(int novaChave) {

    novo = (galho*) malloc (sizeof(galho)); 
    if(novo == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        return;
    }
    novo->chave = novaChave;
    novo->dir = NULL;
    novo->esq = NULL;

    if (raiz == NULL) {
        raiz = novo;
        return;
    }     
    else {
        aux = raiz;
        while (aux != NULL) {

            if(novaChave > aux->chave) {
                if(aux->dir == NULL) {
                    aux->dir = novo;
                    break;
                } 
                else aux = aux->dir;
            } else {
                if(aux->esq == NULL) {
                    aux->esq = novo;
                    break;
                } 
                else aux = aux->esq; 
            }
        }
    }
}

void preOrdem(galho *aux) {
    printf("%d  ", aux->chave);
    if(aux->esq != NULL) preOrdem(aux->esq);
    if(aux->dir != NULL) preOrdem(aux->dir);
}

void emOrdem(galho *aux) {
    if(aux->esq != NULL) emOrdem(aux->esq);
    printf("%d  ", aux->chave);
    if(aux->dir != NULL) emOrdem(aux->dir);
}

void posOrdem(galho *aux) {
    if(aux->esq != NULL) posOrdem(aux->esq);
    if(aux->dir != NULL) posOrdem(aux->dir);
    printf("%d  ", aux->chave);
}

int main() {
    raiz = NULL;  

    inserir(5);
    inserir(3);
    inserir(4);
    inserir(1);
    inserir(2);

    printf("\nPre ordem: "); preOrdem(raiz);
    printf("\n\nEm ordem: "); emOrdem(raiz);
    printf("\n\nPos ordem: "); posOrdem(raiz);
}