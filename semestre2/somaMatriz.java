package semestre2;

import java.util.Scanner;

public class somaMatriz {

    static void somasMatriz(double mat[][], int linhas, int colunas) {
        int somaDiagonal = 0, vet[] = new int[linhas];
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                vet[i] += mat[i][j];
                if (i == j)
                    somaDiagonal += mat[i][j];
            }
        }
        System.out.println("\nSoma da diagonal principal: " + somaDiagonal);
        for (int i = 0; i < vet.length; i++) {
            System.out.println("Soma da linha " + i + ": " + vet[i]);
        }
    }

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int linha, coluna;

        do {
            System.out.print("\nQuantidade de linhas da matriz: ");
            linha = entrada.nextInt();
        } while (linha < 0);

        do {
            System.out.print("\nQuantidade de colunas da matriz: ");
            coluna = entrada.nextInt();
        } while (coluna < 0);

        double matriz[][] = new double[linha][coluna];

        for (int i = 0; i < linha; i++) {
            for (int j = 0; j < coluna; j++) {
                System.out.print("\nDigite o valor do espaço[" + i + "][" + j + "]: ");
                matriz[i][j] = entrada.nextInt();
            }
        }

        for(int i = 0; i < linha; i++){
            System.out.println("\n");
            for(int j = 0; j < coluna; j++)
                System.out.print(matriz[i][j] + "\t");
        }

        System.out.println();
        somasMatriz(matriz, linha, coluna);
        System.out.println();
        entrada.close();
    }
}