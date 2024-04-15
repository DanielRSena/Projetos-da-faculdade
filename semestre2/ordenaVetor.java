package semestre2;
import java.util.Scanner;

public class ordenaVetor {

    static void ordena(int vetor[]) {
        int tamanho = vetor.length;
        for (int i = 0; i < tamanho - 1; i++) {
            int valorMinimo = i;
            for (int j = i + 1; j < tamanho; j++)
                if (vetor[j] < vetor[valorMinimo]) valorMinimo = j;
            int aux = vetor[valorMinimo];
            vetor[valorMinimo] = vetor[i];
            vetor[i] = aux;
        }
        System.out.println();
        for (int i = 0; i < vetor.length; i++) 
            System.out.print(vetor[i] + " ");
        System.out.println();
    }

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int tamanho;

        do {
            System.out.print("\n\nDigite o tamanho do vetor: ");
            tamanho = entrada.nextInt();
        } while (tamanho < 0);

        int vet[] = new int[tamanho];

        for (int i = 0; i < tamanho; i++) {
            System.out.print("Digite o valor do endereço [" + i + "]: ");
            vet[i] = entrada.nextInt();
        }

        ordena(vet);  
        entrada.close();
    }
}