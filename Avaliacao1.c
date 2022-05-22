#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso Análise e Desenvolvimento de Sistemas 2022
//Introdução a programação de computadores
//Exercício 01
//Ler 2 numeros inteiros e positivos
//Exibir quais são os impares entre eles
//Exibir a contagem de números ímpares

int main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, aux, cont = 0;
	
	printf("Insira o primeiro número: ");
	scanf("%d", &num1);
	
	//Aqui faz a válidação se o primeiro número informado pelo usuário é positivo
	while(num1 < 0){
		system("cls");
		printf("\nERRO!!\nINSIRA APENAS NÚMERO POSITIVOS E INTEIROS\n");
		printf("Insira o primeiro número: ");
		scanf("%d", &num1);
	}
	
	printf("Insira o segundo número: ");
	scanf("%d", &num2);
	
	//Aqui faz a válidação se o segundo número informado pelo usuário é positivo
	while(num1 < 0){
		system("cls");
		printf("\nERRO!!\nINSIRA APENAS NÚMERO POSITIVOS E INTEIROS\n");
		printf("\nInsira o primeiro número: ");
		scanf("%d", &num2);
	}
	
	//Aqui faz a decisão para saber se número que número um é maior ou igual ao número 2 e vice-versa;
	if(num1 >= num2){
		//Aqui transfire o valo de num1 para a variável aux;
		aux = num1;
		//Aqui laço de repetição enquanto cont que recebeu num1 for >= num2
		printf("\nDentre os dois números digitados"); 
		while(aux >= num2){
			//Se o módulo (ou resto da divisão) de aux por 2 dentro do laço for diferente de zero...
			//A ideia é imprimir apenas os números imparares e conta-los
			if(aux % 2 != 0){
				printf("\n%d é um número impar", aux);
				//variavel cont recebe ela mesmo + 1 toda vez que a condição for atendida
				cont = cont + 1;
			}
			//Aqui decremento 1 da váriavel aux
			aux--;
		}
	}else{//Se a decisão acima não for atendida, siginifca que o num2 digitado pelo usuário é maior que num1
	//Aqui segue a mesma lógica utilizado acima
		printf("\nDentre os dois números digitados");
		aux = num2;
		while(aux >= num1){
			if(aux % 2 != 0){
				printf("\n%d é um número impar", aux);
				cont = cont + 1;
			}
			aux--;
		}
	}
	printf("\n\nA quantidade de número impares digitado entre %d e %d foi de %d numero(s)", num1, num2, cont);
		
}
