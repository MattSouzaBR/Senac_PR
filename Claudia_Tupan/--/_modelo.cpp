#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
//#include <math.h>
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
main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); // Configurar o console para UTF-8
   	system ("title Modelo");
    system ("cls"); // Limpar a tela (clear screen)
    
	// Declare variable
		
	// Initialize variable
		
	// Input
	
	// Processing
   
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
        
    Input:
    	scanf ("%d", &idade); 							// Apenas 1 variável (número)
    	scanf ("%i %i", &anoAtual, &anoAdmissao); 		// Mais de uma variável
    	scanf ("%s", nome);
    
    Processing: 
    	// Estrutura condicional
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
    	
	Output:
		Apenas texto:
			printf ("Mensagem");
			printf ("A variável %s é aplicada assim", nome);
			printf ("Potência: %i \nRaiz quadrada: %.4f\n", potencia, raizQuadrada);
	
	+=
	-=
	*=
	/=
	(||) 	- (Disjunção) - (OU)
	(&&) 	- (Conjunção) - (E)
	(!) 	- (Negação) - (Não)
	pow 	- (Power) - Potência
		Necessário incluir (#include<math.h>)
		
    */
}
