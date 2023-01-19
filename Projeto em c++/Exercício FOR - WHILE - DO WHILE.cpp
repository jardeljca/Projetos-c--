#include <stdio.h>
#include <locale.h>

int main()
{

/*3º problema: desenvolva um programa que leia o salário bruto de 15 funcionários de uma empresa,
calcule e exiba o salário líquido de cada funcionário. Lembre-se que o salário líquido é calculado
abatendo o imposto do salário bruto, com base nesta tabela de imposto. Ao final, mostre o total de
salários brutos, salários líquidos e impostos de todos os funcionários.*/
//PROBLEMÁTICA RESOLVIDA EM FOR/WHILE/DO WHILE
setlocale(LC_ALL, "PORTUGUESE");

//VARIÁVEIS PARA AS TRÊS SITUAÇÕES:
int cont;
float salariobruto;
float salarioliquido;
float imposto;

//COMANDO EM FOR
	for (cont = 1; cont<= 5; cont++)
		{
			printf("Digite o salário bruto.\n\n");
			scanf ("%f", &salariobruto);
				if(salariobruto <= 999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 10;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("--------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 999.01 && salariobruto <=1999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 15;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 1999.01 && salariobruto <=9999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 20;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 9999.01 && salariobruto <=99999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 25;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >99999.01)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 30;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("------------------------------------------------------------------------------------------------\n");
					}
		}
		
printf ("-------------------------------------------------------------------------------------------------\n");
printf ("-------------------------------------------------------------------------------------------------\n");		
//COMANDO EM WHILE
printf("COMANDO EM WHILE \n\n");
cont = 1;
	while(cont<= 05)
		{
			printf("Digite o salário bruto.\n\n");
			scanf ("%f", &salariobruto);
				if(salariobruto <= 999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 10;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("--------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 999.01 && salariobruto <=1999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 15;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 1999.01 && salariobruto <=9999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 20;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 9999.01 && salariobruto <=99999)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 25;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >99999.01)
					{
						printf("O salário Bruto = %.2f\n\n", salariobruto);
						imposto = 30;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O salário liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
cont++;
		}

printf ("-------------------------------------------------------------------------------------------------\n");
printf ("-------------------------------------------------------------------------------------------------\n");		
//COMANDO EM DO WHILE
printf("COMANDO EM DO WHILE \n\n");
printf("NÃO SOUBE FAZER EM DO WHILE :(");

return 0;
}
