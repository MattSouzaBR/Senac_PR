/*
    Algoritmo (Descrição Narrativa)
    1 - Inicializar
    2 - Declarar as variáveis como real: total, preco, totalComissaoVendedor, comissao, percentualComissao
    3 - Declarar a variável como inteiro: qtdVendida
    4 - Inicializar a variável real 'percentualComissao' com o percentual de 2% de comissão.
    5 - Solicitar a quantidade de itens vendidos
    6 - Solicitar o valor unitário do item vendido
    7 - Calcular o total das vendas multiplicando a quantidade de itens pelo preço unitário
    8 - Calcular a comissão da venda multiplicando o total de vendas pelo percentual da comissão.
    9 - Calcular a diferença dos valores subtraindo a comissão do total
    9 - Apresentar os resultados
    10 - Finalizar

    Algoritmo (Descrição em Fluxograma)
    https://drive.google.com/file/d/1SKvGHBHGHqjM5YqzPQ7OuC57J_LNXcCk/view?usp=sharing

    Algortimo (Pseudocódigo: Portugol)
*/

programa {
    funcao inicio () {
        // Declarar as variáveis
            real total, preco, totalComissaoVendedor, comissao, diferenca, percentualComissao = 0.02
            inteiro qtdVendida

        // Entrada
            escreva ("Por favor, informe a quantidade de itens vendidos: ")
            leia (qtdVendida)
            limpa ()

            escreva ("Agora, por favor informe o preço unitário do item vendidos (Use '.' ao invés de ',' para casas decimais): ")
            leia (preco)
            limpa ()

        // Processamento
            total = qtdVendida * preco
            comissao = total * percentualComissao
            diferenca = total - comissao

        //Saída
            escreva ("Ao vender " + qtdVendida + " itens por R$ " + preco + " o total será: " + total + "\n")
            escreva ("A comissão do vendedor será R$ " + comissao + ". Sobrará para a loja: R$ " + diferenca)
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 14; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */