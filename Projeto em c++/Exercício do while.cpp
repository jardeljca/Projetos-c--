#include <stdio.h>
#include <locale.h>
int main()
{

/*2º problema: desenvolva um programa que leia uma sequência de números, podendo terminar com
o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número
seja par, ou seu antecessor se o número for ímpar.*/
setlocale(LC_ALL, "PORTUGUESE");
int num;

	do
	{
		printf("Digite um número:\n");
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
