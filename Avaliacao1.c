#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso An�lise e Desenvolvimento de Sistemas 2022
//Introdu��o a programa��o de computadores
//Exerc�cio 01
//Ler 2 numeros inteiros e positivos
//Exibir quais s�o os impares entre eles
//Exibir a contagem de n�meros �mpares

int main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, aux, cont = 0;
	
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &num1);
	
	//Aqui faz a v�lida��o se o primeiro n�mero informado pelo usu�rio � positivo
	while(num1 < 0){
		system("cls");
		printf("\nERRO!!\nINSIRA APENAS N�MERO POSITIVOS E INTEIROS\n");
		printf("Insira o primeiro n�mero: ");
		scanf("%d", &num1);
	}
	
	printf("Insira o segundo n�mero: ");
	scanf("%d", &num2);
	
	//Aqui faz a v�lida��o se o segundo n�mero informado pelo usu�rio � positivo
	while(num1 < 0){
		system("cls");
		printf("\nERRO!!\nINSIRA APENAS N�MERO POSITIVOS E INTEIROS\n");
		printf("\nInsira o primeiro n�mero: ");
		scanf("%d", &num2);
	}
	
	//Aqui faz a decis�o para saber se n�mero que n�mero um � maior ou igual ao n�mero 2 e vice-versa;
	if(num1 >= num2){
		//Aqui transfire o valo de num1 para a vari�vel aux;
		aux = num1;
		//Aqui la�o de repeti��o enquanto cont que recebeu num1 for >= num2
		printf("\nDentre os dois n�meros digitados"); 
		while(aux >= num2){
			//Se o m�dulo (ou resto da divis�o) de aux por 2 dentro do la�o for diferente de zero...
			//A ideia � imprimir apenas os n�meros imparares e conta-los
			if(aux % 2 != 0){
				printf("\n%d � um n�mero impar", aux);
				//variavel cont recebe ela mesmo + 1 toda vez que a condi��o for atendida
				cont = cont + 1;
			}
			//Aqui decremento 1 da v�riavel aux
			aux--;
		}
	}else{//Se a decis�o acima n�o for atendida, siginifca que o num2 digitado pelo usu�rio � maior que num1
	//Aqui segue a mesma l�gica utilizado acima
		printf("\nDentre os dois n�meros digitados");
		aux = num2;
		while(aux >= num1){
			if(aux % 2 != 0){
				printf("\n%d � um n�mero impar", aux);
				cont = cont + 1;
			}
			aux--;
		}
	}
	printf("\n\nA quantidade de n�mero impares digitado entre %d e %d foi de %d numero(s)", num1, num2, cont);
		
}
