programa
{
	/*
	 * Leia o enunciado
	 * 
	 * Quantas variáveis:
	 *	2. area, raio
	 *	
	 * Quais são as variáveis
 	 *	3. real raio, area
 	 * 
 	 * Variáveis a serem usadas para coletar informações com o usuário
	 *	4. raio
	 *	
	 * Calculo a ser feito
	 *	5. area = 3.1415 * raio * raio
	 *	
	 * Variável responsável por apresentar o resultado para o usuário
	 *	6. area
	*/

	
inclua biblioteca Matematica --> m
	funcao inicio()
	{
		// Declaração de Variáveis
		real raio, area
		
		// Entrada
		escreva ("Informe o raio da área desejada: ")
		leia (raio)
		
		// Processamento 
		area = m.arredondar(m.PI * m.potencia(raio, 2.0), 3)
		
		// Saída
		escreva ("A área total será: ", area, " m²")
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 651; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */