#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "PORTUGUESE");
//Algoritimo que mostra n�mero diferente de 0
	printf("Algoritimo que mostra n�mero diferente de 0\n\n");
	int num;
	printf("Digite um n�mero:\n\n");
	scanf("%i", &num);
	while (num!=0)
	{
		printf("O n�mero lido � = %i\n\n", num);
		printf("Digite um n�mero:\n\n");
		scanf("%i", &num);

	}
	
/*2� problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a m�dia
aritm�tica e a situa��o de aprova��o de cada aluno. Lembre-se que apenas a m�dia igual ou acima
de 7 aprova o aluno.
SITUA��O COM FOR*/

	printf("Nota e m�dia de 5 alunos:\n\n");
	
	int cont;
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	for(cont=1; cont<=5; cont++)
	{
		printf("Digite a primeira nota:\n\n");
		scanf("%f", &nota1);
		printf("Digite a segunda nota:\n\n");
		scanf("%f", &nota2);
		printf("Digite a terceira nota:\n\n");
		scanf("%f", &nota3);
		media=(nota1+nota2+nota3)/3;
		if(media>=7){
			printf("APROVADO com m�dia %.2f \n\n", media);
		}
		else{
			printf("REPROVADO com m�dia %.2f \n\n", media);
		}
	}
	

/*2� problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a m�dia
aritm�tica e a situa��o de aprova��o de cada aluno. Lembre-se que apenas a m�dia igual ou acima
de 7 aprova o aluno.
SITUA��O COM WHILE*/

	printf("Nota e m�dia de 5 alunos:\n\n");
	
	//int cont;
	//float nota1;
	//float nota2;
	//float nota3;
	//float media;
	//cont=1;
	while(cont<=5)
	{
		printf("Digite a primeira nota:\n\n");
		scanf("%f", &nota1);
		printf("Digite a segunda nota:\n\n");
		scanf("%f", &nota2);
		printf("Digite a terceira nota:\n\n");
		scanf("%f", &nota3);
		media=(nota1+nota2+nota3)/3;
		if(media>=7)
		{
			printf("APROVADO com m�dia %.2f \n\n", media);
		}
		else
		{
			printf("REPROVADO com m�dia %.2f \n\n", media);
		}
	cont++;
	}
	
	
	
return 0;	
}
