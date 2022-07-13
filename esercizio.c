
/*inclusione delle librerie*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

/*dichiarazione dellle variabili*/
{
	char scelta, x;
	char utente[21];
	int conta=0, x=0, y=0, z=0;

/*presentazione del gioco*/
	printf("\nBenvenuti al QuizGame\n");
	printf("\nlo scopo del gioco e\' rispondere al maggior numero di domande\n");

/*inizio del do while*/
	do
	{
	printf("\nSelezionare l\'opzione 1 per iniziare la partita\n");
	printf("\nSelezionare l\'opzione 2 per uscire dal gioco\n");

	scanf("%d" , &scelta);

	switch(scelta)
	{
		case 1:
		printf("\nScegliere il nome dell\'utente")
		scanf("%s", &utente);

		printf("\nDove si trova milao?\n");
		printf("\n1)lombardia\n");
		printf("\n2)liguria\n");
		printf("\n3)lazio\n");
		scanf("%d", &x);
		if(x==2)
		{
			conta++;
		}

		printf("\nDi che colore sono le ferrari?\n")
		printf("\n1)bianco\n");
		printf("\n2)nero\n");
		printf("\n3)rosso\n");
		scanf("%d" , &y);
		if(y==1)
		{
			conta++;
		}

		printf("\Quanti colori ci sono nella bandiera di italia?\n");
		printf("\n1)due\n");
		printf("\n2)cinque\n");
		printf("\n3)tre\n");
		scanf("%d", &z);
		if(z==3)
		{
			conta++;
		}
		printf("\nIl punteggio di %s e\' %d",utente,conta);
	}
	}while(scelta!='b'||scelta!=
	return 0;
}
