package semestre2.agenda;

import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.List;
import java.util.Scanner;

public class agenda {

    static Scanner entrada = new Scanner(System.in);
    static List<String> linhas = new ArrayList<>();

    static String inserir() {

        String nome, telefone;

        System.out.print("\nDigite o nome do contato: ");
        entrada.nextLine();
        nome = entrada.nextLine();
        System.out.print("Digite o número de telefone: ");
        telefone = entrada.nextLine();

        String contato = nome + ", " + telefone;

        try (BufferedWriter writer = new BufferedWriter(new FileWriter("contatos.txt", true))) {
            writer.newLine();
            writer.write(contato);
        } catch (IOException e) {
            System.err.println("Erro ao adicionar o contato: " + e.getMessage());
        }
        return "Contato adicionado com sucesso";

    }

    static String listar() {

        if (linhas.isEmpty()) {
            return "A lista de contatos está vazia.\n";
        }

        linhas.sort(String.CASE_INSENSITIVE_ORDER);
        System.out.println();
        for (String contato : linhas) {
            System.out.println(contato);
        }
        return "";
    }

    static String buscar() {

        if (linhas.isEmpty())
            return "A lista de contatos está vazia\n";

        boolean contatosEncontrados = false;

        System.out.print("\nQual letra você deseja buscar? ");
        entrada.nextLine();
        String palavraBusca = entrada.nextLine().toLowerCase();
        char letraBusca = palavraBusca.charAt(0);

        for (String contato : linhas) {
            if (contato.toLowerCase().charAt(0) == letraBusca) {
                System.err.println("\n" + contato);
                contatosEncontrados = true;
            }
        }

        if (contatosEncontrados)
            return "";
        else
            return "\nNão foram encontrados contatos que começam com a letra '" + letraBusca + "'\n";
    }

    static String deletar() {
        if (linhas.isEmpty()) {
            return "A lista de contatos está vazia, não há contatos para deletar.";
        }

        System.out.print("\nDigite o nome do contato que deseja deletar: ");
        entrada.nextLine();
        String nomeDeletar = entrada.nextLine().toLowerCase();
        List<String> contatosTemporarios = new ArrayList<>();
        boolean contatoEncontrado = false;

        for (String contato : linhas) {
            if (contato.toLowerCase().startsWith(nomeDeletar + ", ")) {
                contatoEncontrado = true;
            } else {
                contatosTemporarios.add(contato);
            }
        }

        if (contatoEncontrado) {
            try {
                Files.write(Paths.get("contatos.txt"), contatosTemporarios);
            } catch (IOException e) {
                System.err.println("\nErro ao deletar o contato: " + e.getMessage());
            }
            return "\nContato deletado com sucesso.";
        } else {
            return "\nContato não encontrado na lista.";
        }
    }

    public static void main(String[] args) {

        // variáveis gerais
        String nomeArquivo = "contatos.txt";
        String linha;
        int opcao = 0;
        do {
            try {

                linhas.clear();
                BufferedReader br = new BufferedReader(new FileReader(nomeArquivo));
                while ((linha = br.readLine()) != null) {
                    linhas.add(linha);
                }
                br.close();

                System.out.println(
                        "\n\n\t\t--- Agenda --- \n\n1. Inserir um novo contato\n2. Listar todos os contatos\n3. Buscar contato\n4. Deletar contato\n5. Sair da agenda");
                try {
                    do {
                        System.out.print("\n\tDigite o que deseja fazer: ");
                        opcao = entrada.nextInt();
                    } while (opcao < 1 || opcao > 5);
                } catch (InputMismatchException e) {
                    System.out.println("\nOpção inválida");
                    entrada.nextLine();
                }

                switch (opcao) {

                    case 1:
                        System.out.println(inserir());
                        break;

                    case 2:
                        listar();
                        break;

                    case 3:
                        System.out.print(buscar());
                        break;

                    case 4:
                        System.out.println(deletar());
                        break;
                }

            } catch (IOException e) {
                System.err.println("\n\nErro ao manipular o arquivo: " + e.getMessage() + "\n\n");
            }
        } while (opcao != 5);
        System.out.println("\n");

        entrada.close();
    }
}
