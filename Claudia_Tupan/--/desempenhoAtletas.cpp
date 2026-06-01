#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Desempenho de Atletas");
  	int distanciaEntrada, distanciaMeta = 5, distanciaMaior = 0;
  	char nomeEntrada, nomeAtleta[8][30];
  	int distanciaPercorrida[8][15];
  	for (int i = 0; i < 8; i++) {
  		printf ("Por favor, informe o nome do %i atleta: ", i + 1);
  		gets (nomeAtleta[i]);
  		
  		printf ("Por favor, informe a distancia percorrida pelo %i atleta: ", i + 1);
  		scanf ("%i", &distanciaEntrada);
  		//strcpy(distanciaPercorrida[i], distanciaEntrada);
  		gets (distanciaPercorrida[i]);
	}
  	
  	for (int i = 0; i < 8; i++){
  		printf ("Nome atleta: %c, Distância: %c\n", nomeAtleta[i], distanciaPercorrida[i]);
	}
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
