#include "Dependencia/_dependencia.cpp"
main() { 
  bootstrap("title Controle Emendas");
  	char respostaUsuario;
  	int encomendasEntrada = 0, encomendasTotal = 0, encomendasContagem = 1;
  	do {
  		if (encomendasTotal > 0){
  			printf ("Você enviou %i encomendas\n\n", encomendasTotal);
		}
		printf ("Por favor, informe quantas encomendas despachou hoje: ");
		scanf ("%i", &encomendasEntrada);
		
		encomendasTotal += encomendasEntrada;
		
		printf ("Deseja cadastrar um novo lote/despache? (S/N): ");
		scanf (" %c", &respostaUsuario);
		cls ();
		encomendasContagem++;
	} while (respostaUsuario == 'S' || respostaUsuario == 's' || respostaUsuario == 'Y' || respostaUsuario == 'y');
	
	cls();
  	
	printf ("Você enviou %i encomendas em %i dia(s)", encomendasTotal, encomendasContagem);
  encerrar(); 
}
/*	
	encerrar(1); = 1 - Pular linha e encerrar | encerrar(2); = 2 - Pular linha, pausar e encerrar
	encerrar(); = Encerrar - Apenas encerrar
*/
