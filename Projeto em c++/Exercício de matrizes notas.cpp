#include <stdio.h>
#include <locale.h>

int main (void)
{
setlocale(LC_ALL, "portuguese");
//Constantes
const int qtdalunos = 4;
const int bimestreanuais = 4;
//Variáveis	
float notasgeral[qtdalunos][bimestreanuais] = {0};
float media[qtdalunos] = {0};
float mediatotal = 0;

//Entradas
	for (int alunos = 0; alunos < qtdalunos; alunos++)
		{
			printf("Digite as 4 notas %i° aluno:\n", alunos + 1);
			for (int notas = 0; notas < bimestreanuais; notas++)
				{
					scanf("%f", &notasgeral[alunos][notas]);
					mediatotal = mediatotal + notasgeral[alunos][notas];				
				}
				media[alunos] = mediatotal/bimestreanuais;
				mediatotal = 0;
		}
//Impressão da média dos alunos		
	for (int alunos = 0; alunos < qtdalunos ; alunos++)
		{
			printf("A média do %i° aluno = %.2f\n", alunos + 1, media[alunos]);
		}
	printf("\n");
//Impressão matriz com as notas		
	for (int alunos = 0; alunos < qtdalunos; alunos++)
		{
			for (int notas = 0; notas < bimestreanuais; notas++)
				{
					printf("%2.f", notasgeral[alunos][notas]);		
				}
		printf("\n");
		}
	printf("\n");
//Impressão do vetor das médias
	for (int alunos = 0; alunos < bimestreanuais; alunos++)
				{
					printf("%2.f", media[alunos]);		
				}
}
