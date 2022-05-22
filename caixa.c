#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso An�lise e Desenvolvimento de Sistemas 2022
//Introdu��o a programa��o de computadores

/*
Uma loja necessita a implanta��o de um sistema de caixa di�rio para controlar suas vendas.
Sabendo que a loja deseja utilizaro c�digo V para compras � vista e o c�digo P para compras a prazo,
fa�a um algoritmo que receba o c�digo de venda e o valor de transa��es at� que o c�digo F (finalizar) seja informado.
Quando isso ocorrer, seu programa deve calcular e mostrar:
O valor total das compras � vista.
O valor total das compras a prazo.
O n�mero total das compras efetuadas.
O valor total das compras do dia.
a.Seu programa n�o deve aceitar valor de compra negativo e/ou igual � zero.
b.Caso o usu�rio informe uma entrada inv�lida, deve-se permitir a digita��o da mesma novamente.
*/

void menu();
void caixa();
void relatorio();

char op;
float valor = 0, prazo = 0, vista = 0;
int cont;


int main (){
	
	menu();
}

//Fun��o menu
void menu(){
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	printf("\n====== SISTEMA LOJA / MENU ======");
	printf("\n1 - CAIXA\n2 - RELAT�RIO DI�RIO\n3 - SAIR\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			caixa();
			break;
		case 2:
			relatorio();
		break;
		case 3:
			printf("Saindo!");
			system("exit");
			break;
		default:
			system("cls");
			printf("Op��o inv�lida! \nTente novamente!\n");
			system("pause");
			menu();
			break;
	}
}

//Fun��o caixa
void caixa(){

	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n====== SISTEMA LOJA / FORMAS DE PAGAMENTO ======");
	printf("\nInforme o tipo de pagamento:\n(V) Compras � vista;\n(P) Compras a prazo;\n(F) Finalizar;\n(M) Menu;\nC�digo da venda:");
	scanf("%s", &op);
	
	
	switch(op){
		case 'v':
		case 'V':
			system("cls");
			printf("\n====== SISTEMA LOJA / PAGAMENTO � VISTA ======");
			printf("\nInfome o valor da venda: ");
			scanf("%f", &valor);
			while(valor <= 0){
				system("cls");
				printf("\n====== SISTEMA LOJA / PAGAMENTO � VISTA ======");
				printf("\nERRO!\nInsira um valor v�lido!");
				printf("\nDigite o valor da compra: ");
				scanf("%f", &valor);
			}
			vista = vista + valor;
			cont++;
			printf("\n\nAguarde!\nSalvando!");
			sleep(1);
			caixa();
		break;
		
		case 'p':
		case 'P':
			system("cls");
			printf("\n====== SISTEMA LOJA / PAGAMENTO � PRAZO ======");
			printf("\nInfome o valor da venda: ");
			scanf("%f", &valor);
			while(valor <= 0){
				system("cls");
				printf("\n====== SISTEMA LOJA / PAGAMENTO � PRAZO ======");
				printf("\nERRO!\nInsira um valor v�lido!");
				printf("\nDigite o valor da compra: ");
				scanf("%f", &valor);
			}
			prazo = prazo + valor;
			cont++;
			printf("\n\nAguarde!\nSalvando!");
			sleep(1);
			caixa();
		break;
		
		case 'f':
		case 'F':
			relatorio();
		break;
		
		case 'm':
		case 'M':
			menu();
		break;
		
		default:
			printf("\n====== SISTEMA LOJA / FORMAS DE PAGAMENTO ======");
			printf("\nERRO!!\nDIGITE UMA OP��O V�LIDA");
			sleep(2);
			caixa();
	}

}

//Fun��o relat�rio
void relatorio(){
	int num;
	
	for(num = 0; num < 25; num++){
		printf("AGUARDE!");
		system("cls");
	}
	
	if((valor != 0) || (vista != 0) || (prazo != 0)){
		system("cls");
		printf("\n====== SISTEMA LOJA / RELAT�RIO ======");
		printf("\nCompras � vista R$%.2f", vista);
		printf("\nCompras a prazo R$%.2f", prazo);
		printf("\nForam feitas %d compras hoje.", cont);
		printf("\nO valor total das compras R%.2f\n\n", vista + prazo);
		system("pause");
		menu();	
	}else{
		printf("\n====== SISTEMA LOJA / RELAT�RIO ======");
		printf("\nNenhuma venda foi realizada at� o momento :( \n\n");
		system("pause");
		menu();	
	}
	
}

