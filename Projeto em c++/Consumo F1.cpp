#include <stdio.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "portuguese");

//Vari�veis
int comprimento;
int voltas;
int abastecimento;
int consumo;
int consumototal;
float litros;

//Dados de entrada
printf("Digite o comprimento da pista\n");
scanf("%d", &comprimento);

printf("Digite o n�mero total de voltas\n");
scanf("%d", &voltas);

printf("Digite o n�mero de reabastecimento desejado durante a corrida\n");
scanf("%d", &abastecimento);

printf("Digite o consumo do carro\n");
scanf("%d", &consumo);

//C�lculos
consumototal = consumo * ((comprimento/1000) * voltas);
litros = consumototal/abastecimento;
\
//Dados de sa�da
printf("A quantidade de litros necess�ria at� o primeiro abastecimento �: %2.f litros\n", litros);	
}
