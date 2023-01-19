#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cctype>


int main()
{
//Comando para acentuar de acordo com a l�ngua portuguesa
setlocale(LC_ALL, "PORTUGUESE");
//Titulo do c�digo
printf("C�LCULO IMC\n\n");
//Declara��o de vari�veis:
float altura, peso, imc, pesomaximoideal, pesominimoideal, perdadepeso, ganhapeso, gastobasal;
int idade;
char genero;
char nome [60];

//Entrada de dados:
printf("Digite seu nome:\n");
scanf("%s", &nome);
printf("Digite sua altura:\n");
scanf("%f", &altura);
printf("Digite seu peso:\n");
scanf("%f", &peso);
printf("Digite sua idade?\n");
scanf("%i%*c", &idade);
printf("Qual seu g�nero? Digite M - Masculino ou F - Feminino:\n");
scanf("%c", &genero);
/*
do
	{
		printf("Qual seu g�nero? Digite M - Masculino ou F - Feminino:\n");		//erro1: ta imprimindo a frase 2x
		scanf("%c", &genero);
		toupper(genero);
	}
while (genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f');
*/
//printf("%c", genero);
//Impress�o do IMC:
imc = peso/(altura*altura);
printf("\n-%s Seu IMC �: %.0f\n", nome, imc);

//Condi��es para informar a situa��o corporea, baseada no IMC calculado:
if(imc<=18.5){
		printf("-Voc� esta abaixo do peso\n");
	}
else if(imc>18.5 && imc<=24.9){
		printf("-Seu peso esta normal\n");
	}	
else if(imc>24.9 && imc<=29.9){
		printf("-Voc� esta com sobre peso\n");
	}	
else if(imc>29.9 && imc<=39.9){
		printf("-Voc� esta com obesidade\n");
	}	
else {
		printf("-Voc� esta com obesidade grave\n");
	}	
//C�lculo do peso ideal:
//Peso m�ximo:
if(imc>24.9)
	{
		pesomaximoideal = (altura*altura)* 24.9;
		pesominimoideal = (altura*altura)* 18.5;
		printf("-Seu peso ideal de acordo com sua altura deveria esta entre %.1f e %.1f kgs\n", pesominimoideal, pesomaximoideal);
		perdadepeso = peso - pesomaximoideal;
		printf("-Para alcan�ar esse peso voc� precisa perder %.1f kgs\n", perdadepeso);
	}
if(imc<18.5)
	{
		pesomaximoideal = (altura*altura)* 24.9;
		pesominimoideal = (altura*altura)* 18.5;
		printf("Seu peso ideal de acordo com sua altura deveria entre %.1f e %.1f kgs\n", pesominimoideal, pesomaximoideal);
		ganhapeso = pesominimoideal - peso;
		printf("Para alcan�ar esse peso voc� precisa ganhar %.1f kgs\n", ganhapeso);
	}
	
	
	printf("\nIdade: %i\n", idade);
	printf("Peso: %.0f\n", peso);
	printf("G�nero: %c\n", genero);

printf("O gasto cal�rico basal � a quantidade de energia gasta pelo organismo apenas para manter as fun��es vitais,\ncomo o funcionamento dos pulm�es ou o batimento do cora��o, por exemplo. J� o gasto energ�tico total � a soma\ndas atividades que se fazem ao logo do dia e o gasto energ�tico basal.");
printf("\nVamos medir seu gasto cal�rico basal?\n\n");

if (genero == 'H' || genero == 'h')		//Erro2: Problemas nos c�lculos
	{
		if (idade <= 18)
			{
				gastobasal = (17.686 * peso) + 658.2;
			}
		else if (idade > 18 || idade <= 30)
			{
				gastobasal = (15.057 * peso) + 692.2;
			}
		else if (idade > 30 || idade <= 60)
			{
				gastobasal = (11.472 * peso) + 873.1;
			}
		else
			{
				gastobasal = (11.711 * peso) + 587.7;
			}
	}
if (genero == 'F' || genero == 'f')
	{
		if (idade <= 18)
			{
				gastobasal = (13.383 * peso) + 692.6;
			}
		else if (idade > 18 || idade <= 30)
			{
				gastobasal = (14.818 * peso) + 486.6;
			}
		else if (idade > 30 || idade <= 60)
			{
				gastobasal = (8.126 * peso) + 845.6;
			}
		else
			{
				gastobasal = (9.082 * peso) + 658.5;
			}
	}
printf("Sem fazer nenhuma atividade f�sica, seu corpo consome %.2f calorias por dia!\n", gastobasal);
}
