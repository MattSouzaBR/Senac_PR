programa {
	inclua biblioteca Matematica --> mat
	funcao inicio() {
		// Declarar variáveis
		real compra, venda, percentual

		// Entrada
		escreva ("Informe o valor de custo do produto: R$ ")
		leia (compra)
		
		escreva ("Informe o valor de venda do produto: R$ ")
		leia (venda)
		
		// Processamento
		percentual = (venda - compra) / compra * 100
		
		// Saída
		escreva ("Percentual de: ", mat.arredondar(percentual, 2))
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 430; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */