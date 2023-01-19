#include <stdio.h>
#include <locale.h>

int main (void)
{
//Tradução português
setlocale (LC_ALL, "PORTUGUESE");
//Declaração de variáveis
float notas[4][4] = {0};
int aluno[4] = {0};
float notastotal;
//Entradas do usuário com as notas e o processamento das médias		
for (int linha = 0; linha < 4; linha++)
	{
		printf ("Digite as notas do %i° aluno:\n", linha + 1);
		for (int coluna = 0; coluna < 4; coluna++)
			{
				scanf("%f", &notas[linha][coluna]);
				notastotal+=notas[linha][coluna];
			}
			printf("Soma das 4 notas = %.0f\n", notastotal);
			
			notastotal = 0;
	}
	aluno[0] = notastotal/4;
	aluno[1] = notastotal/4;
	aluno[2] = notastotal/4;
	aluno[3] = notastotal/4;
	
	printf("%.2f\n", aluno[0]);
	printf("%.2f\n", aluno[1]);
	printf("%.2f\n", aluno[2]);
	printf("%.2f\n", aluno[3]);
//Impressão da matriz com as notas
for (int linha = 0; linha < 4; linha++)
	{
		for (int coluna = 0; coluna < 4; coluna++)
			{
				printf("%.0f", notas[linha][coluna]);
			}
	printf("\n");
	}
//Impressão da média de cada aluno
for (int linha = 0; linha <4; linha++)
	{
		printf("%.0f\n", aluno[linha]);
	}


	
	
	
	
	
	
}
