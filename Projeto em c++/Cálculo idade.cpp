#include <stdio.h>
#include <locale.h>

int main()
{
	int idade;
	int nascimento;
	int anoatual;
	int dias;
	int horas;
	int minutos;
	int segundos;
	
	
	setlocale (LC_ALL, "Portuguese");
	printf("Digite o ano que você nasceu:\n");	
	scanf("%i", &nascimento);
	
	anoatual = 2020;
	idade = anoatual - nascimento;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas * 60;
	segundos = minutos * 60;
	

	printf("Você tem %i anos\n", idade);
	printf("Ou %i dias\n", dias);
	printf("Ou %i horas\n", horas);
	printf("Ou %i minutos\n", minutos);
	printf("Ou %i segundos\n", segundos);
	
	return 0;
}
