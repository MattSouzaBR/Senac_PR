#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
#include <string.h>
//#include <math.h>
void bootstrap(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 4");
    system ("cls"); 
}

void encerrar() {
    system("echo. & echo.");
}

// Procedure - não retorna valor
// function - retorna um valor

//Procedure
void procedureExemplo() {
	printf ("=== RESTAURANTE TEC003===\n"
			"1 - Raviolini - Camarões com batatas gratinadas\n"
			"2 - Rondelli - 4queijos com filé a molho madeira \n"
			"3 - Sacotini - Ricota com espinafre \n"
			"4 - Somentino - Bacalhai com azeitonas pretas\n"
			"Escolha uma opção: ");
}


// Function
float functionExemplo(float valor, int qtde) {
	return valor * qtde;
}

main() { 
  bootstrap();
	float salario, total = 0.0;	
	unsigned int qtdeFuncionarios;
	printf ("Quantos funcionários tem a filial?: ");
	scanf ("%i", &qtdeFuncionarios);
	printf ("Digite o salário dos funcionários: \n");
	for (int i = 1; i <= qtdeFuncionarios; ++i){
		printf ("Funcionário %i - R$ ", i);
		scanf("%f", &salario);
		total += salario;
//		if (i == 2) {
//			break;
//		}
	}
	printf ("\nTotal: R$ %.2f", total);
  encerrar();
}

	
	// Coloque 'return 0' se quiser encerrar o programa ali ou use exit(0)  (Requer <stdlib.h>);
    // Apenas vai & em número, não em strings, porque o nome da variável já são o endereço da string.
    
    // Existe diferença entre %i e %d? 
	/*
	    %i é usado para ler um número inteiro, mas ele pode interpretar números em diferentes bases (decimal, octal, hexadecimal) dependendo do formato do número. Por exemplo, se o número começar com "0", ele será interpretado como octal, e se começar com "0x", será interpretado como hexadecimal.
	    %d é usado para ler um número inteiro decimal, e ele sempre interpreta o número como decimal, independentemente do formato. Portanto, se você usar %d para ler um número que começa com "0", ele será interpretado como decimal, enquanto %i o interpretará como octal.
	*/
    
    /*
    Declarar variáveis:
        int anoAdmissao, anoAtual;
        float valorDecimal, totalDecimal;
        char nome[50]; 
        	Para variável char não usa o scanf, usa-se o 'gets' para capturar a informação.
        
    Input:
    	scanf ("%d", &idade); 							// Apenas 1 variável (número)
    	scanf ("%i %i", &anoAtual, &anoAdmissao); 		// Mais de uma variável
    	scanf ("%s", nome);
    
    Processing: 
    	// Estrutura condicional
    		// if
		    	if (expressão) {
		    		comando1;
		    		comando2;
		    	}
		    	// O 'else if' é opcional
		    	else if (expressão) {
		    		comando3;
		    		comando4;
		    	}
		    	// O 'else' é opcional
		    	else { 
		    		comando3;
		    		comando4;
		    	}
	    	
	    	//switch
	    		switch(variavel) {
	    			case valor1:
	    				bloco de instrucoes;
	    				break;
	    			
	    			default:
	    				bloco de instrucoes;
	    		}
    	
	Output:
		Apenas texto:
			printf ("Mensagem");
			printf ("A variável %s é aplicada assim", nome);
			printf ("Potência: %i \nRaiz quadrada: %.4f\n", potencia, raizQuadrada);
			
			Se char for char variavel[x];
				printf ("Texto: %s", variavel);
			Se char for char variavel;
				printf ("Texto: %c", variavel);
	
	Atribuição
	+= (x += y equivale ao x = x + y)
	-= (x -= y equivale ao x = x - y)
	*= (x *= y equivale ao x = x * y)
	/= (x /= y equivale ao x = x / y)
	
	(||) 	- (Disjunção) - (OU)
	(&&) 	- (Conjunção) - (E)
	(!=) 	- (Negação) - (Não)
	
	pow 	- (Power) - Potência
		Necessário incluir (#include<math.h>)
		
		
	O MUNDO DO CHAR (KKKK, ELE TEM UM MUNDO PRÓPRIO)
	strcpy -> função para copiar (ex. strcpy(laboratorio, "Laboratorio 1"))
		O 'char' em char nome[40] transforma o que seria a variável em um vetor. Por isso não é possível em C
		definir diretamente num vetor um texto, como no caso, nome="ana". Para isso você tem que usar o strcpy
		strcpy(nome, "ana");
		
		Nas condicionais, a comparação de 1 caractere te que ser com aspas simples
		
		Resumo:
			'gets' substitui o 'scanf' (uso: gets(variavel);)
				Pode se usar o 'scanf(" %c"; &variavel);' se o conteúdo do char for apenas 1 caracter.
			'strcpy' substitui o 'x = y' (uso: strcpy(variavel, "conteudo");)
			
			char nomeAluno[40], laboratorio[21];
			printf ("O aluno %s ficará no %s.", nomeAluno, laboratorio);
	
	toupper - Esse deixa os caracteres em maíuscula. Depende da biblioteca 'ctype.h';
		uso: variavel = toupper(variavel);
	strupr - Deixa os caracteres em maíuscula Dependa da biblioteca 'string.h';
		
	
// Estrutura de Repetição
	for (int i = 1; i<=10; i++){
		printf ("%i ", i);
	}
	
	do {
	} (pass = true);
	
    */
    
	/*
		Vá em:
			Tools (Ferramentas) ? Compiler Options (Opções do Compilador)
		Clique na aba:
			Settings (Configurações)
		No menu lateral, selecione:
			Code Generation (Geração de Código)
		Procure um campo tipo:
			?? “Add the following commands when calling the compiler”
		(ou algo parecido)
			-finput-charset=UTF-8 -fexec-charset=UTF-8
	
		Funcionou, mas quando salva na variável e usa ele não coloca em utf-8
	*/
