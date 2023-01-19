#include<stdio.h>
#include<locale.h>

int main ()
{
	
setlocale(LC_ALL, "portuguese");

int vet[10];
int posicao;
printf("Digite 10 números seguidos, apertando ENTER entre cada um:\n\n");
for (posicao=0;posicao<10;posicao++)
{
scanf ("%d",&vet[posicao]);
}
printf("--------------------------------------------------------------------------\n\n");
for (posicao=9;posicao>=0;posicao--)
{
printf ("%d \n",vet[posicao]);
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
