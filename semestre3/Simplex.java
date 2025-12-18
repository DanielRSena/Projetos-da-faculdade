import java.util.Scanner;
public class Simplex {

    public int entrar() {

        return 1;
    }

    public int sair() {

        return 1;
    }

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in, "latin1");
        int nFolgas = 0, nBase = 0, iAux = 0;

        System.out.print("\n\n\t\t--- Simplex ---\n\n");

        System.out.print("\tQuantidade de variáveis: ");
        nFolgas = entrada.nextInt();

        nBase = nFolgas * 2 + 1;

        double[] variaveis = new double[(nFolgas + 1) * nBase];

        for (int i = 0; i < nFolgas; i++) {
            System.out.println("\n\tFolga " + (i + 1) + "\t");

            for(int j = 1; j < nBase; j++) {
                System.out.print("x" + (i + j + iAux + 1) + ": ");
                variaveis[i + j + iAux] = entrada.nextDouble();
            }
            iAux += nFolgas * 2;

            System.out.println();
        }

        for(int i = iAux + nFolgas; i < variaveis.length; i++) {
            System.out.print("b" + i + ": ");
            variaveis[i] = entrada.nextDouble() * (-1);
        }

        System.out.println("\n\nValores\n");

        for(double num: variaveis) {
            System.out.print(num + " ");
        }

        while (true) {
            for(int i = nFolgas - nBase; i < nFolgas; i++) {
                
            }
            break;
        }


        entrada.close();
    }
}