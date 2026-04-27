#include <stdio.h> // Entrada e Saída padrão (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // CMD

main() {
    setlocale(LC_ALL, "Portuguese");

    char cidade[40], mes[10];
    int dia, ano;
    printf("Informe a cidade: ");
    gets(cidade); // ler espaço entre palavras
    printf("Agora, digite o mês (extenso): ");
    scanf("%s", mes); // %s para ler string
    printf("Digite o dia: ");
    scanf("%i", &dia); // %i e %d para ler inteiro
    printf("Digite o ano: ");
    scanf("%i", &ano); // %i e %d para ler inteiro
    

    system("cls"); // Limpar a tela (clear screen)
    printf("Data Completa: %s, %i, de %s de %i.\n", cidade, dia, mes, ano); // Exibir a data 
    
    system("pause"); // Pausar a tela (pause screen)

    // Apenas vai & em números, não em strings, porque o nome da variável já é o endereço de memória da string.
    
    // Existe diferença entre %i e %d? 
    /*
        %i é usado para ler um número inteiro, mas ele pode interpretar números em diferentes bases (decimal, octal, hexadecimal) dependendo do formato do número. Por exemplo, se o número começar com "0", ele será interpretado como octal, e se começar com "0x", será interpretado como hexadecimal.
        
        %d é usado para ler um número inteiro decimal, e ele sempre interpreta o número como decimal, independentemente do formato. Portanto, se você usar %d para ler um número que começa com "0", ele será interpretado como decimal, enquanto %i o interpretará como octal.
    */
}