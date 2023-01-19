#include <stdio.h>
#include <locale.h>

int main(void)
{
setlocale(LC_ALL, "portuguese");
	char mensagem [10];
	printf("Digite a mensagem a ser criptografada:\n");
	scanf ("%s", &mensagem);
	printf ("A mensagem criptografada é:\n %s", mensagem - 50);

//Descriptografia:	

int mensagem2;
	printf("\nDigite a mensagem a ser descriptografada:\n");
	scanf ("%i", &mensagem2);
	printf ("A mensagem descriptografada é:\n %s", mensagem2);	
}
