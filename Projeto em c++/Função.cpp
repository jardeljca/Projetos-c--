#include <stdio.h>
#include <locale.h>

//Fun��es:
void impressaoBomDia(void){printf("Bom dia!\n");}
void impressaoBoaNoite(void){printf("Boa noite!\n");}
int CalculoIdade(int AnoAtual, int AnoNasc){int Idade = AnoAtual-AnoNasc; return Idade;}
void AutomaticaEstatica(void)
{
	int varLocalAutomatica = 5;
	varLocalAutomatica = varLocalAutomatica * 2;
	
	static int varLocalEstatica = 5;
	varLocalEstatica = varLocalEstatica * 2;
	
	printf("A vari�vel local autom�tica = %i\n", varLocalAutomatica);
	printf("A vari�vel local est�tica = %i\n", varLocalEstatica);
}

//C�digo principal:
int main ()
{
setlocale(LC_ALL, "portuguese");
//Fun��o do bom dia e boa noite:
	for (int i =0; i < 2; i++)
		{
			impressaoBomDia();
			impressaoBoaNoite();	
		}

//Fun��o da idade:		
int idade = CalculoIdade(2021, 1988);
printf("A idade � %i anos\n", idade);

//Fun��o da autom�tica e est�tica:
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
return 0;
}
