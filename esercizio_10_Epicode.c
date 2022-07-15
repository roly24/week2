#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main ()

{

	/*char scelta = {'\0'};*/ //qui l'errore sono la presenza delle  due parentesi graffe 
	char scelta = '\0';

   	do{

	menu ();
	scanf (" %c", &scelta); //corrretta la %d perche abbiamo un char quindi va inserito %c

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
		default://ho aggiunto il default per inserire la risposta non valida
		printf("Inserisci in maiuscolo la tua scelta\n");
		break;
	}
	}while ( scelta != 'A' || scelta != 'B' || scelta !='C');//ho aggiunto il do while per far iniziare di nuovo il menu nel caso non vengano inserite le scelta proposte

	return 0;

}


void menu ()
{
	printf ("\nBenvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	int  a,b = 0;//ho tolto lo short perche
	printf ("Inserisci il primo numero da moltiplicare\n");//ho aggiunto due printf perche con la traccia anteriore non era possibile una buona user expirience
	scanf ("%d", &a);//qui è necessario mettere %d al posto di %f perche abbiamo l'int
	printf("Inserisci il secondo numero da moltiplicare\n");
	scanf ("%d", &b);

	int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        float divisione = a / b;//qui inseriamo il float er avere numeri con la virgola perche stiamo divedendo, va tolto la percentuale e messa / che in linguaggio c si usa per fare la divisione
        printf ("La divisione tra %d e %d e': %g", a,b,divisione);//qui ho aggiunto la %g al posto del %d per avere un risultato in decimali 
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
