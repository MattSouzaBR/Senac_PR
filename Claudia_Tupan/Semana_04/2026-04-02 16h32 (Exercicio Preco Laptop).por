programa
{
	/*
	 * 
	 * Quantas variáveis:
	 *	2. 2
	 *	
	 * Quais são as variáveis
 	 *	3. real valorVenda, valorPagar
 	 * 
 	 * Variáveis a serem usadas para coletar informações com o usuário
	 *	4. valorVenda
	 *	
	 * Calculo a ser feito
	 *	5. valorPagar = valorVenda - valorVenda * 0.15
	 *	
	 * Variável responsável por apresentar o resultado para o usuário
	 *	6. valorPagar
	*/

	inclua biblioteca Matematica --> m
	funcao inicio()
	{
		// Declaração de Variáveis
		real valorVenda, valorPagar

		// Entrada
		escreva ("Informe o preço do Laptop: R$ ")
		leia (valorVenda)
		limpa ()
		
		// Processamento 
		valorPagar = m.arredondar(valorVenda - valorVenda * 0.15, 2)
		
		// Saída
		escreva ("O valor à pagar é R$ ", valorPagar)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 388; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */