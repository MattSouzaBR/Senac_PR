#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
#include <string.h>
#include <math.h>
void bootstrap(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 4");
    system ("cls"); 
}

void pausar (){
	system("echo. & pause");
}

void encerrar(int codigo = 3) {
	if (codigo = 1){
		system("echo.");
		exit(0);
	} else if (codigo = 2){
    	system("echo. & pause");
		exit(0);
	} else {
		exit(0);
	}
}

