#include <stdio.h>
#include <locale.h>

int main()
{

/*3� problema: desenvolva um programa que leia o sal�rio bruto de 15 funcion�rios de uma empresa,
calcule e exiba o sal�rio l�quido de cada funcion�rio. Lembre-se que o sal�rio l�quido � calculado
abatendo o imposto do sal�rio bruto, com base nesta tabela de imposto. Ao final, mostre o total de
sal�rios brutos, sal�rios l�quidos e impostos de todos os funcion�rios.*/
//PROBLEM�TICA RESOLVIDA EM FOR/WHILE/DO WHILE
setlocale(LC_ALL, "PORTUGUESE");

//VARI�VEIS PARA AS TR�S SITUA��ES:
int cont;
float salariobruto;
float salarioliquido;
float imposto;

//COMANDO EM FOR
	for (cont = 1; cont<= 5; cont++)
		{
			printf("Digite o sal�rio bruto.\n\n");
			scanf ("%f", &salariobruto);
				if(salariobruto <= 999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 10;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("--------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 999.01 && salariobruto <=1999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 15;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 1999.01 && salariobruto <=9999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 20;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 9999.01 && salariobruto <=99999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 25;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >99999.01)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 30;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
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
			printf("Digite o sal�rio bruto.\n\n");
			scanf ("%f", &salariobruto);
				if(salariobruto <= 999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 10;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("--------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 999.01 && salariobruto <=1999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 15;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 1999.01 && salariobruto <=9999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 20;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >= 9999.01 && salariobruto <=99999)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 25;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
				if(salariobruto >99999.01)
					{
						printf("O sal�rio Bruto = %.2f\n\n", salariobruto);
						imposto = 30;
						printf("O imposto = %.0f%%\n\n", imposto);
						salarioliquido = salariobruto - salariobruto*(imposto/100);
						printf("O sal�rio liquido = %.2f \n\n", salarioliquido);
printf ("-------------------------------------------------------------------------------------------------\n");
					}
cont++;
		}

printf ("-------------------------------------------------------------------------------------------------\n");
printf ("-------------------------------------------------------------------------------------------------\n");		
//COMANDO EM DO WHILE
printf("COMANDO EM DO WHILE \n\n");
printf("N�O SOUBE FAZER EM DO WHILE :(");

return 0;
}
