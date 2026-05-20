#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/


main() { 
  bootstrap("title Tabuada");
  	int tabuada[10][10], numero1, numero2;
  	for (int i = 0; i < 10; i++){
  		for (int j = 0; j < 10; j++){		
  			tabuada[i][j] = (i+1) * (j+1);
  			printf (" %i \t", tabuada[i][j]);
		}
		printf ("\n");
	}
	do {
		cls ();
		printf ("\nDigite o primeiro número (1-10): ");
		scanf ("%i", &numero1);
	} while (numero1 < 1 || numero1 > 10);
	do {
		cls();
		printf ("Digite o segundo número (1-10): ");
		scanf ("%i", &numero2);
	} while (numero2 < 1 || numero2 > 10);
	cls();
	printf ("\n==== RESULTADO ==> %i * %i = %i\n",
			numero1, numero2, tabuada[numero1 - 1][numero2 - 1]);
  encerrar(); 
}
