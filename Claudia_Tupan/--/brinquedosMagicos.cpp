#include "_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar: "exit(0)";
*/
main() { 
  bootstrap();
  	int qtdeTotal, qtdeKits;
  	printf ("Informe quantidade de brinquedos produzido no dia: ");
  	scanf ("%i", &qtdeTotal);
  	
  	qtdeKits = qtdeTotal / 6;
  	for (int i = 1; i <= qtdeKits; i++){
  		printf ("Kit mágico %i\n", i);
	}
	
	printf ("Sobraram %i brinquedos\n", (qtdeTotal % 6));
  encerrar(2); 
}
