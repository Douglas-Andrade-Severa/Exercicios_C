#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso An�lise e Desenvolvimento de Sistemas 2022
//Introdu��o a programa��o de computadores
//Atividade 2
// ler 3 valores reais
// calcular e exibir a soma, produto e m�dia
// parar quando um conjunto n�o entrar com valores crescentes
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, resultado;
	
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%f", &num2);
	
	if(num2 <= num1){
		printf("N�mero inv�lido!");
		system ("exit");
	}else{
		printf("\nDigite o terceiro n�mero: ");
		scanf("%f", &num3);
	
		if(num3 <= num2){
			printf("N�mero inv�lido!");
			system ("exit");
		}
	}
	
	
	while((num1 < num2) && (num2 < num3)){
		
		printf("\nA soma dos n�mero inseridos s�o: %0.2f", resultado = num1 + num2 + num3);
		printf("\nA multiplica��o dos n�mero inseridos s�o: %0.2f", resultado = num1 * num2 * num3);
		printf("\nA m�dia dos n�mero inseridos s�o: %0.2f", resultado = (num1 + num2 + num3)/3);
		printf("\n\n");
		system("pause");
		
		system("cls");
		printf("\nDigite o primeiro n�mero: ");
		scanf("%f", &num1);
		
		printf("\nDigite o segundo n�mero: ");
		scanf("%f", &num2);
		
		if(num2 <= num1){
			printf("N�mero inv�lido!");
			system ("exit");
		}else{
			printf("\nDigite o terceiro n�mero: ");
			scanf("%f", &num3);
		
			if(num3 <= num2){
				printf("N�mero inv�lido!");
				system ("exit");
			}
		}
	}
	
	
}
