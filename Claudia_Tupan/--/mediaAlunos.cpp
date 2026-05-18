#include "Dependencia/_dependencia.cpp"
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() { 
  bootstrap("title Média Alunos");
  	float media[5], nota1, nota2;
  	char nomeAluno[5][20], situacao[5][11];
  	int i;
  	for (i = 0; i < 5; i++){
  		puts ("Escreva as informações dos alunos: ");
  		printf (" - %i° Nome do Aluno: ", i + 1);	
  		if (i == 1){
			scanf ("%c");
		} else {
			scanf ("%c");
		}
		
  		
  		gets(nomeAluno[i]);
  		
  		puts (" - Digite as notas: ");
  		printf ("   - 1° nota: ");
  		scanf ("%f", &nota1);
  		printf ("   - 2° nota: ");
  		scanf ("%f", &nota2);
  		br();
  		media[i] = (nota1 + nota2) / 2;
  		cls();
  		if (media[i] >= 7){
  			strcpy (situacao[i], "Aprovado");
  		} else {
  			strcpy (situacao[i], "Rerovado");
		}
	}
	cls();
  	puts ("========== BOLETIM ==========");
  	for (i = 0; i < 5; i++){
  		printf ("%s \t\t %.1f \t %s\n", nomeAluno[i], media[i], situacao[i])	;
	}
  	puts ("=============================");
  encerrar(); 
}
