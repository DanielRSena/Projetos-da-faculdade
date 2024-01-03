package semestre2;

import java.io.*;
import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.List;
import java.util.Scanner;

public class banco {

    static String saldo = "";
    static Scanner entrada = new Scanner(System.in);
    static int opcao = 0;

    static String sacar() {

        double saque = 0.0;
        double saldoDouble = Double.parseDouble(saldo);

        try {
            do {
                System.out.print("\n\tSaldo atual: " + saldo + "\n\tDigite o valor do saque: ");
                saque = entrada.nextDouble();
            } while (saque < 0 || saque > saldoDouble);
        } catch (InputMismatchException e) {
            System.out.println("\nErro! Valor inválido");
            entrada.next();
        }

        
        if (saldoDouble > saque) {
            saldoDouble -= saque;
            saldo = String.valueOf(saldoDouble);
        }
        return saldo;
    }

    static String depositar() {

        double deposito = 0.0;
        try {
            do {
                System.out.print("\n\tDigite o valor do depósito: ");
                deposito = entrada.nextDouble();
            } while (deposito < 0);
        } catch (InputMismatchException e) {
            System.out.println("\nErro! Valor inválido");
            entrada.nextLine();
        }
        double saldoDouble = Double.parseDouble(saldo);
        saldoDouble += deposito;
        saldo = String.valueOf(saldoDouble);
        return saldo;
    }

    public static void main(String[] args) {

        // variáveis gerais
        String nomeArquivo = "banco.txt";
        String linha, numBusca, nomeCliente = "";
        boolean clienteEncontrado = false;

        System.out.println("\n\n\tBem vindo ao banco Dan!\n");
        System.out.print("Digite o número da conta: ");
        numBusca = entrada.nextLine();

        try {
            List<String> linhas = new ArrayList<>();
            BufferedReader br = new BufferedReader(new FileReader(nomeArquivo));
            while ((linha = br.readLine()) != null) {
                linhas.add(linha);
            }
            br.close();

            // validação nº conta e senha
            for (int i = 0; i < linhas.size(); i++) {
                String[] partes = linhas.get(i).split(", ");
                String contaCliente = partes[1];
                String senhaCliente = partes[2];
                String saldoCliente = partes[3];
                String senha;

                if (contaCliente.equals(numBusca)) {
                    System.out.print("Digite a senha: ");
                    senha = entrada.nextLine();

                    // validação da senha
                    if (senhaCliente.equals(senha)) {
                        clienteEncontrado = true;
                        nomeCliente = partes[0];
                        saldo = saldoCliente;
                    }
                    break;
                    
                }
            }

            // Caso o login der certo
            if (clienteEncontrado) {

                do {
                    System.out.println(
                            "\n\nBem vindo, " + nomeCliente + "\n\n1. Sacar\n2. Depositar\n3. Saldo\n4. Sair \n");
                    try {
                        do {
                            System.out.print("Digite o que deseja fazer: ");
                            opcao = entrada.nextInt();
                        } while (opcao < 1 || opcao > 4);
                    } catch (InputMismatchException e) {
                        System.out.println("\nOpção inválida");
                        entrada.nextLine();
                    }

                    switch (opcao) {
                        case 1:
                            System.out.println("\n\tSaldo atual: R$ " + sacar());
                            break;
                        case 2:
                            System.out.println("\n\tSaldo atual: R$ " + depositar());
                            break;
                        case 3:
                            System.out.println("\n\tO saldo atual é de R$ " + saldo);
                            break;

                    }
                } while (opcao != 4);

                // salvando os dados...
                try {
                    BufferedWriter bw = new BufferedWriter(new FileWriter(nomeArquivo));

                for (int i = 0; i < linhas.size(); i++) {
                    String[] partes = linhas.get(i).split(", ");
                    String cliente = partes[0];

                    if (cliente.equalsIgnoreCase(nomeCliente))
                        partes[3] = saldo;

                            bw.write(String.join(", ", partes));
                            bw.newLine();
                }  
                        bw.close();
                } finally {
                    entrada.close();
                }
                System.out.println("\n\tObrigado por usar o banco Dan!\n");

            } else {
                System.out.println("\n\nErro! O número da conta não foi encontrado na base de dados.\n\n");
            }

        } catch (IOException e) {
            System.err.println("\n\nErro ao manipular o arquivo: " + e.getMessage() + "\n\n");
        }
        entrada.close();
    }
}