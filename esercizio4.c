

#include <stdio.h>
int main ()
{
	/*dichiarazioni delle  variabili*/
	int numerouno;
	int numerodue;
	float media;

	/*chiedi al utente un numero*/
	printf("inserisci numero\n" );
	scanf("%d",&numerouno);

	printf("inserisci secondo numero\n");
	scanf("%d",&numerodue);

	/*media dei due numeri*/
	media = (numerouno + numerodue)/2;

	/*stampa la media*/
	printf("media di valori: %4.0f" , media);
return 0;
}
