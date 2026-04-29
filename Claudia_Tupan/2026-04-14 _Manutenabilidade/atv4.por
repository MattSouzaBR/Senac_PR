programa
{
	inclua biblioteca Matematica --> MAT
	funcao inicio()
	{
		// Declaração de variáveis
		real valorVendas = 0.0, valorComissao = 0.0, valorReceber = 0.0

		// Entrada
		escreva ("Informe o valor das vendas: R$ ")
		leia(valorVendas)
		limpa()

		// Processamento
		se (valorVendas > 0 e valorVendas <= 3000) 
		{
			valorReceber = MAT.arredondar(valorVendas * 1.05, 2)
		} 
		
		senao se (valorVendas > 3000) 
		{
			valorReceber = MAT.arredondar(valorVendas * 1.08, 2)
		}

		senao
		{
			valorReceber = valorVendas
		}

		valorComissao = MAT.arredondar(valorReceber - valorVendas, 2)

		// Saída
		escreva ("O valor das vendas foram: R$ ", valorVendas)
		escreva ("\nComo a comissão foi de R$ ", valorComissao)
		escreva ("\n------------------------------------\n")
		escreva ("\nEle está apto para receber: R$ ", valorReceber)
		escreva ("\n\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 480; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */