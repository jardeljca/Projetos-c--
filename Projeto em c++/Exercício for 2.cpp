#include <stdio.h>
#include <locale.h>

int main () {
    /*desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários
    de uma empresa. Na sequência, deve ler o salário de cada um dos 5 funcionários, calcular e mostrar o
    novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais.
    Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.*/

    setlocale (LC_ALL, "PORTUGUESE");
    printf("Porcentagem de reajuste dos salários\n");

    int cont;
    float porcentagem;
    float salarioantigo;
    float novosalario;
    float maiorsalario = 0;

    printf("Digite a porcentagem de reajuste \n");
    scanf ("%f", &porcentagem);
    for(cont=1; cont<=5; cont++)
    {
        printf("Digite o salário do funcionário: /n");
        scanf("%f", &salarioantigo);
        novosalario=salarioantigo+salarioantigo*(porcentagem/100);
        printf("O novo salário = %.2f \n\n", novosalario);
        if(novosalario>maiorsalario)
		{
        	maiorsalario=novosalario;
		}
        
    }

		printf("O maior salário da empresa é: =%.2f \n", maiorsalario);
		
		
/*desenvolva um programa que leia um número N e, em seguida, uma lista de N números inteiros.
Este programa também deve calcular e mostrar a soma dos números pares e dos números ímpares da lista.*/
printf("Números inteiros impares e pares:\n\n");

//int cont;
int n,num,somapar,somaimpar;

somapar=0;

somaimpar=0;
printf ("Digite a quantidade de números da lista: ");

scanf("%d",&n);

for (cont=1;cont<=n;cont++)

{

printf ("Digite um número: ");

scanf("%d",&num);

if (num%2==0)

somapar=somapar+num;

else

somaimpar=somaimpar+num;

}

printf ("A soma dos números pares = %d\n",somapar);

printf ("A soma dos números ímpares = %d\n",somaimpar);

return 0;}
