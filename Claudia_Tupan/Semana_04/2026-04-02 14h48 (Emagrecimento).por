programa
{
	inclua biblioteca Matematica --> matematica
	
	funcao inicio()
	{
		// Declaração de variáveis
		cadeia nome
		real pesoKg, pesoGr, pesoNovo

		// Entrada
			escreva ("Informe seu nome: ")
			leia (nome)
			limpa ()

			escreva ("Informe o peso: ")
			leia (pesoKg)
			limpa ()
			
		// Processamento
			pesoGr = pesoKg * 1000
			pesoNovo = pesoGr - pesoGr * 0.12
			
		// Saída
			escreva ("Paciente: ", nome, "\n")
			escreva ("PesoKg: ", pesoKg, "kg", "\n")
			escreva ("Peso (gramas): ", pesoGr, "g", "\n")
			escreva ("Peso novo: ", pesoNovo, "kg", "\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 209; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */