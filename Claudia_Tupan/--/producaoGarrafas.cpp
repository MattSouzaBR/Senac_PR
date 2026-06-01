#include "Dependencia/_dependencia.cpp"

main() { 
  bootstrap("title Produção de Garrafas");
  	int producaoContagem = 10, producaoMaiorHora, producaoMenorHora;
  	float producaoLeitura, producaoMedia = 0.0, producaoTotal = 0.0, producaoMaiorLeitura = 0.0, producaoMenorLeitura = 999999.0;
  	for (int i = 0; i < producaoContagem; i++){
  		printf ("Informe a produção da %i° hora: ", i + 1);
  		scanf("%f", &producaoLeitura);
  		producaoTotal += producaoLeitura;
  		
		// Verifica e valida se entrada é a MAIOR registrada
		if (producaoLeitura > producaoMaiorLeitura){
			producaoMaiorLeitura = producaoLeitura;
			producaoMaiorHora = i + 1;
		} // fim if
		
		// Verifica e valida se entrada é a MENOR registrada
		if (producaoLeitura < producaoMenorLeitura){
			producaoMenorLeitura = producaoLeitura;
			producaoMenorHora = i + 1;
		} // fim if
		
	} // fim for
	producaoMedia = producaoTotal / producaoContagem ;
	cls();
	
	printf ("========= RESULTADOS =========\n"
			"Produções contabilizadas: %i\n"
			"Maior leitura de produção: %.2f (%i° hora)\n"
			"Menor leitura de produção: %.2f (%i° hora)\n"
			"Produção total: %.2f\n"
			"Produção média: %.2f\n", producaoContagem, producaoMaiorLeitura, producaoMaiorHora, producaoMenorLeitura, producaoMenorHora, producaoTotal, producaoMedia);
  encerrar(); 
}

/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
