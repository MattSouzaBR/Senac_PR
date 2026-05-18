#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() {
  bootstrap();
  	float peso[10], soma = 0, media;
  	puts ("Digite os pesos das peças: ");
  	for (int i = 0; i < 10; i++) {
  		printf ("%iª peça: ", i + 1); // i + 1 para não mostrar a posição
  		scanf ("%f", &peso[i]);
  		soma += peso[i];
	}
	
	media = soma / 10;
	system ("cls");
	
	puts ("============ RELATÓRIO ============");
	for (int i = 0; i < 10; i++) {
		printf("%iª peça: %.3f\n", i + 1, peso[i]);
	}
	printf ("Média total: %.3f\n", media);
  encerrar(); 
}
