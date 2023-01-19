#include <stdio.h>
#include <locale.h>

//Funções:
void impressaoBomDia(void){printf("Bom dia!\n");}
void impressaoBoaNoite(void){printf("Boa noite!\n");}
int CalculoIdade(int AnoAtual, int AnoNasc){int Idade = AnoAtual-AnoNasc; return Idade;}
void AutomaticaEstatica(void)
{
	int varLocalAutomatica = 5;
	varLocalAutomatica = varLocalAutomatica * 2;
	
	static int varLocalEstatica = 5;
	varLocalEstatica = varLocalEstatica * 2;
	
	printf("A variável local automática = %i\n", varLocalAutomatica);
	printf("A variável local estática = %i\n", varLocalEstatica);
}

//Código principal:
int main ()
{
setlocale(LC_ALL, "portuguese");
//Função do bom dia e boa noite:
	for (int i =0; i < 2; i++)
		{
			impressaoBomDia();
			impressaoBoaNoite();	
		}

//Função da idade:		
int idade = CalculoIdade(2021, 1988);
printf("A idade é %i anos\n", idade);

//Função da automática e estática:
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
AutomaticaEstatica();
return 0;
}
