programa
{
	
	funcao inicio()
	{
		logico concluiu = falso
		real media = 9.0, presenca = 100

		escreva ("media: ")
		leia (media)

		escreva ("presenca: ")
		leia (presenca)
		
		se (concluiu == verdadeiro e media >= 7 e presenca >= 75) {
			escreva ("Aprovado")
		} senao se (concluiu == verdadeiro e media >= 7 e presenca < 75) {
			escreva ("Reprovado - Presença")
		} senao se (concluiu == verdadeiro e media < 7 e presenca >= 75) {
			escreva ("Reprovado - Média")
		} senao se (concluiu == verdadeiro e media < 7 e presenca < 75) {
			escreva ("Reprovado - Média e Presença")
		} senao se (concluiu == falso e media >= 7 e presenca >= 75) {
			escreva ("Reprovado - Não concluiu")
		} senao se (concluiu == falso e media >= 7 e presenca < 75) {
			escreva ("Reprovado - Não concluiu e presença")
		} senao se (concluiu == falso e media < 7 e presenca >= 75) {
			escreva ("Reprovado - Não concluiu e média")
		} senao {
			escreva ("Reprovado - Não concluiu, média e presença")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 63; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */