/*
#include <iostream>
 
using namespace std;
 
int main() {
 
int NumFunc, HorasTrab;
float VlHora, salario;

scanf("%i", &NumFunc);
scanf("%i", &HorasTrab);
scanf("%f", &VlHora);
salario = HorasTrab*VlHora;


printf("NUMBER = %i\n", NumFunc);
printf("SALARY = %.2f\n", salario);
    return 0;
}
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cctype>
 
using namespace std;
 
int main() {
 
char nome[30];
double salariofixo, totalvendas, salariofinal;

scanf("%s", nome);
scanf("%lf", salariofixo);
scanf("%lf", totalvendas);
salariofinal = salariofixo + (totalvendas*15)/100;


printf("%s\n", nome);
printf("%lf\n", salariofixo);
printf("%lf\n", totalvendas);
printf("%lf\n", salariofinal);
 
    return 0;
}
