#include <stdio.h>
#include <locale.h>
int main()
{

/*2� problema: desenvolva um programa que leia uma sequ�ncia de n�meros, podendo terminar com
o n�mero 0 ou 9. Para cada n�mero lido (diferente de 0 ou 9), mostre seu sucessor caso o n�mero
seja par, ou seu antecessor se o n�mero for �mpar.*/
setlocale(LC_ALL, "PORTUGUESE");
int num;

	do
	{
		printf("Digite um n�mero:\n");
		scanf ("%i", &num);
			if(num != 0 && num != 9)
				{
					if(num%2 == 0)
					{
						printf("Seu sucessor = %i\n\n", num+1);
					}
					else
					{
					printf("Seu antecessor = %i\n\n", num - 1);
					}
				}	
		
	}
while (num != 0 && num != 9);
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
