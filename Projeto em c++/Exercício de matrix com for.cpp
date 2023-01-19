#include <stdio.h>
#include <locale.h>

int main (void)
{
setlocale(LC_ALL, "PORTUGUESE");
	int nota [2][2];
	int qtdnota = 1;
	int totalnota;
	int media;
	
for (int linha = 0; linha < 2; linha++)
	{
		for (int coluna = 0; coluna < 2; coluna++)
		{
		printf("Digite a %i° nota:\n", qtdnota);
		scanf("%i", &nota[linha][coluna]);
		qtdnota++;	
		}
	}
	for (int linha = 0; linha < 2; linha++)
	{
		for (int coluna = 0; coluna < 2; coluna++)
		{
		printf("%i", nota[linha][coluna]);	
		}
		printf("\n");
	}
for (int linha = 0; linha < 2; linha++)
	{
		for (int coluna = 0; coluna < 2; coluna++)
		{
		totalnota = totalnota + nota[linha][coluna];	
		}
	}
	
	media = totalnota/4;
	printf("A média é: %i", media);
}
