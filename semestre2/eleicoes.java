package semestre2;

import java.util.Scanner;

public class eleicoes {
    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);
        int voto = 1, a = 0, b = 0, c = 0, d = 0, vnulo = 0, vbranco = 0, eleitores = 0, eleitor = 1;
    
        System.out.println("\n\n\t\t--- Urna eletrônica ---");
        System.out.println("\n\t1. Candidato a");
        System.out.println("\t2. Candidato b");
        System.out.println("\t3. Candidato c");
        System.out.println("\t4. Candidato d");
        System.out.println("\t5. Nulo");
        System.out.println("\t6. Branco");

        while (voto != 0) {
            do {
                System.out.print("\n\tDigite seu voto, eleitor " + eleitor + ": ");
                voto = entrada.nextInt(); 
            } while(voto < 0 || voto > 6);

            eleitores++;
            eleitor++;

            if (voto == 1) a++;
            if (voto == 2) b++;
            if (voto == 3) c++;
            if (voto == 4) d++;
            if (voto == 5) vnulo++;
            if (voto == 6) vbranco++;
        }

        System.out.println("\n\n\t\t---- Apuração dos votos ----\n");
        System.out.println("\tCandidato a: " + a);
        System.out.println("\tCandidato b: " + b);
        System.out.println("\tCandidato c: " + c);
        System.out.println("\tCandidato d: " + d);
        System.out.println("\tVotos nulos: " + vnulo);
        System.out.println("\tVotos em branco: " + vbranco);
        System.out.println("\n\tTotal de votos: " + (eleitores--) + "\n\n");

        entrada.close();
    }
}