#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() { 
  bootstrap("title Sorteio da Festa");
  	int ParticipantesTT, sorteio;
  	
  	printf ("Digite o número de participantes: ");
  	scanf ("%i", &ParticipantesTT);
  	scanf("%c"); // Captura o enter da digitação anterior
  	char nome[ParticipantesTT][20];
  	
  	for (int i = 0; i < ParticipantesTT; i++){
  		printf ("%iº - ", i + 1);
  		gets (nome[i]);
	}
	system ("cls");
	
	srand(time(NULL));
	sorteio = rand() % (ParticipantesTT);
	
	puts ("=========== SORTEIO ===========");
	puts ("O Sorteio foi......");
	system ("pause");
	printf ("====> %s \n", nome[sorteio]);
	puts ("===============================");
	system ("pause");
  encerrar(); 
}
