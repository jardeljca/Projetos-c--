#include<stdio.h>
#include<locale.h>
//Fa�a um programa que leia a nota de 20 alunos da turma e mostre as que s�o iguais ou superiores � m�dia da turma.
int main()
{
setlocale(LC_ALL, "portuguese");
const int tamvet = 5;
float vet[tamvet], soma = 0.0, media; int posicao;

	for(posicao = 0; posicao <tamvet; posicao++)
		{
			printf("Digite a nota dos alunos\n\n");
			scanf ("%f", &vet[posicao]);
			soma = soma + vet[posicao];
		}
media = soma/tamvet;
printf("N�meros maiores que a m�dia %.2f \n", media);
	for(posicao = 0; posicao <tamvet; posicao++)
	{
			if(vet[posicao]>=media)
			{
				printf("%.2f\n\n", vet[posicao]);
			}
	}
	
return 0;
}
