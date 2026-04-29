using System;

namespace MeuPrograma {
    public class Program {
        public static void Main(string[] args) {
        // Declarar as variáveis
            double total, preco, totalComissaoVendedor, diferenca, percentualComissao = 0.2;
            int qtdVendida;
        
        // Entrada
            Console.WriteLine ("Por favor, informe a quantidade de itens vendidos: ");
            qtdVendida = int.Parse(Console.ReadLine());
            Console.Clear();

            Console.WriteLine ("Agora, por favor, informe o preço unitário do item vendido (Use '.' ao invés de ',' para casas decimais): ");
            preco = double.Parse(Console.ReadLine());
            Console.Clear();

        // Processamento
            total = qtdVendida * preco;
            totalComissaoVendedor = total * percentualComissao;
            diferenca = total - totalComissaoVendedor;

        // Saída
            Console.WriteLine ("Ao vender ", qtdVendida, " itens por R$ ", preco, " o total será: R$ ", total);
            Console.WriteLine ("A comissão do vendedor será R$ ", totalComissaoVendedor, ". Sobrará para a loja: R$ ", diferenca);
        }
    }
}