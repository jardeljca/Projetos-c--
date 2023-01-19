#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
setlocale (LC_ALL, "portuguese");
float troco;
    do
    {
        printf("Digite seu troco\n");
        scanf("%f", &troco);
    }
    while (troco <= 0);
    int cents = round(troco * 100);
    printf("Seu troco é: %2.d centavos\n", cents);
    int qtdmoeda25 = 0;
    int qtdmoeda10 = 0;
    int qtdmoeda5 = 0;
    int qtdmoeda1 = 0;
    while (cents>0)
        {
            while (cents >= 25)
                {
                    cents = cents -25;
                    qtdmoeda25++;
                }
            while (cents >= 10)
                {
                    cents = cents -10;
                    qtdmoeda10++;
                }
            while (cents >= 5)
                {
                    cents = cents -5;
                    qtdmoeda5++;
                }
            while (cents >= 1)
                {
                    cents = cents -1;
                    qtdmoeda1++;
                }
        }
printf("Moedas de 25: %i\n", qtdmoeda25);
printf("Moedas de 10: %i\n", qtdmoeda10);
printf("Moedas de 5: %i\n", qtdmoeda5);
printf("Moedas de 1: %i\n", qtdmoeda1);
}
