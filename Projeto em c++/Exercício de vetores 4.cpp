#include <stdio.h>
#include <locale.h>
//Leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada
//vogal (a, e, i, o, u) apareceu.

int main ()
{
setlocale (LC_ALL, "portuguese");
printf("Leia uma sequência de letras, terminada na letra(”z”),");
printf(" e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu:\n\n");
	
	int vet[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, posicao;
	char letra;
	scanf("%c", &letra);
		while (tecla !=13)
			{
				switch (letra)
					{
						case 'a':
						vet [0]++;
						break;
						case 'b':
						vet [1]++;
						break;
						case 'c':
						vet [2]++;
						break;
						case 'd':
						vet [3]++;
						break;
						case 'e':
						vet [4]++;
						break;
						case 'f':
						vet [5]++;
						break;
						case 'g':
						vet [6]++;
						break;
						case 'h':
						vet [7]++;
						break;
						case 'i':
						vet [8]++;
						break;
						case 'j':
						vet [9]++;
						break;
						case 'k':
						vet [10]++;
						break;
						case 'l':
						vet [11]++;
						break;
						case 'm':
						vet [12]++;
						break;
						case 'n':
						vet [13]++;
						break;
						case 'o':
						vet [14]++;
						break;
						case 'p':
						vet [15]++;
						break;
						case 'q':
						vet [16]++;
						break;
						case 'r':
						vet [17]++;
						break;
						case 's':
						vet [18]++;
						break;
						case 't':
						vet [19]++;
						break;
						case 'u':
						vet [20]++;
						break;
						case 'v':
						vet [21]++;
						break;
						case 'w':
						vet [22]++;
						break;
						case 'x':
						vet [23]++;
						break;
						case 'y':
						vet [24]++;
						break;
						case 'z':
						vet [25]++;
						break;
					}
				scanf("%c", &letra);	
			}
printf("\n\nQuantidade de cada letra:\n\n");
		
				if (posicao = vet[0])
					{
					printf("Vogal A: %i\n\n", vet[0]);
					}
				if (posicao = vet[1])
					{
					printf("Letra B: %i\n\n", vet[1]);
					}
				if (posicao = vet[2])
					{
					printf("Letra C: %i\n\n", vet[2]);
					}
				if (posicao = vet[3])
					{
					printf("Letra D: %i\n\n", vet[3]);
					}
				if (posicao = vet[4])
					{
					printf("Vogal E: %i\n\n", vet[4]);
					}
				if (posicao = vet[5])
					{
					printf("Letra F: %i\n\n", vet[5]);
					}
				if (posicao = vet[6])
					{
					printf("Letra: %i\n\n", vet[6]);
					}
				if (posicao = vet[7])
					{
					printf("Letra H: %i\n\n", vet[7]);
					}
				if (posicao = vet[8])
					{
					printf("Vogal I: %i\n\n", vet[8]);
					}
				if (posicao = vet[9])
					{
					printf("Letra J: %i\n\n", vet[9]);
					}	
				if (posicao = vet[10])
					{
					printf("Letra K: %i\n\n", vet[10]);
					}
				if (posicao = vet[11])
					{
					printf("Letra L: %i\n\n", vet[11]);
					}
				if (posicao = vet[12])
					{
					printf("Letra M: %i\n\n", vet[12]);
					}
				if (posicao = vet[13])
					{
					printf("Letra N: %i\n\n", vet[13]);
					}
				if (posicao = vet[14])
					{
					printf("Vogal O: %i\n\n", vet[14]);
					}	
				if (posicao = vet[15])
					{
					printf("Letra P: %i\n\n", vet[15]);
					}
				if (posicao = vet[16])
					{
					printf("Letra Q: %i\n\n", vet[16]);
					}
				if (posicao = vet[17])
					{
					printf("Letra R: %i\n\n", vet[17]);
					}
				if (posicao = vet[18])
					{
					printf("Letra S: %i\n\n", vet[18]);
					}
				if (posicao = vet[19])
					{
					printf("Letra T: %i\n\n", vet[19]);
					}	
				if (posicao = vet[20])
					{
					printf("Vogal U: %i\n\n", vet[20]);
					}
				if (posicao = vet[21])
					{
					printf("Letra V: %i\n\n", vet[21]);
					}
				if (posicao = vet[22])
					{
					printf("Letra W: %i\n\n", vet[22]);
					}
				if (posicao = vet[23])
					{
					printf("Letra X: %i\n\n", vet[23]);
					}
				if (posicao = vet[24])
					{
					printf("Vogal Y: %i\n\n", vet[24]);
					}
				if (posicao = vet[25])
					{
					printf("Letra Z: %i\n\n", vet[25]);
					}
	
	
return 0;
}
