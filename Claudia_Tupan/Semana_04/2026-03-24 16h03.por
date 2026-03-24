programa
{
	
	funcao inicio()
	{
		converter_celsius ()
		escreva ("\n")
		converter_farenheit ()
	}

	funcao converter_celsius () {
		real temp_celsius, temp_farenheit
		
		escreva ("Informe a temperatura em Celsius: ")
		leia (temp_celsius)

		temp_farenheit = (temp_celsius * 1.8) + 32
		limpa()
	
		escreva ("A temperatura " + temp_celsius + "°C, convertido é em farenheit é " + temp_farenheit + "°F")
	}

	funcao converter_farenheit () {
		real temp_celsius, temp_farenheit
		
		escreva ("Informe a temperatura em Farenheit: ")
		leia (temp_farenheit)

		temp_celsius = (temp_farenheit - 32) / 1.8
		limpa()
	
		escreva ("A temperatura " + temp_farenheit + "°F, convertido em celsius é " + temp_celsius + "°C")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 0; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */