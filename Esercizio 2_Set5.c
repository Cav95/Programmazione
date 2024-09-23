#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int main()
{
    char parola1[MAX],parola2[MAX],parolaR[MAX];
    int c,a,b;
    int cont = 0;
    int lpar2 = 0 ;
    char ch;

    puts("Inserisci prima parola:");
    scanf("%s",parola1);
    puts("Inserisci seconda parola:");
    scanf("%s",parola2);

    while (parola2[lpar2] != '\0' && lpar2 < MAX)
    {
        lpar2++;
    }
    //printf("%d\n",lpar2);

    c=0;
    b=0;
    a=0;

    //for(a=0 ; a<MAX || parola1[a]!='\0' || parolaR[c] !='\0' ;a++)
    while(a<MAX || parola1[a]!='\0' || parolaR[c] !='\0' )
    {
       while(parola1[a] != parola2[b])
       {
           parolaR[c] = parola1[a];
           a++;
           c++;

       }

       cont = 0;

       if (parola1[a] == parola2[b])
       {
           while (parola1[a] == parola2[b] && parola1[a] != '\0' && cont <= lpar2)
           {
               a++;
               b++;
               cont++;
           }
           //printf("%d\n",cont);

           if (cont == lpar2)
              {
                 parolaR[c]='*';
                 c++;

              }
            if(cont != lpar2)

              {
                  a = a - cont;
                  while ( cont >= 0)
                  {
                      parolaR[c] = parola1[a];
                      a++;
                      c++;
                      cont--;
                  }
              }


       }
       b=0;
       //a--;
    }

  printf("Stringa risultato: %s", parolaR);


  return 0;

}

