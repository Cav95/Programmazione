/*ESERCIZIO 1
Indovina il continente

In questo gioco, il computer visualizza una coppia di coordinate generata in maniera random sullo schermo per un breve periodo di tempo.
Il giocatore deve indovinare a quale continente appartiene la coppia di coordinate generate; fino a quando l’utente indovina,
il gioco prosegue con la generazione di una nuova coppia di coordinate. L'obiettivo è quello di continuare il processo il più a lungo possibile.

Al termine del gioco il programma calcolerà un punteggio ottenuto, quantomeno sulla base del numero di iterazioni eseguite
(è possibile valutare altri criteri, ad esempio, la velocità con cui l’utente risponde,
 oppure un calcolo basato sulla difficoltà delle coordinate prodotte) e inviterà il giocatore a giocare di nuovo.

N.B.: i margini che definiscono i confini dei vari continenti sono decisi da voi*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>


main()
{
    int gr_O,pr_O,se_O; // coordinate orizzontali
    int gr_V,pr_V,se_V; // coordinate verticali
    int am,eu,as,oc,af; // continenti
    int cont,soluz; //conteggio soluzioni
    float punt,tent; // Variabili Punteggio

    am = 1 ; //America
    eu = 2 ; //Europa
    as = 3 ; //Asia
    oc = 4 ; //Oceania
    af = 5 ; // Africa

    tent = 0 ;

    printf("Benvenuto nel gioco!\n"                          // descrizione funzionamento gioco
           "Tra poco apparira sullo schermo una coordinata di questo mondo piatto.\n"
           "Prova ad indovinare a che continente appartiene\n"
           "Attento al tempo... non rimarra li per sempre...\n"
           "Premi invio e il gioco comincia!\n\n");

           system("pause");

srand (time (NULL) );

do
{
gr_O = (rand() % 360) ; // gradi orizzontali
pr_O = (rand() % 99) ; // primi orizzontali
se_O = (rand() % 99) ;// sencondi orizzontali

gr_V = (rand() % 360) ; // gradi verticali
pr_V = (rand() % 99) ; // primi verticali
se_V = (rand() % 99) ; // secondi verticali

printf("\n%d\ %d\' %d\"ORRIZONTALE \n%d\ %d\" %d\" VERTICALE \n" , gr_O,pr_O,se_O,gr_V,pr_V,se_V );
sleep (6);
system("cls"); // pulizia schermo

    if ((0 <= gr_O) && (gr_O<= 180) && (0 <= gr_V) && (gr_V <= 100)) // AMERICA
    {
    cont = 1 ;
    }

     if ((0 <= gr_O) && (gr_O <= 180 ) && (100 < gr_V) && (gr_V <= 200)) //EUROPA
    {
        cont = 2 ;
    }

    if ((0 <= gr_O) && (gr_O <= 270 ) && (200 < gr_V) && (gr_V <= 360)) //ASIA
    {
        cont = 3 ;
    }

    if ((180 < gr_O) && (gr_O <= 360 ) && (0 <= gr_V) && (gr_V <= 200)) //OCEANIA
    {
        cont = 4 ;
    }

    if ((270 < gr_O) && (gr_O <= 360 ) && (200 < gr_V) && (gr_V <= 360)) //AFRICA
    {
        cont = 5 ;
    }

    printf("TEMPO SCADUTO!\n");
    do
    {
        printf("Scegli ora un continente:\n" // scelta continente
          "America = 1\n"
            "Europa = 2\n"
                "Asia = 3\n"
                    "Oceania = 4\n"
                        "Africa = 5\n\n"
                        "Per me il giusto e: ");

    scanf("%1d", &soluz );


    }
    while (soluz > 5 );

    printf("\n\n");

    if (cont == soluz)
    {
    printf("Hai indovinato!\n");
    ++tent;
    break;
    }

    if (cont != soluz)
    {
    printf("Non hai indovinato... Riprova ancora una volta!\n");
    printf ("Risposta corretta= %d", cont );
    ++tent;
    sleep (4);
    system("cls");
    printf("PRONTI?\n");
    sleep (2);
    printf("VIA!\n"); // risposta negativa si riparte col gioco

    }


}while ( cont != soluz );

punt = ((1/tent)*100);

printf("Punteggio : %.2f", punt);
           return 0;

}
