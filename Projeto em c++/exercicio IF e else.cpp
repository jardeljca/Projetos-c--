#include <stdio.h>

int main ()
{
	int cadastrado, ativo, logado;
	char opcao;
	cadastrado = ativo = logado = 0;
	
	printf("Você deseja cadastra sua conta? S/N \n");
	scanf(" %c" , &opcao);
	
	if(opcao == 'S'){
		cadastrado = 1;
		printf("\n Conta cadastrada \n");
	}
	
		printf("Você deseja ativar sua conta? S/N \n");
	scanf(" %c" , &opcao);
	
	if(opcao == 'S'){
		ativo = 1;
		printf("\n Conta ativada. \n");
	}
	
		printf("Você deseja logar sua conta? S/N \n");
	scanf(" %c" , &opcao);
	
	if(opcao == 'S'){
		logado = 1;
		printf("\n Conta logada. \n");
	}
	
	if((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
		printf("\n Seja bem vindo! \n");
	} else {
		printf("\n Algo deu errado \n");
	}
}
