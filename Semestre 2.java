
import java.util.Scanner;
import java.lang.Math;

public class Lista1 
{

    public static void main(String[] args) 

    {
        Scanner entrada = new Scanner(System.in);

 

    //1. Euclides, mas em Java
    /* 
	int a = 0, b = 0, c = 0;
	System.out.print("\n\t\t- MDC -\n");
    System.out.print("\n	Primeiro numero do intervalo: "); a = entrada.nextInt();
    System.out.print("\n	Segundo numero do intervalo: "); b = entrada.nextInt();
    if(b > a)
    {
        while ((b % a) != 0)
        {
            c = b % a;
            b = a;
            a = c;
        }
    }
    else if (a > b)
    {
        while ((a % b) != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }
    }
    else System.out.println("\n\tErro!\n");
    System.out.print("\n\t\tMDC: " + c + "\n\n");
    */

    //2. Eleição presidencial
    /*
    int voto = 1, a = 0, b = 0, c = 0, d = 0, vnulo = 0, vbranco = 0, eleitores = 0, eleitor = 1;
    System.out.println("\n\n\t\t--- Urna eletrônica ---");
    System.out.println("\n\t1. Candidato a");
    System.out.println("\t2. Candidato b");
    System.out.println("\t3. Candidato c");
    System.out.println("\t4. Candidato d");
    System.out.println("\t5. Nulo");
    System.out.println("\t6. Branco");
    while (voto != 0) 
    {
       do 
        {
            System.out.print("\n\tDigite seu voto, eleitor " + eleitor + ": ");
            voto = entrada.nextInt(); 
        } while(voto < 0 || voto > 6);
        eleitores = eleitores + 1;
        eleitor = eleitor + 1;
        if (voto == 1) a = a + 1;
        if (voto == 2) b = b + 1;
        if (voto == 3) c = c + 1;
        if (voto == 4) d = d + 1;
        if (voto == 5) vnulo = vnulo + 1;
        if (voto == 6) vbranco = vbranco + 1;
    }
    System.out.println("\n\n\t\t---- Apuração dos votos ----\n");
    System.out.println("\tCandidato a: " + a);
    System.out.println("\tCandidato b: " + b);
    System.out.println("\tCandidato c: " + c);
    System.out.println("\tCandidato d: " + d);
    System.out.println("\tVotos nulos: " + vnulo);
    System.out.println("\tVotos em branco: " + vbranco);
    System.out.println("\n\tTotal de votos: " + (eleitores - 1) + "\n\n");
    */

    //3. Programa das notas
    /*
    int presenca = 0, taulas, matricula, cont = 1;
    double n1 = 0, n2 = 0, n3 = 0, media, tnotas = 0, notmax = 0, notmin = 10, naprovados = 0, nreprovados = 0;

    System.out.println("\n\t\t--- Site de notas ---\n");
    System.out.print("\n\tNúmero das aulas: ");
    taulas = entrada.nextInt();
    double dtaulas = (double) taulas;

    while(cont < 11)
    {
        System.out.print("\n\t\t--- Aluno " + cont + " ---\n\n\tNúmero da matrícula: ");
        matricula = entrada.nextInt();
        do 
        {
            System.out.print("\n\tAulas que o aluno foi: ");
            presenca = entrada.nextInt();
        } while(presenca > taulas || presenca < 0);
        double dpresenca = (double) presenca;
        dpresenca = (dpresenca / dtaulas) * 100;
        if(dpresenca < 75) 
        {
            System.out.println("\n\tO aluno com a mátricula " + matricula + " teve uma presença de " + presenca + "%. \n\n\t\tReprovado!\n\t\t----------\n");
            nreprovados = nreprovados + 1;
        }
        else 
        {
            do 
            {
                System.out.print("\n\tDigite a primeira nota: ");
                n1 = entrada.nextDouble();
            } while (n1 < 0 || n1 > 10);
            do 
            {
                System.out.print("\n\tDigite a segunda nota: ");
                n2 = entrada.nextDouble();
            } while (n2 < 0 || n2 > 10);
            do 
            {
                System.out.print("\n\tDigite a terceira nota: ");
                n3 = entrada.nextDouble();
            } while (n3 < 0 || n3 > 10);
            media = ((n1 + n2 + n3)  / 3);
            if (media > notmax) notmax = media;
            if (media < notmin) notmin = media;
            tnotas = tnotas + media;
            if(media >= 6) 
            {
                System.out.println("\n\tO aluno com a matrícula " + matricula + " teve frequência de " + presenca + "% e média " + media + "\n\n\t\tAprovado!\n\t\t----------");
                naprovados = naprovados + 1;
            }
            else 
            {
                System.out.println("\n\tO aluno com a matrícula " + matricula + " teve frequência de " + presenca + "% e média " + media + "\n\n\t\tReprovado!\n\t\t----------");
                nreprovados = nreprovados + 1;
            }

        }
        cont = cont + 1;
    }
    tnotas = tnotas / 10;
    System.out.println("\n\n\t\t---- Relatório ----");
    System.out.println("\n\tMaior média da turma : " + notmax + "\n\tMenor média da turma: " + notmin + "\n\tMédia geral da turma: " + tnotas + "\n\tAlunos aprovados: " + naprovados + "\n\tAlunos reprovados: " + nreprovados + "\n");
    */


        entrada.close();
    }
}