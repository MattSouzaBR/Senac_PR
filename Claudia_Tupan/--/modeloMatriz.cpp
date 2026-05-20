#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() { 
  bootstrap("title Modelo Matriz");
  	// linhas x colunas
  	float ponte[4][3], pesoTotal=0;
  	puts ("Digite o peso em cada ponto da ponte: ");
  	// percorre a linha
  	for (int i = 0; i < 4; i++){
  		// percorre a coluna
  		for (int j = 0; j < 3; j++){
  			printf (" ponto - %i - %i: ", (i+1), (j+1));
  			scanf("%f", &ponte[i][j]);
  			pesoTotal += ponte[i][j];
		}	
	}
	cls();
	puts ("=========== RESUMO CARGA ===========");
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			printf (" %.1f \t", ponte[i][j]);
		}
		printf ("\n");
	}
	printf ("======================\nTotal: %.1f\n", pesoTotal);
	puts ("====================================");
  encerrar(); 
}
