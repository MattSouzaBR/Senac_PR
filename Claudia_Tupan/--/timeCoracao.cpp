#include "_dependencia.cpp"

int lerCodigoEstado () {
	int codigo;
		printf ("Por favor, informe o código do estado: \n"
				"1 - Rio de Janeiro\n2 - São Paulo\n3 - Sair\n\nDigite o código: ");
		 do {
		 scanf ("%i", &codigo);
		 if (codigo < 1 || codigo > 3) {
		 	printf ("Código não encontrado! Tente novamente: ");
		 }
		 if (codigo == 3) {
		 	break;
		 }
		} while (codigo < 1 || codigo > 3);
	return codigo;
	
}

int fazerPesquisa(){
	int codigo;
	codigo = lerCodigoEstado();
	return codigo;
}

void calcularPesquisa (){
	int codigo, qtdeRJ = 0, qtdeSP = 0;
	do {
		codigo = fazerPesquisa();
		switch (codigo) {
			case 1:
				qtdeRJ++;
				break;
			case 2:
				qtdeSP++;
				break;
			case 3:
				break;
		}
		system ("cls");
		printf ("Computado: RJ %i, SP %i\n\n", qtdeRJ, qtdeSP);
	} while (codigo != 3);
		system ("cls");
		printf ("\nVocê escolheu sair!\n");
		printf ("Computados: RJ %i, SP %i\n\n", qtdeRJ, qtdeSP);
		printf ("\n\nObrigado pela sua participação!");
}

main() { 
  bootstrap();
	calcularPesquisa();
  encerrar();
}
