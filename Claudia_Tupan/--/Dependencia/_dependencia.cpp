#include <stdio.h> // Entrada e Saída (standard input output)
#include <locale.h> // Equivalente ao UTF-8
#include <stdlib.h> // Permitir comandos de Terminal (CMD)
#include <string.h>
#include <math.h>
#include <time.h>

void bootstrap(const char* titulo = "title Modelo"){
	char title[50];
  	//strcpy(title, "title " titulo);
   	system ("chcp 1252 > nul"); 
   	system (titulo);
    system ("cls"); 
}

void printl (const char* texto) {
	printf ("%s\n", texto);
}

void pausar (){
	system("echo. & pause");
}

void encerrar(int codigo = 99) {
	if (codigo == 1){
		system("echo.");
		exit(0);
	} else if (codigo == 2){
    	system("echo. & pause");
		exit(0);
	} else {
		exit(0);
	}
}

void br(){
	printf ("\n");
}

void cls(){
	system("cls");
}

