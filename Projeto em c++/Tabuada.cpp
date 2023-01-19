#include <stdio.h>

int main ()
{
int tabuada;

//printf("Qual a tabuada?\n");
//scanf("%i", &tabuada);

for (tabuada = 0; tabuada <=10; tabuada++)
	{
		for (int i = 0; i <= 10; i++)
			{
				printf("%i x %i = %i\n", tabuada, i, i*tabuada);
			}
	printf("\n");
	}	
}
