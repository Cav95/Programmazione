/*Scrivere un programma C che mostri l’utilizzo di tutti gli operatori studiati.
Il programma deve inoltre mostrare il comportamento scorretto che si ottiene utilizzando tipi non appropriati
alla dimensione delle variabili, quello che si ottiene usando più operatori con side effect all’interno della stessa istruzione,
quello che si ottiene quando le regole di conversione implicita sono applicate e quando si supera il range dei valori disponibili per un tipo di dato.

Il programma deve poi mostrare l’utilizzo di tutte le funzioni matematiche della libreria math.h.#include <stdio.h>*/
#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b ;

    scanf ("%f" , &a );
    scanf ("%f" , &b );


      a++;
      printf("\n incrementa una unità prima uso : %.2f", a );
      ++a;
      printf("\n incrementa una unità dopo uso : %.2f", a );
    b--;

      printf("\n decrementa una unità prima uso : %.2f", --b );
      --b;
      printf("\n decrementa una unità dopo uso : %.2f", b-- );

      printf("\n somma (a+b) : %.2f ", a+b );
       printf("\n sottrazione (a-b) : %.2f ", a-b );
        printf("\n moltiplicazione (a*b) : %.2f ", a*b );
         printf("\n differenza (a/b) : %.2f ", a/b);
         printf("\n differenza (a/b) : %.2f ", a/b);

        printf("\n floor (a/b) : %.2f ", floor (a/b));
        printf("\n ceil (a/b) : %.2f ", ceil (a/b));
        printf("\n fabs(a-5b) : %.2f ", ceil (a-(5*b)));
        printf("\n log (a) : %.2f ", log (a));
        printf("\n log10 (a) : %.2f ", log10 (a));
        printf("\n exp (a) : %.2f ", exp (a));
        printf("\n sqrt (a) : %.2f ", sqrt (a));
        printf("\n pow (a,b) : %.2f ", pow (a,b));

//overflow
//printf("OVER FLOW : %.2f ", a+);

    return 0;


}
