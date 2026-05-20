#include "Dependencia/_dependencia.cpp"
#define VEND 5
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
main() { 
  bootstrap("title Modelos");
  	float vendas[VEND], totalVendas = 0, maiorVenda = 0;
  	char nome[VEND][30];
  	int posicaoMaior;
  	for(int i = 0; i < VEND; i++){
  		printf (" - %iº nome: ", i+1);
  		//scanf(" %s",, &nome[i]);
  		fgets(nome[i], sizeof(nome[i]), stdin);
  		printf (" - R$ ");
  		scanf("%f", &vendas[i]);
  		getchar(); //capturar ENTER
  		if (maiorVenda < vendas[i]){
  			maiorVenda = vendas[i];
  			posicaoMaior = i; // Guarda a posição do maior
		}
		totalVendas += vendas[i];
	}
	printf ("Total vendido: R$ %.2f \nMaior Venda: R$ %.2f\n Vendedor: %s",
				totalVendas, maiorVenda, nome[posicaoMaior]);
	
  encerrar(); 
}
