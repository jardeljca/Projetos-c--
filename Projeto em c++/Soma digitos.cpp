#include <stdio.h>
#include <locale.h>

int main ()
{
setlocale (LC_ALL, "PORTUGUESE");
int n;
printf("Digite um n�mero inteiro de 2 digitos\n");
do {
printf("O n�mero precisa ter dois d�gitos, entre 10 e 99:\n");
scanf("%i", &n);
}while(n<10 || n >99);

int dig1, dig2, resultado;
dig1 = n/10;
printf("dig1 = %i\n", dig1);
dig2 = n%10;
printf("dig2 = %i\n", dig2);
resultado = dig1+dig2;
printf("O resultado da soma dos dois d�gitos = %i", resultado);
}
