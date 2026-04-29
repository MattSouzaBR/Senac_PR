#include <stdio.h> // Entrada e SaÃ­da padrÃ£o (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
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
    setlocale(LC_ALL, "Portuguese");
    system ("chcp 65001"); // Configurar o console para UTF-8
    system ("cls"); // Limpar a tela (clear screen)
    
    // Declaração de variáveis
    int numero1, numero2, resultado, ano;
    float resultadoDec;
    
    printf ("Digite o primeiro número: ");
    scanf ("%i", &numero1);
    
    printf ("Digite o segundo número: ");
    scanf ("%i", &numero2);
    
    resultado = numero1 + numero2;
    printf ("\tAdição: %i\n", resultado);
    
    resultado = numero1 - numero2;
    printf ("\tSubtração: %i\n", resultado);
    
    resultado = numero1 * numero2;
    printf ("\tMultiplicação: %i\n", resultado);
    
    resultadoDec = (float) numero1 / numero2;
    printf ("\tDivisão: %f\n", resultadoDec);
    
    resultado = numero1 % numero2;
    printf ("\tResto da divisão: %i\n", resultado);
    
    if (numero1 >= 1000 && numero2 == 4 && resultado == 0) {
    	printf ("\n\tEste ano é bissexto\n");
    } else if (numero1 >= 1000 && numero2 == 4) {
    	printf ("\n\tEste ano NÃO É bissexto\n");
	}
	
	printf ("\n================================================================\n\n");
	numero1 += numero2;
	printf ("\t1° Número: %i - 2° Número: %i\n", numero1, numero2);
	printf ("\tAdição: %i\n", numero1);
	
	numero1 -= numero2;
	printf ("\t1° Número: %i - 2° Número: %i\n", numero1, numero2);
	printf ("\tSubtração: %i\n", numero1 - numero2);
    system("pause"); // Pausar a tela (pause screen)

    // Apenas vai & em nÃºmeros, nÃ£o em strings, porque o nome da variÃ¡vel jÃ¡ Ã© o endereÃ§o de memÃ³ria da string.
    
    // Existe diferenÃ§a entre %i e %d? 
    /*
        %i Ã© usado para ler um nÃºmero inteiro, mas ele pode interpretar nÃºmeros em diferentes bases (decimal, octal, hexadecimal) dependendo do formato do nÃºmero. Por exemplo, se o nÃºmero comeÃ§ar com "0", ele serÃ¡ interpretado como octal, e se comeÃ§ar com "0x", serÃ¡ interpretado como hexadecimal.
        
        %d Ã© usado para ler um nÃºmero inteiro decimal, e ele sempre interpreta o nÃºmero como decimal, independentemente do formato. Portanto, se vocÃª usar %d para ler um nÃºmero que comeÃ§a com "0", ele serÃ¡ interpretado como decimal, enquanto %i o interpretarÃ¡ como octal.
    */
}
