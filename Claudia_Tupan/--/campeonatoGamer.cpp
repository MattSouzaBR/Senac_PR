#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Modelos");
  	int faseInicial, faseFinal, total = 0, pontosObtidos;
  	printf ("Por favor, informe a fase inicial: ");
  	scanf ("%i", &faseInicial);
  	printf ("Por favor, informe o andar final: ");
  	scanf ("%i", &faseFinal);
	for (int i = faseInicial; i <= faseFinal; i++){
		printf ("Quantos pontos obteve nesta %i° fase: ", i);
		scanf ("%i", &pontosObtidos);
		total += pontosObtidos;
	}
	printf ("Você obteve %i pontos.", total);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
