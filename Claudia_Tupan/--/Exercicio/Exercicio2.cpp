#include <stdio.h> 
#include <locale.h> 
#include <stdlib.h>
void configuracoesPadrao(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 2");
    system ("cls"); 
}

void encerrar() {
    system("echo. & echo. & pause");
}

// --- Início -----------------------------------------

float mediaAtendimentoDiario, mediaAtendimentoAnual;

void lerMediaAtendimentoDiario() {
	printf ("Informe a média de atendimento diário: ");
	scanf ("%f", &mediaAtendimentoDiario);
}

float calcularTotalAnual() {
	int diasAno = 365;
	return mediaAtendimentoDiario * diasAno;
}

main() {
	configuracoesPadrao();
	
	lerMediaAtendimentoDiario();
	mediaAtendimentoAnual = calcularTotalAnual();
	
	if (mediaAtendimentoAnual > 20000) {
		printf ("Você está com: Alta demanda anual! (%.2f)", mediaAtendimentoAnual);
		exit(0);
	} else {
		printf ("Você está com: Demanda controlada! (%.2f)", mediaAtendimentoAnual);
	}
	
	encerrar();
}

