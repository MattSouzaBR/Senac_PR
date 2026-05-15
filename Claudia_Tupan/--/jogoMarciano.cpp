#include "_dependencia.cpp"

main() { 
  bootstrap();
  	int alvo, arvore, balas = 0;
  	printf ("Marciano, escolha uma árvore (1-100): ");
  	scanf ("%i", &arvore);
  	system ("cls");
  	for (balas = 1; balas <= 5; balas++){
  		printf ("Caçador, escolha o %i° alvo: ", balas);
  		scanf ("%i", &alvo);
  		
  		if (alvo < arvore) {
  			printf ("jkashdf hajskdfh (Estou mais à direita)\n");
		} else if (alvo > arvore) {
			printf ("sdhflkj laksdajf (Estou mais à esquerda)\n");
		} else {
			printf ("ohhhhh \\ö// uujaj (morri!) _e/ 'uhuuu'");
			break;
		}
		
		if (balas == 5) {
			printf ("Deseja recarregar? (S/N)");
			char recarrega;
			scanf(" %c", &recarrega);
			if (recarrega == 's' || recarrega == 'S'){
				balas = 2;
			}
		}
	  }
	  
	  if (balas > 5) {
	  	printf ("Hasiahsi (Você foi capturado! Venha virá comigo para Marte... à força!)");
	  }
	  
  encerrar();
}
