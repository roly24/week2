def perimetro(): # Il def definisce una funzione
        print("Il programma calcola il perimetro di una figura geometrica")
        print("""
        - Quadrato>>1
        - Rettangolo>>2
        - Cerchio>>3
        - Triangolo Scaleno>>4""")

        print("Inserire la scelta: ") #dichiarazione inizio del programma
        scelta = int(input(">>> "))
        if scelta == 1: #L'IF ci permette di eseguire uno dei vari calcoli che l'utente sceglierà 
                print("Hai selezionato il perimetro del Quadrato")
                lato = int(input("inserisci il valore del lato quadrato "))
                print("Il perimetro del Quadrato, avente lato", lato, "è:", lato*4)
        elif scelta == 2:
                print("Hai selezionato il perimetro del Rettangolo")
                base = int(input("Inserisci il valore della base "))
                altezza = int(input("Inserisci il valore dell'altezza "))
                print("Il perimetro del Rettangolo, avente base", base, " e altezza", altezza, "è: ",base*2 + altezza*2)
        elif scelta == 3:
                print("Hai selezionato il perimetro del Cerchio")
                raggio = int(input("Inserisci il valore del raggio "))
                diametro = int(raggio*2)
                print("Il perimetro del Cerchio, avente raggio", raggio, "è:", diametro*3.14)
        elif scelta == 4:
                print("Hai selezionato il perimetro del Triangolo Scaleno")
                latoa = int(input("Inserisci il valore lato a "))
                latob = int(input("Inserisci il valore lato b "))
                latoc = int(input("Inserisci il valore lato c "))
                print("Il perimetro del Triangolo Scaleno, avente lato a", latoa, " lato b", latob, " e lato c",latoc, "è:", latoa+latob+latoc)
        else:            #usiamo l?ELSE nel caso non venga inserito nessuna scelta appare il seguente messaggio
                print("Inserire una scelta valida")
perimetro()               #fine del programma,dove ci dara il risultato in base alla scelta


