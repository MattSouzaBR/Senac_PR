#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void configuracoesPadrao(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 1");
    system ("cls"); 
}

void encerrar() {
    system("echo. & echo. & pause");
}

// --- Início -----------------------------------------

char nomeTecnico [30];
float mediaTT;

void solicitar_nomeTecnico() {
	printf ("Informe o nome do técnico: ");
	gets(nomeTecnico);
}

void informarUsuario(){
	printf ("%s tirou a média %.2f", nomeTecnico, mediaTT);
}

float calcular_mediaAvaliacao() {
	float nota1, nota2, nota3, media;
	
	printf ("Informe a 1° (primeira) nota: ");
	scanf("%f", & nota1);
	media += nota1;
	
	printf ("Informe a 2° (segunda) nota: ");
	scanf("%f", & nota2);
	media += nota2;
	
	printf ("Informe a 3° (terceira) nota: ");
	scanf("%f", & nota3);
	media += nota3;
	
	return media / 3;
}

main() {
	configuracoesPadrao();
	
	solicitar_nomeTecnico();
	mediaTT = calcular_mediaAvaliacao();
	informarUsuario();
	
	encerrar();
}

