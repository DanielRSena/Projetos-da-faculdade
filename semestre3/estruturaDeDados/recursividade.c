#include <stdio.h>

int fibo(int n) {
    if (n == 1 || n == 2) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}

int fatorial(int n) {
    if(n == 1 || n == 0) return 1;
    else return n * fatorial(n - 1);
}

int main() {
    int n, opcao;

    while(1) {
        printf("\n\n\tRecursividade\n\n1. Fibonacci\n2. Fatorial\n3. Sair\n\n");
        do {
            printf("\tSua escolha: ");
            scanf("%d", &opcao);
        } while (opcao < 1 || opcao > 3);

        if (opcao == 1) {
            do {
                printf("\nQual serah a posicao de Fibonacci?: ");
                scanf("%d", &n);
            } while (n < 1);
            printf("\nA posicao %d de Fibonacci eh %d", n, fibo(n));

        } else if (opcao == 2) {
            do {    
                printf("\nQual fatorial serah calculado?: ");
                scanf("%d", &n);   
            } while (n < 0);
            printf("\n%d! = %d", n, fatorial(n));
        
        } else break;
    }
}