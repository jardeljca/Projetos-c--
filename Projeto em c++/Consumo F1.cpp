#include <stdio.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "portuguese");

//Variáveis
int comprimento;
int voltas;
int abastecimento;
int consumo;
int consumototal;
float litros;

//Dados de entrada
printf("Digite o comprimento da pista\n");
scanf("%d", &comprimento);

printf("Digite o número total de voltas\n");
scanf("%d", &voltas);

printf("Digite o número de reabastecimento desejado durante a corrida\n");
scanf("%d", &abastecimento);

printf("Digite o consumo do carro\n");
scanf("%d", &consumo);

//Cálculos
consumototal = consumo * ((comprimento/1000) * voltas);
litros = consumototal/abastecimento;
\
//Dados de saída
printf("A quantidade de litros necessária até o primeiro abastecimento é: %2.f litros\n", litros);	
}
