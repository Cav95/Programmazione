/*Scrivere un programma C dove sono inizializzate una variabile di tipo int,
una di tipo float, una di tipo double, una di tipo char, ed un array di 5 interi
(precisamente con i valori 10, 20, 30, 40, 50). Inizializzare un puntatore per ciascuna di queste variabili.
Assegnare ad ogni variabile un valore tramite l'utilizzo della funzione scanf.
Visualizzare il valore di ogni variabile in due modi: prima tramite accesso diretto alla variabile e
a seguito tramite l'utilizzo del suo puntatore (accesso indiretto). Visualizzare la posizione in memoria della variabile tramite
l'utilizzo diretto della variabile e tramite il suo puntatore. Visualizzare la posizione in memoria del puntatore.

Modificare il contenuto di ogni variabile e mostrare nuovamente le varie informazioni.
Porre attenzione nel mostrare messaggi di output dettagliati che chiariscano ciò che si visualizza,
in modo che il programma risulti un valido ausilio per spiegare il funzionamento dei puntatori.*/
#include <stdio.h>
#define LUSH fflush(stdin)

int main()
{
int i ;
float fl ;
double db ;
char ch ;
int ai[5] = {10,20,30,40,50} ;

int *ptri = &i ;
float *ptrfl = &fl ;
double *ptrdb = &db ;
char *ptrch = &ch ;
int *ptrai = ai ;

printf("Variabile int = ");
scanf("%d",&i);
LUSH;

printf("Variabile float = ");
scanf("%f",&fl);
LUSH;

printf("Variabile double = ");
scanf("%lf",&db);
LUSH;

printf("Variabile char = ");
scanf("%c",&ch);
LUSH;

int k ;

puts("\n\nVariabili tramite accesso diretto alla variabile :\n");

printf("Variabile int = %d\n", i);
printf("Variabile float = %.2f\n", fl);
printf("Variabile double = %.2lf\n", db);
printf("Variabile char = %c\n", ch);

for(k=0 ; k<5 ; k++)
    {
    printf("Variabile array di interi [%d] = %d\n",k , ai[k]);
    }


    puts("\n\nVariabili tramite accesso al puntatore :\n");

printf("Variabile int = %d - Posizione in memoria puntatore : %x\n", *ptri, ptri);
printf("Variabile float = %.2f - Posizione in memoria puntatore : %x\n", *ptrfl , ptrfl);
printf("Variabile double = %.2f - Posizione in memoria puntatore : %x\n", *ptrdb , ptrdb);
printf("Variabile char = %c - Posizione in memoria puntatore : %x\n", *ptrch , ptrch);

for(k=0 ; k<5 ; k++)
    {
    printf("Variabile array di interi [%d] = %d - Posizione in memoria puntatore : %x\n",k , ptrai[k] , ptrai+k );
    }

//MODIFICO I VALORI

i += 5;
fl += 2.5;
db += 5.5;
ch += 1;
for(k=0 ; k<5 ; k++)
    {
    ai[k]+=5;
    }

  puts("\n\nVariabili tramite accesso diretto alla variabile modificata :\n");

printf("Variabile int (i += 5) = %d\n", i);
printf("Variabile float (fl += 2.5) = %.2f\n", fl);
printf("Variabile double (db += 5.5) = %.2f\n", db);
printf("Variabile char (ch += 1) = %c\n", ch);

for(k=0 ; k<5 ; k++)
    {
    printf("Variabile array di interi (ai[%d]+=5) = %d\n",k , ai[k]);
    }


    puts("\n\nVariabili tramite accesso al puntatore modificate :\n");

*ptri += 5;
*ptrfl += 2.5;
*ptrdb += 5.5;
*ptrch += 1;
for(k=0 ; k<5 ; k++)
    {
    ptrai[k]+=5;
    }

printf("Variabile int (*ptri += 5) = %d - Posizione in memoria puntatore : %x\n", *ptri, ptri);
printf("Variabile float (*ptrfl += 2.5) = %.2f - Posizione in memoria puntatore : %x\n", *ptrfl , ptrfl);
printf("Variabile double (*ptrdb += 5.5) = %.2f - Posizione in memoria puntatore : %x\n", *ptrdb , ptrdb);
printf("Variabile char (*ptrch += 1) = %c - Posizione in memoria puntatore : %x\n", *ptrch , ptrch);

for(k=0 ; k<5 ; k++)
    {
    printf("Variabile array di interi (ptrai[%d]+=5) = %d - Posizione in memoria puntatore : %x\n",k , ptrai[k] , ptrai+k );
    }



return 0;
}
