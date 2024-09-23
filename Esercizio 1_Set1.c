#include <stdio.h>
#include <stdlib.h>
int main()
{
    int CorsieTotali;
    int Atleti;
    int ProvinciaStadio;
    double MigliorTempo;
    char NomeVincitore[100];
    double CORRI;

    CorsieTotali = 6;
    Atleti = 4;
    ProvinciaStadio = "FC";
    MigliorTempo = 10.155665;
    CORRI = 12.151216;

    printf("\n Corsie totali: %d",CorsieTotali);
    printf("\n Peso dato precedente byte: %d", sizeof(CorsieTotali));


    printf("\n\n Atleti in gara: %10d",Atleti);
    printf("\n Peso dato precedente byte: %d", sizeof(Atleti));

    printf("\n\n Provincia dello Stadio: %s",ProvinciaStadio);
    printf("\n Peso dato precedente byte: %d", sizeof(ProvinciaStadio));

    printf("\n\n Miglior tempo: %3.2f",MigliorTempo);
    printf("\n Peso dato precedente byte: %d", sizeof(MigliorTempo));

    printf("\n\n Nome Vincitore:");
    scanf("[^\n]", NomeVincitore);
    fflush(stdin);
    printf("\n Peso dato precedente byte: %d", sizeof(NomeVincitore));

     printf("\n\n PROVA: %f",CORRI);
    printf("\n Peso dato precedente byte: %d", sizeof(CORRI));

    printf("\n\n");
system("pause");
return 0;

}
