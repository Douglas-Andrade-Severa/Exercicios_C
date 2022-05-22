#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Atividade 3

int main(){
	setlocale (LC_ALL, "Portuguese");
	int anoNascimento, anoAtual, calcIdade;
	
	printf("\nDigite o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	
	while(anoNascimento > 0000){
		
		printf("\nDigite o ano atual: ");
		scanf("%d", &anoAtual);

		calcIdade = anoAtual - anoNascimento;
		
		printf("\nIdade: %d", calcIdade);
		
		if(calcIdade >= 18){
			printf("\nAcesso liberado para entrar na festa!");
		}else{
			printf("\nAcesso negado, não poderá entrar na festa!");
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
		printf("\nDigite o ano de nascimento: ");
		scanf("%d", &anoNascimento);
	}
}
