package semestre2;

import java.util.Scanner;

public class imcMetodo {

    static double IMC(double peso1, double alt1, char sexo) {
        double res = peso1 / (alt1 * alt1);
        validacao(res, sexo);
        return res;
    }

    static void validacao(double imc, char sexo) {

        if (sexo == 'f') {
            if (imc < 19.1)
                System.out.printf("\nCom IMC de %.2f está abaixo do peso\n\n", imc);
            else if (imc > 19.1 && imc <= 25.8)
                System.out.printf("\nCom IMC de %.2f está no peso normal\n\n", imc);
            else if (imc > 25.8 && imc <= 27.3) {
                System.out.printf("\nCom IMC de %.2f está marginalmente acima do peso\n\n", imc);
            } else if (imc > 27.3 && imc <= 31.1) {
                System.out.printf("\nCom IMC de %.2f está acima do peso ideal\n\n");
            } else
                System.out.printf("\nCom IMC de %.2f está obeso\n\n", imc);

        } else {
            if (imc < 20.7)
                System.out.printf("\nCom IMC de %.2f está abaixo do peso\n\n", imc);
            else if (imc > 20.7 && imc <= 26.4)
                System.out.printf("\nCom IMC de %.2f está no peso normal\n\n", imc);
            else if (imc > 26.4 && imc <= 27.8) {
                System.out.printf("\nCom IMC de %.2f está marginalmente acima do peso\n\n", imc);
            } else if (imc > 27.8 && imc <= 32.3) {
                System.out.printf("\nCom IMC de %.2f está acima do peso ideal\n\n");
            } else
                System.out.printf("\nCom IMC de %.2f está obeso\n\n", imc);
        }
    }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        double peso = 0.0, alt = 0.0;
        String genero;
        char sexo;

        do {
            System.out.print("Peso: ");
            peso = entrada.nextDouble();
        } while (peso <= 0);
        do {
            System.out.print("Altura: ");
            alt = entrada.nextDouble();
        } while (alt <= 0);
        do {
            System.out.print("'f' para feminino, 'm' para masculino: ");
            genero = entrada.next();
            sexo = genero.charAt(0);
        } while (sexo != 'f' && sexo != 'm');

        IMC(peso, alt, sexo);

        entrada.close();

    }
}