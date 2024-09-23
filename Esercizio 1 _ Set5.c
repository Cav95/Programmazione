#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_STR 50

int main ()
{
    char str1[MAX_STR],str2 [MAX_STR];
    int len;
    int a;



    printf("Inserire stringa:\n");
    fgets(str1,sizeof(str1),stdin);//inserisco una stringa

      strcpy(str2, str1); //copio una su l'altra


    system("pause");
    system("cls");// pulisco lo schermo

   len = strlen(str1); // leggo la lunghezza effetiva



    srand((unsigned int) time(NULL)); // inizializzo il random in base al tempo


       for(int c=0 ;c<=50;c++) // faccio un po di casino visivo
       {
           for(a=0;a<len && str2[a]!='\0' ;a++)
    {
       if (str2[a]=="\n")
        {
       printf("%c",str2[a]);
        }
       else
       {

        str1[a]=rand()%200;
        printf("%c",str1[a]);
       }

        }

        system("cls");
        }


        int b=4; // parte a compilare la scritta

        for( a=0;a<=len && str1[a]!='\0' ;a++)
    {
        if (a%b==0  || str1[a]=='\n' )
        {
            printf("%c",str2[a]);
        }
            else
                {
        str1[a]=rand()%200;
        printf("%c",str1[a]);
                }

    }

     sleep(1);
     system("cls");
    b--;

    for(int a=0;a<=len-1 && str1[a]!= '\0' ;a++)
    {
        if (a%b==0 || a%(b+1)==0  || str1[a]=='\n'  )
        {
            printf("%c",str2[a]);
        }
            else
                {
        str1[a]=rand()%200;
        printf("%c",str1[a]);
                }

    }

     sleep(3);
     system("cls");
    b--;

for(int a=0;a<=len-1 && str1[a]!='\0' ;a++)
    {
        if (a%b==0 || a%(b+1)==0 || a%(b+2)==0 || str1[a]=='\n' )
        {
            printf("%c",str2[a]);
        }
            else
                {
        str1[a]=rand()%200;
        printf("%c",str1[a]);
                }

    }

     sleep(3);
     system("cls");
    b--;


    for(int a=0;a<=len-1 && str1[a]!='\0' ;a++)
    {
        if (a%b==0 || a%(b+1)==0 || a%(b+2)==0 || a%(b+3)==0 || str1[a]=='\n' )
        {
            printf("%c",str2[a]);
        }
            else
                {
        str1[a]=rand()%200;
        printf("%c",str1[a]);
                }


    }

    return 0;
}
