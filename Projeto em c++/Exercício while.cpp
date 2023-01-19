#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "PORTUGUESE");
//Algoritimo que mostra número diferente de 0
	printf("Algoritimo que mostra número diferente de 0\n\n");
	int num;
	printf("Digite um número:\n\n");
	scanf("%i", &num);
	while (num!=0)
	{
		printf("O número lido é = %i\n\n", num);
		printf("Digite um número:\n\n");
		scanf("%i", &num);

	}
	
/*2º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média
aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima
de 7 aprova o aluno.
SITUAÇÃO COM FOR*/

	printf("Nota e média de 5 alunos:\n\n");
	
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
			printf("APROVADO com média %.2f \n\n", media);
		}
		else{
			printf("REPROVADO com média %.2f \n\n", media);
		}
	}
	

/*2º problema: desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média
aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima
de 7 aprova o aluno.
SITUAÇÃO COM WHILE*/

	printf("Nota e média de 5 alunos:\n\n");
	
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
			printf("APROVADO com média %.2f \n\n", media);
		}
		else
		{
			printf("REPROVADO com média %.2f \n\n", media);
		}
	cont++;
	}
	
	
	
return 0;	
}
