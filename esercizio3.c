
#include <stdio.h>

int main()

{

/*variabili*/
int numero_intero;
int incremento;
int decremento;
/*chiedo all'utente di inserire un numero*/
printf ("\nInserire un nummero intero\n");
scanf ("%d", &numero_intero);
/*incremento e decremento del numero*/
incremento = numero_intero +1;
decremento = numero_intero -1;
/*stampare incremento e decremnto*/
printf ("\nIncremento e di: %d\n", incremento);
printf ("\nDecremento e di: %d\n", decremento);

return 0;
}
