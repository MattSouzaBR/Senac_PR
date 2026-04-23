#include <stdio.h> // entrada saída padrão (standart input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // CMD

main() {
	setlocale(LC_ALL,"Portuguese");
    printf("Olá Mundo! Estou Programando em C!");
	system("echo. & pause");
}
