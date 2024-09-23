/*ESERCIZIO 1
Siano dati due vettori di interi di lunghezza differente.
Scrivere un programma C che inserisca i valori da tastiera e che
lo faccia anche generandoli in maniera pseudo-casuale. Il programma deve poi generare un terzo
vettore contenente l’intersezione tra i due vettori di input. Implementare sia la variante in cui
le ripetizioni di un elemento nei vettori di input vengono riportate anche nel vettore risultato, sia quella
in cui le ripetizioni non sono inserite nel risultato. Implementare poi la generazione di un quarto vettore contenente
l'unione dei due vettori di input. Il programma deve inoltre stampare gli indirizzi di memoria occupati dagli elementi
dei vettori e la loro dimensione totale in termini di numero di byte.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_1 10
#define MAX_2 12

int main ()
{
    int str1[MAX_1];
    int str2[MAX_2];
    int str3[MAX_2];
    int str4[MAX_1+MAX_2];
    unsigned int temp_str;// VARIABILE PER RAONDOMIZZARE IN BASE AL TEMPO



    for (int i = 0;i < MAX_1 ;i++)
    {

        do
        { puts("Inserisci i valori della prima stringa da 1 a 30: ");
            scanf("%d", &str1[i]);


            if  ( str1[i] > 30 )
                printf("reinserire numero\n");

        }
        while(  str1[i] > 30 );
        system ("cls");

    }
    puts("Numeri prima stringa:");
    for(int i=0;i<MAX_1;i++)
    {
        printf("%d ",str1[i]);
    }

    puts("\nNumeri seconda stringa: "); // stringa generata automaticamente

    srand((unsigned int)time(NULL));
    for(int b = 0;b < MAX_2-1 ; b++)
    {

        str2[b] = rand()%30;
        printf("%d ", str2[b]);
    }
// da verificare
puts("\nStringa intersezione: "); // creo uno stringa dove ottengo solo i valori uguali



for (int i = 0 , c = 0; i < MAX_1-1 || c < MAX_2 - 1; i++)
{
    for( int b = 0 ; b < MAX_2-1 ; b++)
        {
            if ( str1[i] == str2[b] && str3[c] != str3[c-1] &&  c < MAX_2-1)
        {
           int intersezione = str2[b];
           str3[c]=intersezione;
           printf("%d ",str3[c]);
            c++;

        }

    }


}

puts("\nStringa di unione:");
for(int d=0 ; d <= (MAX_1+MAX_2);)
    {
    for(int i=0; i <=MAX_1;i++)
    {str4[d]=str1[i];
    d++;
    }
    for(int i=0; i <=MAX_2;i++)
    {str4[d]=str2[i];
    d++;

    }}

    for (int d=0 ; d<= (MAX_1+MAX_2) ; d++)
{
    printf("%d ",str4[d]);
}
printf ("\n\n Locazione in memoria del vettore1: %d", &str1);
     printf ("\n Locazione in memoria del vettore2: %d", &str2);
     printf ("\n Locazione in memoria del vettore3: %d", &str3);
     printf ("\n Locazione in memoria del vettore4: %d", &str4);

     printf ("\n\n Byte occupati dal vettore1: %d", sizeof (str1));
     printf ("\n Byte occupati dal vettore2: %d", sizeof (str2));
     printf ("\n Byte occupati dal vettore3: %d", sizeof (str3));
     printf ("\n Byte occupati dal vettore4: %d", sizeof (str4));






    return 0;
}
