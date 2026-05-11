#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
void configuracoesPadrao(){
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
   	system ("chcp 1252 > nul"); 
   	system ("title Exercício 3");
    system ("cls"); 
}

void encerrar() {
    system("echo. & echo. & pause");
}

// --- Início -----------------------------------------
int quantidadeContratos;
float valorUnitario, descontoAplicado, valorTotal;

void lerQuantidadeContratos() {
	printf ("Informe a quantidade de contratos: ");
	scanf ("%i", &quantidadeContratos);
}

void lerValorUnitario() {
	printf ("Informe o valor unitário: R$ ");
	scanf ("%f", &valorUnitario);
}

float calcularDesconto() {
	if (quantidadeContratos == 1){
		descontoAplicado = 0.02; // 2%
	} else if (quantidadeContratos >= 2 && quantidadeContratos <= 4){
		descontoAplicado = 0.05; // 5%
	} else if (quantidadeContratos >= 5 && quantidadeContratos <= 7) {
		descontoAplicado = 0.08; // 8%
	} else if (quantidadeContratos > 7){
		descontoAplicado = 0.12; // 12%
	} else {
		descontoAplicado = 0; // Sem contratos, sem descontos: 0%
	}
	
	return descontoAplicado;
}

float calcularValorTotal(){
	return valorUnitario * quantidadeContratos - (valorUnitario * descontoAplicado);	
}

main() {
	configuracoesPadrao();
	
	lerQuantidadeContratos();
	lerValorUnitario();
	calcularDesconto();
	valorTotal = calcularValorTotal();
	printf ("%.2f", valorTotal);
  
  	encerrar();
}

	
