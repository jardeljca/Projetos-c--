#include <stdio.h>
#include <locale.h>

int main ()
{
int opcao;

//Abaixo o primeiro código com encadeiamento no if:

	setlocale (LC_ALL, "Portuguese");
	printf("\n 1° código: Entre com um número inteiro \n");
	scanf("%i", &opcao);
	
	if(opcao >= 0){
		if(opcao == 0){
			printf ("\n Número nulo.\n");}
		else{printf ("\n Número positivo. \n");}}
	else {
			printf ("\n Número negativo. \n");}
	
//Abaixo o segundo código com o encadeiamento no else:

	setlocale (LC_ALL, "Portuguese");
	printf("\n 2° código:Entre com um número inteiro \n");
	scanf("%i", &opcao);
	
	if(opcao > 0){
		printf ("\n Número positivo. \n");}
		
		 else if(opcao == 0){
			printf ("\n Número nulo.\n");}
		 else {
			printf ("\n Número negativo. \n");}
	
	/*Demonstração de switch case, a mesma serve para opções limitadas.
ex. menu etc. CÓDIGO ABAIXO A SER CORRIGIDO*/

int opcao1;
int opcao2;

printf("\nEscolha seu prato: 1 - Arroz a grega ou 2 - Baião.\n");
scanf ("%i %i", &opcao1, &opcao2);x

switch(opcao){
	case 1: {
		printf("\nVc comerá Arroz\n");
		break;
	}
	
	case 2: {
		printf("\n Vc comerá Baião \n");
		break;
	}
	
	default: printf("\n Só tem isso e é se quiser! \n");
}














}
