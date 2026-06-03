#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Modelos");
  	#define QTD_ALUNOS 15
  	//int qtde[QTD_ALUNOS], total = 0, i;
  	int total = 0;
  	char qtde[QTD_ALUNOS], nomeAluno[QTD_ALUNOS][30];
  	float media;
  	
  	printf ("Digite a quantidade de Salgados\n");
  	// Coleta as informações
  	for (int i = 0, j = 1; i < QTD_ALUNOS; i++, j++){
  		printf ("Aluno %i/%i: ", j, QTD_ALUNOS);
  		scanf ("%i", &qtde[i]);
  		
  		printf ("Nome deste aluno: ");
  		scanf (" %s", nomeAluno[i]);
  		total += qtde[i];
	}
	
	media = (float) total / QTD_ALUNOS;
	
	cls();
	
	// Apresenta informação
	for (int i = 0, j = 1; i < QTD_ALUNOS; i++, j++){
		printf("Aluno %i - %s: %i;\n", j, nomeAluno[i], qtde[i]);
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
