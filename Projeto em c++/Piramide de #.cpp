#include <stdio.h>

int main (void)
{
	int altura;
	do
	{
		printf("Escreva a altura da piramide\n");
		scanf("%i", &altura);
	}
	while (altura<1 || altura>8);
	
	for (int i = 0; i < altura; i++)
	{
		for (int j = 0; j < altura; j++)
			{
				if (i+j >= altura-1)
					{
						printf("#");
					}
				else
					{
						printf(" ");
					}
			}
	printf("\n");
	}
	
}
