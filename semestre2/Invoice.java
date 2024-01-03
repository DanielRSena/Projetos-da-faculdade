package semestre2;

// Classe invoice para cadastro de produtos (POO)
public class Invoice {

    private int itemFaturado;
    private String descrição;
    private int qtdComprada;
    private double precoUnitario;

    public Invoice(int itemFaturado, String descrição, int qtdComprada, double precoUnitario) {

        this.itemFaturado = itemFaturado;
        this.descrição = descrição;
        if (qtdComprada < 0)
            this.qtdComprada = 0;
        else
            this.qtdComprada = qtdComprada;
        if (precoUnitario < 0)
            this.precoUnitario = 0.0;
        else
            this.precoUnitario = precoUnitario;
    }

    public void mostrar() {
        System.out.println("\n" + this.itemFaturado + " | " + this.descrição + " | "
                + this.qtdComprada + "un | R$ " + this.precoUnitario + "\n");
    }

    public double getInvoiceAmount() {

        double InvoiceAmount = qtdComprada * precoUnitario;
        return InvoiceAmount;
    }

    public double getItemFaturado() {
        return this.itemFaturado;
    }

    public String getDescrição() {
        return this.descrição;
    }

    public int getQtdComprada() {
        return this.qtdComprada;
    }

    public double getPrecoUnitario() {
        return this.precoUnitario;
    }

    public void setItemFaturado(int novoItem) {
        this.itemFaturado = novoItem;
    }

    public void setDescrição(String novoDescr) {
        this.descrição = novoDescr;
    }

    public void setQtdComprada(int novaCompra) {
        this.qtdComprada = novaCompra;
    }

    public void setPreçoUn(double novoPreço) {
        this.precoUnitario = novoPreço;
    }

}
