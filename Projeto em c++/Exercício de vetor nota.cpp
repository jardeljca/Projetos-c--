#include <stdio.h>
#include <locale.h>

int main (void)
{
setlocale(LC_ALL, "PORTUGUESE");
	int nota [5];
	int qtdnota = 1;
	int totalnota;
	int media;
	
for (int i = 0; i < 5; i++)
	{
		printf("Digite a %i° nota:\n", qtdnota);
		scanf("%i", &nota[i]);
		qtdnota++;
	}
for (int i = 0; i<5; i++)
	{
		totalnota = totalnota + nota [i];
	}
	
	media = totalnota/5;
	printf("A média é: %i", media);
	
}
