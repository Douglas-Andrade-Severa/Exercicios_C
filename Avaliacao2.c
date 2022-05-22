#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso Análise e Desenvolvimento de Sistemas 2022
//Introdução a programação de computadores
//Atividade 2
// ler 3 valores reais
// calcular e exibir a soma, produto e média
// parar quando um conjunto não entrar com valores crescentes
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, resultado;
	
	
	printf("\nDigite o primeiro número: ");
	scanf("%f", &num1);
	
	printf("\nDigite o segundo número: ");
	scanf("%f", &num2);
	
	if(num2 <= num1){
		printf("Número inválido!");
		system ("exit");
	}else{
		printf("\nDigite o terceiro número: ");
		scanf("%f", &num3);
	
		if(num3 <= num2){
			printf("Número inválido!");
			system ("exit");
		}
	}
	
	
	while((num1 < num2) && (num2 < num3)){
		
		printf("\nA soma dos número inseridos são: %0.2f", resultado = num1 + num2 + num3);
		printf("\nA multiplicação dos número inseridos são: %0.2f", resultado = num1 * num2 * num3);
		printf("\nA média dos número inseridos são: %0.2f", resultado = (num1 + num2 + num3)/3);
		printf("\n\n");
		system("pause");
		
		system("cls");
		printf("\nDigite o primeiro número: ");
		scanf("%f", &num1);
		
		printf("\nDigite o segundo número: ");
		scanf("%f", &num2);
		
		if(num2 <= num1){
			printf("Número inválido!");
			system ("exit");
		}else{
			printf("\nDigite o terceiro número: ");
			scanf("%f", &num3);
		
			if(num3 <= num2){
				printf("Número inválido!");
				system ("exit");
			}
		}
	}
	
	
}
