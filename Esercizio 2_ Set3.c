/*ESERCIZIO 2
Scrivere un programma che legga da tastiera un testo terminato dal carattere # e poi stampi le statistiche relative
al numero di spazi, al numero di caratteri di nuova linea, al numero di caratteri letti,
al numero di quelli maiuscoli, etc., utilizzando almeno una volta tutte le funzioni dell’header ctype.h.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40

int main ()
{
    char ch ; // prendere carattere singolo
    int x = 0; // numero caratteri nel testo di buffer
    int tot = 0, alf_n = 0 ,alf = 0 , crt = 0 , dec = 0 , min = 0 , stp = 0 , pnt = 0 , spz = 0 , mai = 0 , esa = 0; //valori per esaminare il testo

    while (((ch=getchar())!= EOF) && x < MAX && ch != '#')
    {
        ++tot;

        if (isalnum(ch))
            ++alf_n;

            if (isalpha(ch))
            ++alf;

                if (iscntrl(ch))
                ++crt;

                    if (isdigit(ch))
                    ++dec;

                        if (islower(ch))
                        ++min;

                            if (isprint(ch))
                            ++stp;

                                if (ispunct(ch))
                                ++pnt;

                                    if (isspace(ch))
                                    ++spz;

                                        if (isupper(ch))
                                        ++mai;

                                            if (isxdigit(ch))
                                            ++esa;


                }


            printf("Valori totali=%d\n", tot);
            printf("Valori alfanumerici=%d\n", alf_n);
            printf("Valori alfabetici=%d\n", alf);
            printf("Valori controllo=%d\n", crt);
            printf("Valori decimali=%d\n", dec);
            printf("Valori minuscoli=%d\n", min);
            printf("Valori stampabili=%d\n", stp);
            printf("Numero di punti=%d\n", pnt);
            printf("Numero di spazzi=%d\n", spz);
            printf("Valori maiuscoli=%d\n", mai);
            printf("Valori esadecimali=%d\n", esa);

    return 0;

}
