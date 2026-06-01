#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Pesquisa de Evento");
  	char respostaUsuario;
  	int avaliacaoEntrada, avaliacaoTotal, avaliacaoQuantidade = 1;
  	int notasCriterioExcelente = 9, notasCriterioBoa = 7, notasCriterioRegular = 5;
  	int notasQuantidadeExcelente = 0, notasQuantidadeBoa = 0, notasQuantidadeRegular = 0, notasQuantidadeRuim = 0;
  	float avaliacaoMedia = 0;
  	
  	do {
  		cls();
  		printf ("Por favor, informe a nota de avaliação que você dá para este evento (1 Horrível - 10 Perfeito): ");
  		scanf ("%i", &avaliacaoEntrada);
  		avaliacaoTotal += avaliacaoEntrada;
  		
  		if (avaliacaoEntrada >= notasCriterioExcelente) {
  			notasQuantidadeExcelente++;
		} else if (avaliacaoEntrada >= notasCriterioBoa) {
			notasQuantidadeBoa++;
		} else if (avaliacaoEntrada >= notasCriterioRegular){
			notasQuantidadeRegular++;
		} else {
			notasQuantidadeRuim++;
		}
  		
  		cls();
  		
  		printf ("Avaliação registarada!\n"
		  		"Cadastrar uma nova avaliação? (S/N): ");
  		scanf (" %c", &respostaUsuario);
  		
  		avaliacaoQuantidade++;
	} while (respostaUsuario == 'S' || respostaUsuario == 's' || respostaUsuario == 'Y' || respostaUsuario == 'y');
  	
  	avaliacaoMedia = avaliacaoTotal / avaliacaoQuantidade;
  	
  	cls();
  	
  	printf ("========= RESULTADO =========\n"
	  		"QUANTIDADES\n"
			"\tExcelentes: %i\n"
			"\tBoas: %i\n"
			"\tRegulares: %i\n"
			"\tRuins: %i\n"
			"\n"
			"TOTAIS\n"
			"\tNotas coletadas: %i\n"
			"\tMédia avaliação: %.2f\n", notasQuantidadeExcelente, notasQuantidadeBoa, notasQuantidadeRegular, notasQuantidadeRuim, avaliacaoQuantidade, avaliacaoMedia);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
