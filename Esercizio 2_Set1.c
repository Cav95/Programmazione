#include <stdio.h>
#define galloni_litri 3.78541
#define miglia_km 1.609344

int main ()
{
    float miglia = 0;
    float galloni = 0;
    float km = 0 ;
    float litri = 0 ;
    float consumo = 0;
    float consumokm = 0;

    printf("\ndistanza percorsa :");
    scanf("%f", &miglia);
    fflush(stdin);

    printf("\ngalloni benzina:");
    scanf("%f",&galloni);
    fflush(stdin);

    consumo = miglia / galloni;
    printf("\nconsumo: %.2f ml/g", consumo);

    consumokm = (galloni * galloni_litri ) / (miglia * miglia_km );
    printf("\nconsumo in l/100km: %.2f l/100km",consumokm);

    return 0 ;

}
