programa
{
	//inclua biblioteca Arquivos --> arquivos
	//inclua biblioteca Calendario --> calendario
	//inclua biblioteca Graficos --> graficos
	//inclua biblioteca Internet --> internet
	inclua biblioteca Matematica --> matematica
	//inclua biblioteca Mouse --> mouse
	//inclua biblioteca Objetos --> objetos
	//inclua biblioteca ServicosWeb --> servicosWeb
	//inclua biblioteca Sons --> sons
	//inclua biblioteca Teclado --> teclado
	//inclua biblioteca Texto --> texto
	//inclua biblioteca Tipos --> tipos
	//inclua biblioteca Util --> util
	//inclua biblioteca PortugolStudio --> portugolStudio
	
	funcao inicio()
	{
		// Declaração
		inteiro intNumeroUm, intNumeroDois, somaTotal, subtracaoTotal, multiplicacaoTotal, restoTotal
		real numeroUm, numeroDois, divisaoTotal

		// Entrada
		escreva ("Informe o primeiro valor: ")
		leia (numeroUm)
		
		escreva ("Informe o segundo valor: ")
		leia (numeroDois)

		// Processamento
		somaTotal = numeroUm + numeroDois
		subtracaoTotal = numeroUm - numeroDois
		multiplicacaoTotal = numeroUm * numeroDois
		divisaoTotal = numeroUm / numeroDois

		intNumeroUm = numeroUm
		intNumeroDois = numeroDois
		restoTotal = intNumeroUm % intNumeroDois

		// Saída
		escreva ("Soma: ", somaTotal, "\n")
		escreva ("Subtração: ", subtracaoTotal, "\n")
		escreva ("Multiplicação: ", multiplicacaoTotal, "\n")
		escreva ("Divisão: ", matematica.arredondar(divisaoTotal, 2), "\n")
		escreva ("Resto: ", restoTotal, "\n")
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1193; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */