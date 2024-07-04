#include <stdio.h>
#include <malloc.h>

typedef struct temp {
    int chave;
    struct temp *prox;
} item;

item *inicio, *aux, *novo;

void inserir(int novaChave, int posicao) {

    aux = inicio;

    item *novo = (item *) malloc (sizeof(item));
    novo->chave = novaChave;
    novo->prox = NULL;

    if(inicio == NULL) {
        novo->prox = NULL;
        inicio = novo;
    }
    else if(posicao == 1) {
        novo->prox = aux;
        inicio = novo;
    }
    else {
        for(int i = 1; i < posicao-1; i++) {
            
            if(aux->prox == NULL) {
                printf("Posicao invalida!\n\n"); //a posição não existe, logo não adiciona
                free(novo);
                return;
            }

            aux = aux->prox;
        }
        novo->prox = aux->prox;
        aux->prox = novo;        
    }
}

void mostrar() {
    aux = inicio;
    printf("\n\n");
    while(aux != NULL) {
        printf("%d -> ", aux->chave);
        aux = aux->prox;
    }
    printf("NULL\n\n");
}

void excluir(int valor) {
    aux = inicio;

    if(aux->chave == valor) {
        if(aux->prox == NULL) inicio = NULL;
        else inicio = aux->prox;
        free(aux);
        return;
    }
    
    while(1) {

        if(valor == aux->prox->chave) {
            novo = aux->prox->prox;
            free(aux->prox);
            aux->prox = novo;
            return;
        }

        aux = aux->prox;

        if(aux->prox == NULL) {
            printf("Valor %d nao encontrado!\n\n", valor);
            return;
        }
    }
}

int main() {

    int opcao, n, posicao;
    inicio = NULL;  

    while(1) {
        printf("\n\n\tListas\n\n1. Adicionar\n2. Remover\n3. Mostrar\n4. Sair\n\n");
        do {
            printf("\tSua escolha: ");
            scanf("%d", &opcao);
        } while (opcao < 1 || opcao > 4);

        if (opcao == 1) {

            printf("\nQual serah o valor?: ");
            scanf("%d", &n);
            printf("\nQual serah a posicao?: ");
            scanf("%d", &posicao);
            inserir(n, posicao);
            mostrar();

        } else if (opcao == 2) {

            printf("\nQual serah o valor?: ");
            scanf("%d", &n);
            excluir(n);
           mostrar();

        } else if (opcao == 3) mostrar();
        
        else break;
    }
}