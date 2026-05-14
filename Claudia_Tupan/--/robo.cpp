#include "_dependencia.cpp"
int informe_degrau () {
	int degrau;
	scanf("%i", &degrau);
	return degrau;
}

void loopCrescente (int degrauInicial, int degrauFinal){
	// i = 2; 2 <= 4 ; i++ (2+1=3, 3+1=4)
	for (int i = degrauInicial; i <= degrauFinal; i++){
		printf ("%i\n", i);
	}
}
	
void loopDecrescente (int degrauFinal, int degrauInicial){
	// i 4; 4 >= 2; i++ (4-1=3, 3-1=2)
	for (int i = degrauFinal; i >= degrauInicial; i--){
		printf ("%i\n", i);
	}
}

main() { 
  bootstrap();
  	int degrauInicial, degrauFinal;
  	
  	printf ("Informe o degrau Inicial: ");
  	degrauInicial = informe_degrau();
  	
  	printf ("Informe o degrau Final: ");
  	degrauFinal = informe_degrau();
  	
	if (degrauInicial > degrauFinal){
  		loopCrescente(degrauInicial, degrauFinal);
	} else if (degrauInicial < degrauFinal){
		loopDecrescente(degrauFinal, degrauInicial);
	}
  encerrar();
}
