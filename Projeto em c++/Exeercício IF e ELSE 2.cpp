#include <stdio.h>
#include <locale.h>

int main ()
{
int opcao;

//Abaixo o primeiro c�digo com encadeiamento no if:

	setlocale (LC_ALL, "Portuguese");
	printf("\n 1� c�digo: Entre com um n�mero inteiro \n");
	scanf("%i", &opcao);
	
	if(opcao >= 0){
		if(opcao == 0){
			printf ("\n N�mero nulo.\n");}
		else{printf ("\n N�mero positivo. \n");}}
	else {
			printf ("\n N�mero negativo. \n");}
	
//Abaixo o segundo c�digo com o encadeiamento no else:

	setlocale (LC_ALL, "Portuguese");
	printf("\n 2� c�digo:Entre com um n�mero inteiro \n");
	scanf("%i", &opcao);
	
	if(opcao > 0){
		printf ("\n N�mero positivo. \n");}
		
		 else if(opcao == 0){
			printf ("\n N�mero nulo.\n");}
		 else {
			printf ("\n N�mero negativo. \n");}
	
	/*Demonstra��o de switch case, a mesma serve para op��es limitadas.
ex. menu etc. C�DIGO ABAIXO A SER CORRIGIDO*/

int opcao1;
int opcao2;

printf("\nEscolha seu prato: 1 - Arroz a grega ou 2 - Bai�o.\n");
scanf ("%i %i", &opcao1, &opcao2);x

switch(opcao){
	case 1: {
		printf("\nVc comer� Arroz\n");
		break;
	}
	
	case 2: {
		printf("\n Vc comer� Bai�o \n");
		break;
	}
	
	default: printf("\n S� tem isso e � se quiser! \n");
}














}
