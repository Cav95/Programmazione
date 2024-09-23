/*Scrivete un programma che generi una “passeggiata aleatoria” (random walk)
in un array bidimensionale di dimensione 10×10.
L’array sarà riempito di caratteri (inizialmente da punti).
Il programma dovrà muoversi di elemento in elemento spostandosi ogni
volta di un passo in direzione su, giù, destra o sinistra.
Gli elementi visitati andranno etichettati con le lettere dalla A alla Z,
nell’ordine in cui vengono visitati. E’ importante controllare ad ogni passo che la passeggiata
non esca dall’array e che non ritorni su posizioni già visitate. Quando si verifica una di queste condizioni,
provare le altre direzioni. Se tutte e quattro le direzioni sono bloccate, il programma deve terminare.*/
#include <stdio.h>
#include <stdlib.h>
#define TAB 10
#include <conio.h>

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

int main()
{
    char tab[TAB][TAB];
    char ch;
    int cnt;
    int v,o;
    //int g=65;
    int av,ao;

puts("Muoviti con i cursori (w,a,s,d) e prova ad arrivare alla z\n"
     "attento a non incastrarti!");
//scrittura
v = o =0;
while(v<TAB)
{
    o=0;
    while(o<TAB)
    {
        tab[v][o]='.';
        o++;
    }
   v++;
}

//lettura
v = o =0;
while(v<TAB)
{
    o=0;
    while(o<TAB)
    {
        printf("%c",tab[v][o]);
        o++;
    }
    printf("\n");
   v++;
}

getch();
do
{
    tab[0][0]= 65;
    puts("Muoviti con i cursori e prova ad arrivare alla z\n"
     "attento a non incastrarti!");

        v = o =0;

        while(v<TAB)
        {
            o=0;

            while(o<TAB)
            {
            printf("%c",tab[v][o]);
            o++;
            }
        printf("\n");
        v++;
        }
}while(ch == 24 || ch == 25 || ch == 26 || ch == 27);

system("cls");
cnt=65;
v=av=0;
o=ao=0;

do
    {
        puts("Muoviti con i cursori e prova ad arrivare alla z\n"
     "attento a non incastrarti!");

        v = o =0;

        while(v<TAB)
        {
            o=0;

            while(o<TAB)
            {
            printf("%c",tab[v][o]);
            o++;
            }
        printf("\n");
        v++;
        }

            v=av;
            o=ao;

       do
        {

        switch (getch())
        {
        case (KEY_UP) ://alto
        --v;
        ++cnt;
        tab[v][o]=cnt;
        break;

        case (KEY_DOWN) ://basso
        ++v;
        ++cnt;
        tab[v][o]=cnt;
        break;

        case (KEY_RIGHT) ://destra
        ++o;
        ++cnt;
        tab[v][o]=cnt;
        break;

        case (KEY_LEFT) ://sinistra
        --o;
        ++cnt;
        tab[v][o] = cnt;
        break;

        default:
			printf("comando non compreso\n");
			break;

        }
        }
        while(o<0 && 10<o && v<0 && 10<v);

        av=v;
        ao=o;
if(tab[v+1][o]!= '.'&& tab[v-1][o]!= '.'&& tab[v][o+1]!= '.'&& tab[v][o-1]!= '.' )
{
    printf("ti sei incastrato, hai perso!");
    break;
}
        system("cls");
if (cnt==90)
    break;
}
while (cnt <= 90);

if(cnt == 90)
{
    puts("Muoviti con i cursori e prova ad arrivare alla z\n"
     "attento a non incastrarti!");

        v = o =0;

        while(v<TAB)
        {
            o=0;

            while(o<TAB)
            {
            printf("%c",tab[v][o]);
            o++;
            }
        printf("\n");
        v++;
        }


}
printf("HAI VINTO\n");
system("pause");



    return 0;
}
