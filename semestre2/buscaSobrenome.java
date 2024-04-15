package semestre2;
import java.util.Scanner;

public class buscaSobrenome {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        int ponteiro = 0, inicioSobrenome = 0;
        System.out.print("\n\nNome: ");
        String nome = entrada.nextLine();
        char busca = ' ';
        for(int cont = 0; cont < nome.length(); cont++) {
            ponteiro = nome.indexOf(busca, cont);
            if (ponteiro == cont) 
                inicioSobrenome = ponteiro;
        } 
        System.out.println(busca);
        String sobrenome = nome.substring(inicioSobrenome+1);
        System.out.println("Sobrenome: " + sobrenome + "\n\n");

        entrada.close();
    }
}