#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso An�lise e Desenvolvimento de Sistemas 2022
//Introdu��o a programa��o de computadores
//Atividade 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	int qtd, coluna, linha;
	
	printf("\nQual o tamanho do quadrado: ");
	scanf("%d", &qtd);
	while(qtd < 2 ||qtd > 10){
		printf("\nDigite o tamanho entre 2 e 10! ");
		scanf("%d", &qtd);
	}
	
	linha = qtd;
	while(linha > 0)
	{
		coluna = 0;
		while(coluna < linha)
		{
			printf(" * ");
			coluna++;
		}
		printf("\n");
		linha--;
	}
	
	
}
