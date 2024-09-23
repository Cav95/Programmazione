#include <stdio.h>
#include <stdlib.h>

#define MASSIMO 20
#define ALLENAMENTO 10

FILE *fp;



struct ipotesi{

char alternativa; //VERO = V FALSO = F
char bar;        //VERO = V FALSO = F
char giorno;     //VENERDI O SABATO = V   ALTRI GIORNI = F
char fame ;      // VERO = V FALSO = F
char affollato;  // NESSUNO = N  QUALCUNO = Q PIENO = P
char prezzo;     // $ = 0 $$ = 1 $$$ = 2
char pioggia;    // VERO = V FALSO = F
char prenotazione;  // VERO = V FALSO = F
int ristorante;     //ITALIANO= 0 FRANCESE=1 FAST-FOOD=2 THAI=3
int attesa;     // <10 = 0    10-29=1     30-60=2     >60=3
struct ipotesi *next;
};

void aut(struct ipotesi **testa);       //  funzione creazione lista automatica
void man(struct ipotesi **testa);       // funzione creazione lista manuale ( da implementare)
void gen_nodo_f(struct ipotesi **testa);  //  genera la testa della lista
void stam_lista(struct ipotesi *testa); //stampare la lista

int main ()
{
        struct ipotesi *testa;
        //testa = NULL;
        int scelta;

        if( (fp = fopen("Lerning.txt","r"))==NULL) // apro il mio file di test
    puts("file non esistente");

        puts("Premere 1 traing automatico\n"
            "Premere 1 traing manuale\n");

            for(int i=0;i<5;i++)
        {
        gen_nodo_f( &testa);
        };

            /*do{
            scanf("%d",&scelta);
            if (scelta == 0)*/
                //aut( &testa );
           /* else
                man( &testa );

            } while(scelta!=0 || scelta != 1);


*/
fclose(fp);

            void stam_lista(struct ipotesi *testa);

return 0;
}

void aut(struct ipotesi **testa){
    //char ch;

if( (fp = fopen("Lerning.txt","r"))==NULL) // apro il mio file di test
    puts("file non esistente");

    /*//struct ipotesi *testa; // creo la testa della mia lista
    struct ipotesi *temp; // temporaneo per scorere la lista
*testa = NULL;
temp = NULL;*/

for(int i=0;i<5;i++)
{
gen_nodo_f( &testa);
};

fclose(fp);

    return;
}


/*void traing(struct ipotesi **testa, int a) // scelta di allenemento
{
    if ( a == 1)
    aut(struct ipotesi **testa);
    else ( a == 0)
    man(struct ipotesi **testa);
    else
    exit(1);
    return;
}*/

void gen_nodo_f(struct ipotesi **testa) // generare la mia testa della lista
{
    struct ipotesi *temp; // genero un temporaneo

    temp = (struct ipotesi*)malloc(sizeof(struct ipotesi)); //attribuisco una malloc alla mia nuova cella
if (temp==NULL)
    exit(1);


        fscanf(fp,"%c",temp->alternativa);

        fscanf(fp,"%c",temp->bar);

        fscanf(fp,"%c",temp->giorno);

        fscanf(fp,"%c",temp->fame);

        fscanf(fp,"%c",temp->affollato);

        fscanf(fp,"%s",temp->prezzo);

        fscanf(fp,"%c",temp->pioggia);

        fscanf(fp,"%c",temp->prenotazione);

        fscanf(fp,"%d",temp->ristorante);

        fscanf(fp,"%d",temp->attesa);
printf("%c",temp->alternativa);
temp->next = *testa;

    *testa = temp;

        return;
    }


    void stam_lista(struct ipotesi *testa)
    {
        struct ipotesi *temp;

        temp = testa;

        while(temp =! NULL)
        {
            printf("%c %c %c %c %c %c %c %c %c %c",temp->alternativa,temp->bar,temp->giorno,temp->fame,temp->affollato,temp->prezzo,temp->pioggia,temp->prenotazione,temp->ristorante,temp->prenotazione,temp->attesa );
        temp=temp->next;
        }
    }

    void man(struct ipotesi **testa)
    {
        return;
    }
