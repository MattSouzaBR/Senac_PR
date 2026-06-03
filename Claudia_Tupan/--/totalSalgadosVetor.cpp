#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Modelos");
  	#define QTD_ALUNOS 15
  	int qtde[QTD_ALUNOS], total = 0, i;
  	float media;
  	
  	printf ("Digite a quantidade de Salgados\n");
  	// Coleta as informações
  	for (i = 0; i < QTD_ALUNOS; i++){
  		printf ("Aluno %i/%i: ", i + 1, QTD_ALUNOS);
  		scanf ("%i", &qtde[i]);
  		total += qtde[i];
	}
	
	media = (float) total / QTD_ALUNOS;
	
	cls();
	
	// Apresenta informação
	for (i = 0; i < QTD_ALUNOS; i++){
		printf("Aluno %i - %i;\n", i + 1, qtde[i]);
	}
	
	printf ("\nTotal: %i"
			"\nMédia: %.01f"
			,total, media);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
