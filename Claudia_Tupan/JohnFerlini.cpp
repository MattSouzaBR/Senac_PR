#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL, "Portuguese");
	
	// Declarar
	int idade1, idade2;
	
	// Inicializar
	idade1 = 0;
	idade2 = 0;
	
	printf("Informe a 1° idade: ");
	scanf("%i", &idade1);
	
	printf("Informe a 2° idade: ");
	scanf("%i", &idade2);
	
	printf("A primeira idade é: %i", idade1);
	printf("\nA segunda idade é: %i", idade2);
	
	if (idade1 > idade2) {
		printf("\nIdade 1 é maior que idade 2");
	} else {
		printf("\nIdade 2 é maior que idade 1");
	}
}
