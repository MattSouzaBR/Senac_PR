#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Modelos");
  	int total = 0, qtdePessoas;
	for (int i = 5, max = 12; i <= max; i++){
		printf ("Informe quantas pessoas entraram no %i° andar: ", i);
		scanf ("%i", &qtdePessoas);
		total += qtdePessoas;
	}
	printf ("Entraram o total de %i pessoas.", total);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
