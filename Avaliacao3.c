#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso An�lise e Desenvolvimento de Sistemas 2022
//Introdu��o a programa��o de computadores
//Atividade 3
// valida��o de idade com base no ano de nascimento
// e ano atual
// parar quando usu�rio informar 0000

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
			printf("\nAcesso negado, n�o poder� entrar na festa!");
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
		printf("\nDigite o ano de nascimento: ");
		scanf("%d", &anoNascimento);
	}
	printf("Obrigado por usar o programa!");
}
