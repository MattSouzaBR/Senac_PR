function MeuPrograma () {
    // Declarar e Inicializar as variáveis 
        var total, preco, totalComissaoVendedor, diferenca, percentualComissao = 0.2, qtdVendida;

    // Entrada
        qtdVendida = prompt ("Por favor, informe a quantidade de itens vendidos: ");

        preco = prompt ("Agora, por favor, informe o preço unitário do item vendido (Use '.' ao invés de ',' para separar casas decimais.):");

    // Processamento
        total = preco * qtdVendida;
        totalComissaoVendedor = total * percentualComissao;
        diferenca = total - totalComissaoVendedor;

    // Saída
        console.info ("Ao vender " + qtdVendida + " itens por R$ " + preco + " o total será: R$ " + total);
        console.log ("A comissão do vendedor será R$ " + totalComissaoVendedor + ". Sobrando assim para a loja: R$ " + diferenca)
}

/*
console.log(): 
    Exibe informações gerais.

console.info(): 
    Semelhante ao log(), mas utilizado para mensagens informativas específicas.

console.table(): 
    Ideal para visualizar arrays de objetos em formato de tabela organizada.

console.error() / console.warn(): 
    Exibe erros ou avisos coloridos.

console.dir(): 
    Exibe uma representação interativa da estrutura de um objeto.
    
console.trace(): 
    Mostra o rastreamento da pilha (stack trace) para saber de onde a função foi chamada.

*/
