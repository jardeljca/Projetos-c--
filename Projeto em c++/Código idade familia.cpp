#include <stdio.h>
#include <locale.h>
//As duas bibliotecas acima foram inclusa para poder acentuar as letras do texto
int main(void){

int minhaidade;
minhaidade = 2020 - 1988;
int idadepai = 2020 - 1960;
int idademae = 2020 - 1966;
int idadeirma = 2020 - 1991;
int diferencapaieu = idadepai - minhaidade;
int diferencamaeeu = idademae - minhaidade;
int diferencaidadeeuirma = minhaidade - idadeirma;
int idadetotal = minhaidade + idadepai + idademae + idadeirma;

setlocale (LC_ALL, "Portuguese");
//A instrução acima foi inclusa para acentuar o texto
printf("-A minha idade é = %i anos\n", minhaidade);
printf("-A idade de meu pai é = %i anos\n", idadepai);
printf("-A idade da minha mãe é = %i anos\n", idademae);
printf("-A idade de minha irmã é = %i anos\n", idadeirma);

printf ("-Quando eu nasci, meu pai tinha %i anos\n e minha mãe tinha %i anos\n",
 diferencapaieu, diferencamaeeu);
 printf ("-Já minha irmã quando nasceu, eu tinha %i anos de idade\n",
  diferencaidadeeuirma);
  printf("-A soma de nossas idades é: %i anos\n", idadetotal);

return 0;
}


