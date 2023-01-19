#include <stdio.h>
#include <locale.h>

int main ()
{

//Atividade 1
//Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida,
//mostre a quantidade de números pares e ímpares armazenados na matriz.
setlocale (LC_ALL, "portuguese");
int dados[3] [4];
int i;
int j;
int pares;
int impares; 

printf("Digite um número\n");
	for (i=0; i<3;i++)
		{
			for (j=0; j<4; j++)
				{
					scanf("%d", &dados[i][j]);
				}
		}

	for(i=0; i<3;i++)
		{
			for (j=0; j<4; j++)
				{
					printf ("%d", dados[i][j]);
				}
			printf ("\n");
		}
	for(i=0; i<3;i++)
		{
			for (j=0; j<4; j++)
				{
					if (dados[i][j] %2 == 0)
						{
							pares = pares +1;
						}
					if (dados[i][j] %2 != 0)
						{
							impares = impares +1;
						}
				}
		}
printf("Números pares: %d\n", pares);
printf("Números ímpares: %d\n", impares);
}

/*
//Abaixo a solução da estacio:

int mat[3][4],lin, col,contpar=0,contimpar=0;
printf ("\nDigite valor para os elementos da matriz\n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
printf ("\nElemento[%d][%d] = ", lin, col);
scanf ("%d", &mat[lin][col]);
}
printf("\n\n********* Saida de Dados ********* \n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
if (mat[lin][col] % 2==0)
contpar++;
else
contimpar++;
}
printf ("\nPares: %d ",contpar);
printf ("\nImpares: %d ",contimpar);
}
*/

/*Atividade 3
Faça um algoritmo que leia uma matriz 4x4 de números inteiros.
Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1,
e as colunas são as linhas da matriz 1.*/
/*
int mato[4][4],matg[4][4],lin,col;

printf ("\n Digite a matriz original \n");

	for (lin=0;lin<4;lin++)

		for (col=0;col<4;col++)

			{

				scanf ("%d",&mato[lin][col]);
				matg[col][lin]=mato[lin][col];
			}

printf ("\n Matriz original \n");

	for (lin=0;lin<4;lin++)
		{

			for (col=0;col<4;col++)

				printf ("%d ",mato[lin][col]);
	
				printf ("\n");

		}

printf ("\n Matriz gerada \n");

	for (lin=0;lin<4;lin++)
		{

			for (col=0;col<4;col++)

				printf ("%d ",matg[lin][col]);
	
				printf ("\n");

		}
}*/
