#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Modelos");
  	int andarInicial, andarFinal, total = 0, litrosAndar;
  	printf ("Por favor, informe o andar inicial: ");
  	scanf ("%i", &andarInicial);
  	printf ("Por favor, informe o andar final: ");
  	scanf ("%i", &andarFinal);
	for (int i = andarInicial, max = andarFinal; i <= max; i++){
		printf ("Quantos litros foram usados no %i° andar: ", i);
		scanf ("%i", &litrosAndar);
		total += litrosAndar;
	}
	printf ("Foram gastos %i litros de tinta.", total);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
