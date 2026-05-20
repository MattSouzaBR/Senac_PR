#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
int leiaTotalPecas(int ttPecas = 0) {
	printf("informe o total de peças analisadas: ");
	scanf("%i", &ttPecas);
	return ttPecas;
}

main() { 
  bootstrap("title Motor Avião");
	int ttPecas = leiaTotalPecas(), pecaLeve, pecaPesada;
	float pesoPecas[ttPecas][2], pesoLeve = 99999999, pesoPesado = 0;
	puts ("Informe o peso das peças que estão sendo avaliadas: ");
	for (int i = 0; i < ttPecas; i++){
		for (int j = 1; j < 2; j++){
			printf (" Peça %i: ", i+1);
			scanf("%f", &pesoPecas[i][j]);
			
			if (pesoPecas[i][j]<pesoLeve){
				pesoLeve = pesoPecas[i][j];
				pecaLeve = i;
			}
			
			if (pesoPecas[i][j]>pesoPesado){
				pesoPesado = pesoPecas[i][j];
				pecaPesada = i;
			}
		}
	}
	
		printf ("Peça %i mais pesada - %.1f \nPeça %i mais leve - %.1f",
				pecaPesada +1, pesoPesado, pecaLeve +1, pesoLeve);
  encerrar(); 
}
