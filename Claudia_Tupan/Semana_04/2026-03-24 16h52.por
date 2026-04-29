programa
{
	/*
		Algoritmo Descritivo
		1 - Iniciar
		2 - Obter o valor da primeira energia
		3 - Obter o valor da segunda energia
		4 - Somar o valor das energias
		5 - Mostrar o resultado
		6 - Finalizar

		Algortimo em Fluxograma
		             (Iniciar)
		                ⬇
		       !energia_1, energia_2|
		                ⬇
		[total_energia = energia_1 + energia_2]
		                ⬇
		         <total_energia)
		                ⬇
		            (Finalizar)
	*/	
	
	funcao inicio()
	{
	
		// Declarar as variáveis
		inteiro energia_1, energia_2, total_energia
		
	// Entrada
		// Obter o valor da primeira energia
		escreva ("Digite o valor da primeira energia: ")
		leia (energia_1)

		// Obter o valor da segunda energia
		escreva ("Digite o valor da segunda energia: ")
		leia (energia_2)
		
	// Processamento
		// Somar o valos das energias
		total_energia = energia_1 + energia_2
		
	// Saída
		// Mostrar o resultado
		escreva ("O Resultado das energias somadas é " + total_energia)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 440; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */