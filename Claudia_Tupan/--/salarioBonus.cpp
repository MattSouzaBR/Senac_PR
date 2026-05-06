#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
#include <string.h>
//#include <math.h>

main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); // Configurar o console para UTF-8
   	system ("title Modelo");
    system ("cls"); // Limpar a tela (clear screen)
    
	// Declare variable
		float salario = 0.0;
		int classe;
		char nivel[10];
		bool erro;
		
	// Initialize variable
		
	// Processing
		printf ("Informe o código da classe do jogador e seu salário!");
		printf ("\nCódigo de classe do jogador: ");
		scanf ("%i", &classe);
		printf ("\nInforme o salário: ");
		scanf ("%f", &salario);
		
		if (classe < 1 || classe > 5) {
			printf ("Classe inválida!\n");
			system ("pause");
			return 0;
		}
		
		switch (classe) {
			case 5:
				salario *= 2;
				// ou 'salario += salario * 1;'
				// ou 'salario = salario * 2;'
				// ou 'salario = salario + salario * 0.75;'
				strcpy (nivel, "Excelente");
				break;
			case 4:
				salario *= 1.75;
				// ou 'salario += salario * 0.75;'
				// ou 'salario = salario + salario * 0.75;'
				strcpy (nivel, "Bom");
				break;
			case 3:
				salario *= 1.30;
				// ou 'salario += salario * 0.30;'
				// ou 'salario = salario + salario * 0.30;'
				strcpy (nivel, "Regular");
				break;
			case 2:
				salario *= 1.05;
				// ou 'salario += salario * 0.05;'
				// ou 'salario = salario + salario * 0.05;'
				strcpy (nivel, "Te cuida");
				break;
			case 1: 
				// ou 'salario *= 1;'
				// ou 'salario += salario * 0.0;'
				// ou 'salario = salario + salario * 0.0;'
				// ou 'salario += salario;'
				// ou 'salario = salario;
				strcpy (nivel, "Bora trabalhar");
				break;
			default:
				printf ("ERRO - Classe inválida!");
				erro = true;
		}
		
		if (!erro) {
			system ("cls");
			printf ("Nivel: %s \nSalário: R$ %.2f", nivel, salario);
		}
   
    // Output
   	
    system("echo. & echo. & pause"); // Pausar a tela (pause screen)
	
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
			'strcpy' substitui o 'x = y' (uso: strcpy(variavel, "conteudo");)
			
			char nomeAluno[40], laboratorio[21];
			printf ("O aluno %s ficará no %s.", nomeAluno, laboratorio);
	
	toupper - Esse deixa os caracteres em maíuscula. Depende da biblioteca 'ctype.h';
	strupr - Deixa os caracteres em maíuscula Dependa da biblioteca 'string.h';
		
		
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
}
