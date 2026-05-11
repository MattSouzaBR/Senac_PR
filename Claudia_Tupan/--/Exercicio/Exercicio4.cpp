#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <string.h>
void configuracoesPadrao(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 4");
    system ("cls"); 
}

void encerrar() {
    system("echo. & echo. & pause");
}

// --- Início -----------------------------------------
int codigoServico, quantidadeHorasTrabalhadas;
float valorServico, valorTT;

void lerCodigoServico() {
	printf ("Informe o código do serviço (1-4): ");
	scanf ("%i", &codigoServico);
	
	if (codigoServico < 1 || codigoServico > 4){
		printf ("Código inválido. O programa não pode continuar!");
		exit(0);
	}
}

void lerQuantidadeHorasTrabalhadas(){
	printf ("Informe a quantidade de horas trabalhadas: ");
	scanf ("%i", &quantidadeHorasTrabalhadas);
}

void verificarValorServico (){
	char nomeServico [30];
	switch (codigoServico){
		case 1:
			strcpy(nomeServico, "Formatação");
			valorServico = 120;
			break;
		case 2:
			strcpy(nomeServico, "Troca de peças");
			valorServico = 180;
			break;
		case 3:
			strcpy(nomeServico, "Instalação de Software");
			valorServico = 90;
			break;
		default: // A função 'lerCodigoServico()' já valida a quantidade de casos
			strcpy(nomeServico, "Limpeza interna");
			valorServico = 70;
	}
		printf ("Serviço Contratado: %s\n", nomeServico);
		printf ("Valor do Serviço: R$ %.2f\n", valorServico);
}

float calcularValorFinal() {
	return quantidadeHorasTrabalhadas * valorServico;
}

main() { 
	configuracoesPadrao();
	
	lerCodigoServico();
	lerQuantidadeHorasTrabalhadas();
	verificarValorServico();
	valorTT = calcularValorFinal();
	printf ("O valor total é: R$ %.2f", valorTT); 
	
   	encerrar ();
}
