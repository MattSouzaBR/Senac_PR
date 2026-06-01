#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() { 
  bootstrap("title Modelos");
  	float lerTemperatura, temperatura[10];
  	for (int i = 0; i < 10; i++){
  		printf ("\nInforme a %i° temperatura: ", i);
  		scanf("%f", &lerTemperatura);
	}
  encerrar(); 
}
