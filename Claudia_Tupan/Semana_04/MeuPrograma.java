import java.util.Scanner; // <<<< Importar para ler conteúdo do usuário

public class MeuPrograma {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in); // <<<< Declarar o nome que referencia o programa

        // Declarar as variáveis
            double total, preco, totalComissaoVendedor, diferenca, percentualComissao = 0.02;
            int qtdVendida;
        
        // Entrada
            System.out.println("Por favor, informe a quantidade de itens vendidos: ");
            qtdVendida = ler.nextInt();

            System.out.println("Agora, por favor, informe o preço unitário do item vendido (Use '.' ao invés de ',' para casas decimais): ");
            preco = ler.nextDouble();
            
        // Processamento
            total = qtdVendida * preco;
            totalComissaoVendedor = total * percentualComissao;
            diferenca = total - totalComissaoVendedor;
        
        // Saída
            System.out.println ("Ao vender " + qtdVendida + " itens por " + preco + " o total será: R$ " + total);
            System.out.println ("A comissão do vendedor será R$ " + totalComissaoVendedor + ". Sobrará para a loja: R$ " + diferenca);

        ler.close();
    }
}