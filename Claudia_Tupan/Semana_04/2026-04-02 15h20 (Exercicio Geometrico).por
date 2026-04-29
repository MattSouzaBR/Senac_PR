programa
{
	
	funcao inicio()
	{
		// Declarar as variáveis
		real valorB, valorb, valorh, valorA

		// Entrada
		escreva ("Informe o valor da base 'B': ")
		leia (valorB)
		limpa ()

		escreva ("Informe o valor da base 'b': ")
		leia (valorb)
		limpa ()

		escreva ("Informe o valor 'h': ")
		leia (valorh)
		limpa ()
		
		// Processamento
		valorA = ((valorB+valorb) * valorh) / 2

		// Saída
		escreva ("O valor total da Área 'A' é: ", valorA)
	}
}