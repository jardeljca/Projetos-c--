#include <stdio.h>
#include <locale.h>

int main () {
    /*desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos sal�rios dos funcion�rios
    de uma empresa. Na sequ�ncia, deve ler o sal�rio de cada um dos 5 funcion�rios, calcular e mostrar o
    novo sal�rio reajustado, aplicando a porcentagem de ajuste sobre os respectivos sal�rios atuais.
    Ao final, o maior sal�rio reajustado da empresa deve ser apresentado na tela.*/

    setlocale (LC_ALL, "PORTUGUESE");
    printf("Porcentagem de reajuste dos sal�rios\n");

    int cont;
    float porcentagem;
    float salarioantigo;
    float novosalario;
    float maiorsalario = 0;

    printf("Digite a porcentagem de reajuste \n");
    scanf ("%f", &porcentagem);
    for(cont=1; cont<=5; cont++)
    {
        printf("Digite o sal�rio do funcion�rio: /n");
        scanf("%f", &salarioantigo);
        novosalario=salarioantigo+salarioantigo*(porcentagem/100);
        printf("O novo sal�rio = %.2f \n\n", novosalario);
        if(novosalario>maiorsalario)
		{
        	maiorsalario=novosalario;
		}
        
    }

		printf("O maior sal�rio da empresa �: =%.2f \n", maiorsalario);
		
		
/*desenvolva um programa que leia um n�mero N e, em seguida, uma lista de N n�meros inteiros.
Este programa tamb�m deve calcular e mostrar a soma dos n�meros pares e dos n�meros �mpares da lista.*/
printf("N�meros inteiros impares e pares:\n\n");

//int cont;
int n,num,somapar,somaimpar;

somapar=0;

somaimpar=0;
printf ("Digite a quantidade de n�meros da lista: ");

scanf("%d",&n);

for (cont=1;cont<=n;cont++)

{

printf ("Digite um n�mero: ");

scanf("%d",&num);

if (num%2==0)

somapar=somapar+num;

else

somaimpar=somaimpar+num;

}

printf ("A soma dos n�meros pares = %d\n",somapar);

printf ("A soma dos n�meros �mpares = %d\n",somaimpar);

return 0;}
