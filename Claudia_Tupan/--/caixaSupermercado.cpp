#include "_dependencia.cpp"

main() { 
  bootstrap();
  	float valorProduto, totalCompra = 0.0;
  	printf ("Digite o valor dos produtos: (0 - para encerrar)\n");
  	do {
  		printf (" + R$ ");
  		scanf ("%f", &valorProduto);
  		totalCompra += valorProduto;
	} while (valorProduto != 0);
	printf ("Total a pagar R$ %.2f", totalCompra);
  encerrar();
}
