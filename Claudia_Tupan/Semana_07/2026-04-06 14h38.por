programa
 {
	
funcao mensagem (cadeia texto) {
		escreva (texto, "\n")	
	}
	
	funcao inicio()
 {
		enum1 ()
	}
	/* Leia cada enunciado e identifique
	 *  1 - Quantas variáveis devem ser declaradas
	 *  2 - Tipo e identificador das variáveis
	 *  3 - Quais variáveis são de entrada
	 *  4 - Quais cálculos devem ser realizados
	 *  5 - Quais valores devem ser apresentados ao final
	 */
	funcao enum1 () {
		// Enunciado
		/*
		* Um arquiteto está planejando o piso de uma sala retangular 
		* e também precisa saber quanto de rodapé será necessário para
		* contornar toda a sala.
		* 
		* Crie um algoritmo que leia a largura e a altura da sala
		* Calcule e mostre a área e o perímetro do retângulo
		*/

		/*
		Quadrado
			Perímetro: P = 4xL(lado + lado + lado + lado)
			Área: A = l²(lado x lado)
		
		Retângulo
			Perímetro: P = 2x(base+altura)
			Área: A = base x altura
		
		Triângulo
			Perímetro: P = a + b + c
			Área: A = (base x altura)/2

		Círculo
			Perímetro (Circunferência): C = 2 x π x r (r é o raio, π ~ 3,14)
			Área: A = π x r²
		*/
		
		// Declaração das variáveis
		real base, altura, perimetro, area

		// Entrada
		escreva ("Informe a base: ")
		leia (base)

		escreva ("Informe a altura: ")
		leia (altura)
		
		// Processamento
		perimetro = 2 * (base + altura)
		area = base * altura
		
		// Saída
		mensagem ("O perímetro é: " + perimetro)
		mensagem ("A área é: " + area)
	}

	funcao enum2 () {
		// Enunciado
		/*
		 * Um motorista deseja calcular o consumo médio de combustível
		 * de seu carro após realizar uma viagem.
		 * 
		 * Crie um algoritmo que leia:
		 * 	- a distância percorrida em quilômetros
		 * 	- a quantidade de combustível gasta em litros
		 * 	
		 * Em seguida, calcule o consumo médio do veículo (km por litro)
		 * e mostre o resultado ao final.
		 */
		 
		// Declaração de variáveis
		real KmDistancia, litroCombustivel

		// Entrada do Usuário
		
		// Processamento interno
		// Saída para Usuário
	}

	funcao enum3 () {
		// Enunciado
		/*
		 * Uma oficina mecânica precisa calcular o valor total das
		 * peças utilizadas em um conserto. 
		 * 
		 * Crie um algoritmo que leia a quantidade de peças utilizadas
		 * e o valor unitário de cada peça. Calcule e mostre o custo
		 * total das peças.
		 */
		 
		// Declaração de variáveis
		
		// Entrada do Usuário
		
		// Processamento interno
		
		// Saída para Usuário
		
	}

	funcao enum4 () {
		// Enunciado
		/*
		 * Um turista brasileiro quer saber quanto seu dinheiro em reais
		 * vale em outras moedas.
		 * 
		 * Elabore um algoritmo que leia um valor em reais.
		 * 
		 * Considere:
		 * 	- 1 dólar = 5.49 reais
		 * 	- 1 euro = 6.75 reais
		 * 	
		 * Calcule e mostre o valor em dólares e em euros
		 */
		 
		// Declaração de variáveis
		real valorReal, taxaCambioDolar = 5.49, taxaCambioEuro = 6.75, 
			cambioDolar, cambioEuro
		
		// Entrada do Usuário
		escreva("Informe o valor que deseja converter: R$ ")
		leia(valorReal)
		
		// Processamento interno
		cambioDolar = valorReal * taxaCambioDolar
		cambioEuro = valorReal * taxaCambioEuro
		
		// Saída para Usuário
		
	}

	funcao enum5 () {
		// Enunciado
		/* 
		 * Um professor precisa calcular a média final de um aluno. 
		 * Elabore um algoritmo que leia 3 notas de um aluno, calcule a 
		 * média aritmética e a média ponderada das notas e mostre o
		 * resultado.
		 * 
		 * Calculos:
		 * 	mediaAritmetica = (nota1 + nota2 + nota3) / 3
		 * 	mediaPonderada = (nota1 * 5 + nota2 * 7 + nota3 * 3) / (5+7+3)
		 */
		 
		// Declaração de variáveis
		real nota1, nota2, nota3, mediaAritmetica, mediaPonderada
		
		// Entrada do Usuário
		escreva("Informe a PRIMEIRA nota do aluno: ")
		leia(nota1)

		escreva("Informe a SEGUNDA nota do aluno: ")
		leia(nota2)

		escreva("Informe a TERCEIRA nota do aluno: ")
		leia(nota3)
		
		// Processamento interno
		mediaAritmetica = (nota1 + nota2 + nota3)/3
		mediaPonderada = (nota1 * 5 + nota2 * 7 + nota3 *3) / (5+7+3)
		
		// Saída para Usuário
		mensagem ("A média ponderada do aluno é: " + mediaPonderada)
		mensagem ("A média aritmética do aluno é: " + mediaAritmetica)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2305; 
 * @DOBRAMENTO-CODIGO = [15, 43, 63, 115];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */