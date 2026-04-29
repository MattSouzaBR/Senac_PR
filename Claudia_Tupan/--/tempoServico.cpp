#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
#include <math.h>
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
    system ("cls"); // Limpar a tela (clear screen)
    
	int anoAdmissao, anoAtual, tempoServ, tempoServ2050;
	printf ("Informe o ano atual e o ano de admissão: ");
	scanf ("%i %i", &anoAtual, &anoAdmissao);
	
	tempoServ = anoAtual - anoAdmissao;
	tempoServ2050 = 2050 - anoAdmissao;
	
	printf("Tempo Serviço Atual: %i\nTempo Serviço 2050: %i", tempoServ, tempoServ2050);
   
    system("echo. & pause"); // Pausar a tela (pause screen)

    // Apenas vai & em nÃºmeros, nÃ£o em strings, porque o nome da variÃ¡vel jÃ¡ Ã© o endereÃ§o de memÃ³ria da string.
    
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
    	scanf("%d", &idade);
    	scanf("%s", nome);
	Output:
		Apenas texto:
			printf ("Mensagem");
			
	(||) 	- (Disjunção) - (OU)
	(&&) 	- (Conjunção) - (E)
	(!) 	- (Negação) - (Não)
	pow 	- (Power) - Potência
		Necessário incluir (#include<math.h>)
		
    */
}
