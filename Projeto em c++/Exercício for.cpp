#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");
	printf("\nCálculo das notas\n");
	
	float nota1, nota2, nota3, media;
	setlocale (LC_ALL, "portuguese");
	printf("\nNota 1\n");
	scanf ("%f", &nota1);
	printf("\nNota 2\n");
	scanf ("%f", &nota2);
	printf("\nNota 3\n");
	scanf ("%f", &nota3);
	media = (nota1+nota2+nota3)/3;
	printf ("\nSua média é:=%f\n", media);
	
	if (media>=7){
		printf("\nVoçê foi aprovado. Parabéns.\n");
	}
	else {
		printf("\nVocê foi reprovado.\n");
	}
	
	//Alguns exemplos do comando for abaixo:
	//Mostrar os 30 primeiros números inteiros e positivos em ordem crescente:
	printf("\nMostrar os 30 primeiros números inteiros e positivos em ordem crescente:\n");
	int cont = 1;
	for (cont=1;cont<=30;cont=cont+1){
		printf ("\n%i\n", cont);
	}
	
	//Mostrar os 50 primeiros números inteiros e positivos em ordem decrescente:
	printf("\nMostrar os 50 primeiros números inteiros e positivos em ordem decrescente:\n");
	
	for (cont=50;cont>=1;cont=cont-1){
		printf("\n %i \n", cont);
	}
	
	//Mostrar os números ímpares entre 1 e 20:
	printf("\nMostrar os números ímpares entre 1 e 20:\n");
	for (cont=1; cont<=20; cont=cont+2){
		printf("\n%i\n", cont);
	}
	
	//Mostrar todas as dezenas entre 10 e 200 de forma crescente:
	printf("\nMostrar todas as dezenas entre 10 e 200 de forma crescente:\n");
	
	for(cont = 10; cont <= 200; cont=cont+10){
		printf("\n%i\n", cont);
	}
	
		//Mostrar todas as centenas entre 0 e 1000, em ordem decrescente:
	printf("\nMostrar todas as centenas entre 0 e 1000, em ordem decrescente:\n");
	
	for(cont=1000;cont>=100; cont=cont-100){
		printf("\n%i\n", cont);
	}
	
	//Mostrar a soma dos números inteiros e positivos entre 1 e 1000:
	printf("\nMostrar a soma dos números inteiros e positivos entre 1 e 1000:\n");
	int soma = 0;
	for(cont=1; cont<=1000; cont=cont+1)
	{
	soma = soma + cont;
	}
	printf("\n A soma dos números entre 1 e 1000 = %i \n", soma);
	
	//Mostrar a média aritimética dos números inteiros e positivos entre 1 e 100:
	printf("\n Mostrar a média aritimética dos números inteiros e positivos entre 1 e 100: \n");
	
	for (cont = 1; cont <=100; cont=cont+1)
	{
		soma = soma + cont;
	}
	media = soma/100;
	printf("\n A média aritimética dos números entre 1 e 100 é = %f \n", media);
	
//Exercício do vídeo: programa que leia um número e o repita 20x;
printf("\n programa que leia um número e o repita 20x \n");
	int numero;
	printf("\n Escreva um número inteiro.\n");
	scanf("%i", &numero);
	for (cont=1; cont <=20; cont =cont +1)
	{
		printf("\n Número:  %i \n", numero);
	}
	
	
/*Exercício 2: Crie um programa que leia 15 números inteiros e positivos
e mostre o maior deles:*/

printf("\n leia 15 números inteiros e positivos e mostre o maior deles:\n");
int maior = 0;
//(int cont;) essa variável não foi declarada nesse código devido ter sido mais acima
int num;
for(cont=1; cont<=15; cont=cont+1)
{
	printf("\n Digite um número: \n");
	scanf("%i", &num);
	if(num>maior){
		maior=num;
	}
	printf("\n O maior dos números lidos = %i \n", maior);
}

/*Exercício 3: Desenvolva um programa que leia o salário de 10 funcionários
de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.*/

printf("\n Desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa");

//int cont;
float salario, mediasalario, maiorsalario, somasalario;
maiorsalario = 0;
somasalario = 0;

for(cont=1; cont <=10; cont ++)
{
	printf("\n Digite o salário do funcionário: /n");
	scanf("%f", &salario);
	somasalario=somasalario+salario;
	if (salario>maiorsalario)
	{
		maiorsalario=salario;
	}
}

mediasalario=somasalario/10;
	printf("\n O maior salário da nossa empresa é = %.2f \n", maiorsalario);
	printf("\n A média salarial de nossa empresa é = %.2f \n", mediasalario);

/*Exercício 4: Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre
a media aritimética e a situação de aprovação de cada um deles. Lembre-se
que apenas a média igual ou acima de 7 aprova o aluno.*/
printf("\n NOtas dos alunos \n");

//int cont;
float nota01;
float nota02;
float nota03;
float medianota;

for (cont = 1; cont <= 40; cont = cont + 1)
{
printf("/nDigite a 1° nota/n");
scanf("%f", &nota01);
printf("/nDigite a 2° nota/n");
scanf("%f", &nota02);
printf("/nDigite a 3° nota/n");
scanf("%f", &nota03);
medianota = (nota01+nota02+nota03)/3;
if(medianota>=7){
	printf("/nMédia = %.2f. Aluno aprovado /n", medianota);
}
else{
	printf("/nMédia = %.2f. Aluno reprovado \n", medianota);
}
}

/*Exercício 5: desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos
funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários,
calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os
respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser
apresentado na tela.*/



}
