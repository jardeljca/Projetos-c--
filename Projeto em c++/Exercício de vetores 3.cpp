#include <stdio.h>
#include <locale.h>
//Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada
//vogal (a, e, i, o, u) apareceu.

int main ()
{
setlocale (LC_ALL, "portuguese");
printf("Leia uma sequência de letras, terminada na letra(”z”),");
printf(" e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu:\n\n");
	
	int vet[5] = {0,0,0,0,0};
	int posicao;
	char letra;
		scanf("%c", &letra);
		while (letra!='z')
			{
				switch (letra)
					{
						case 'a':
						vet [0]++;
						break;
						case 'e':
						vet [1]++;
						break;
						case 'i':
						vet [2]++;
						break;
						case 'o':
						vet [3]++;
						break;
						case 'u':
						vet [4]++;
						break;
					}
				scanf("%c", &letra);	
			}
printf("\n\nQuantidade de cada vogal:\n\n");
		
				if (posicao = vet[0])
					{
					printf("Vogal A: %i\n\n", vet[0]);
					}
				if (posicao = vet[1])
					{
					printf("Vogal E: %i\n\n", vet[1]);
					}
				if (posicao = vet[2])
					{
					printf("Vogal I: %i\n\n", vet[2]);
					}
				if (posicao = vet[3])
					{
					printf("Vogal O: %i\n\n", vet[3]);
					}
				if (posicao = vet[4])
					{
					printf("Vogal U: %i\n\n", vet[4]);
					}	
	
return 0;
}
