#include <stdio.h> // Entrada e Saída padrão (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // CMD

main() {
    setlocale(LC_ALL, "Portuguese_Brazil.utf8");
    system ("chcp 65001");
    system ("cls");
    // Declaração de variáveis
    char nome[40], titulacao[13];
    int idade;
    float salario;

    // Entrada de dados
    printf("Informe seu nome, titulação, idade em anos e salário: ");
    scanf("%s %s %i %f", nome, titulacao, &idade, &salario);

    // Processamento de dados
    system("cls"); // Limpar a tela (clear screen)

    // Saída de dados
    printf("Prof. %s (%s) %i anos - R$ %f\n", nome, titulacao, idade, salario);

    system("pause"); // Pausar a tela (pause screen)

    // Apenas vai & em números, não em strings, porque o nome da variável já é o endereço de memória da string.
    
    // Existe diferença entre %i e %d? 
    /*
        %i é usado para ler um número inteiro, mas ele pode interpretar números em diferentes bases (decimal, octal, hexadecimal) dependendo do formato do número. Por exemplo, se o número começar com "0", ele será interpretado como octal, e se começar com "0x", será interpretado como hexadecimal.
        
        %d é usado para ler um número inteiro decimal, e ele sempre interpreta o número como decimal, independentemente do formato. Portanto, se você usar %d para ler um número que começa com "0", ele será interpretado como decimal, enquanto %i o interpretará como octal.
    */
}