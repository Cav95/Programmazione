/*L’utente pensa ad un numero e il computer lo deve indovinare compiendo le seguenti operazioni.

L’utente fissa un intervallo entro cui generare il valore da indovinare (min, max). Se i valori inseriti non rispettano il vincolo 0
L’utente pensa ad un numero compreso tra min e max.
Il programma cerca di indovinare la scelta dell’utente e propone un numero. A seconda della situazione l’utente deve dire al programma se
oil numero da indovinare è più piccolo;
il numero da indovinare è più grande;
ha indovinato.
Scrivere una versione di programma in cui non c'è limite al numero di tentativi che il computer può fare per indovinare il numero e
scriverne un'altra in cui invece viene posto tale limite.

Il programma deve stampare il numero di tentativi fatti.*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int massimo,minimo,risultato, scelta, tentativi,tentmax;

    tentativi=0; // inizializzo i tentaivi a 0


do
    {
    printf("scegli un numero massimo:"); // faccio scegliere il numero massimo e minimo
    scanf("%d",&massimo);
    fflush(stdin);

    printf(" scegli un numero minimo:");
    scanf("%d",&minimo);
    fflush(stdin);

if (massimo < minimo  || minimo <= 0 )
    {
    printf("\nreinserire dati il massimo deve essere maggiore del minimo\n");
}

    }
while (massimo < minimo || minimo <= 0);



printf("numero massimo di tentativi= ");
scanf("%d",&tentmax);
fflush(stdin);


srand(time(NULL));

//--tentmax;
do
{
    risultato = minimo + (rand() % (massimo-minimo+1)); // faccio scegliere al computer un numero

    printf("risultato= %d\n", risultato);
    printf("se il numero è corretto premi 1\nSe il numero pensato è maggiore premi 2\nSe il numero è minore premi 3\n");
    scanf("%d", &scelta);
    printf("numero tentativi rimasti: %d\n",tentmax);  // in base alla scelta decido come proseguire
    ++tentativi;
    --tentmax;

if (scelta == 2 ){
    minimo = risultato +1 ;

        }

if (scelta == 3 )
    {
    massimo = risultato - 1;}


if (tentmax == 0)
             {
            printf("hai vinto! non ho indovinato in tempo\n");
            break;
            }

    }
while (scelta != 1 || tentmax!=0 );

    if (scelta == 1)
        {
            printf("numero corretto\n");
            printf("numero tentativi:%d\n",tentativi);
    }

return 0;

}
