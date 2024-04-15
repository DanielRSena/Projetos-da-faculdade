package semestre2;
import java.util.Scanner;

public class alunos {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);  
        int presenca = 0, taulas, matricula, cont = 1;
        double n1 = 0, n2 = 0, n3 = 0, media, tnotas = 0, notmax = 0, notmin = 10, naprovados = 0, nreprovados = 0;

        System.out.println("\n\t\t--- Site de notas ---\n");
        System.out.print("\n\tNúmero das aulas: ");
        taulas = entrada.nextInt();
        double dtaulas = (double) taulas;

        while(cont < 11) {

            System.out.print("\n\t\t--- Aluno " + cont + " ---\n\n\tNúmero da matrícula: ");
            matricula = entrada.nextInt();

            do {
                System.out.print("\n\tAulas que o aluno foi: ");
                presenca = entrada.nextInt();
            } while(presenca > taulas || presenca < 0);

            double dpresenca = presenca / dtaulas * 100;

            if(dpresenca < 75) {
                System.out.printf("\n\tO aluno com a mátricula %d teve uma presença de %.2f%%.\n\n\t\tReprovado!\n\t\t----------\n\n", matricula, dpresenca );
                nreprovados = nreprovados + 1;
            }

            else {
                do {
                    System.out.print("\n\tDigite a primeira nota: ");
                    n1 = entrada.nextDouble();
                } while (n1 < 0 || n1 > 10);
            
                do {
                    System.out.print("\n\tDigite a segunda nota: ");
                    n2 = entrada.nextDouble();
                } while (n2 < 0 || n2 > 10);

                do {
                    System.out.print("\n\tDigite a terceira nota: ");
                    n3 = entrada.nextDouble();
                } while (n3 < 0 || n3 > 10);
                
                media = ((n1 + n2 + n3)  / 3);
                if (media > notmax) notmax = media;
                if (media < notmin) notmin = media;
                tnotas = tnotas + media;
                if(media >= 6) {
                    System.out.printf("\n\tO aluno com a matrícula %d teve frequência de %.2f%% e média %.2f\n\n\t\tAprovado!\n\t\t----------\n\n", matricula, dpresenca, media);
                    naprovados = naprovados + 1;
                }
                else 
                {
                    System.out.printf("\n\tO aluno com a matrícula %d teve frequência de %.2f%% e média %.2f\n\n\t\tReprovado!\n\t\t----------\n\n", matricula, dpresenca, media);
                    nreprovados = nreprovados + 1;
                }

            }
            cont ++;
        }

        tnotas = tnotas / 10;
        System.out.println("\n\n\t\t---- Relatório ----");
        System.out.println("\n\tMaior média da turma : " + notmax + "\n\tMenor média da turma: " + notmin + "\n\tMédia geral da turma: " + tnotas + "\n\tAlunos aprovados: " + naprovados + "\n\tAlunos reprovados: " + nreprovados + "\n");

        entrada.close();
    }
}