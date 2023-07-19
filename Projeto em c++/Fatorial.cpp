#include <stdio.h>

int main (void)
{
	int fatorial = 1;
	int numero;
	printf("Digite o número para fazer seu fatorial\n");
	scanf("%i", &numero);
	 while (numero > 0)
	 	{
	 		fatorial = fatorial * numero;
	 		numero--;
		}
	
	
	printf ("%i\n", fatorial);
	
	
	
}
/*
int main (void)
{1
	int fatorial = 1;
	int numero;
	printf("Digite o n�mero para fazer seu fatorial\n");
	scanf("%i", &numero);
	for (;numero > 0; numero--)
	 	{
	 		fatorial = fatorial * numero;
		}
	
	printf ("O fatorial de %i = %i\n", numero, fatorial);
	
	
	
}*/
