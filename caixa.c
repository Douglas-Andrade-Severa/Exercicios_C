#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso Análise e Desenvolvimento de Sistemas 2022
//Introdução a programação de computadores

/*
Uma loja necessita a implantação de um sistema de caixa diário para controlar suas vendas.
Sabendo que a loja deseja utilizaro código V para compras à vista e o código P para compras a prazo,
faça um algoritmo que receba o código de venda e o valor de transações até que o código F (finalizar) seja informado.
Quando isso ocorrer, seu programa deve calcular e mostrar:
O valor total das compras à vista.
O valor total das compras a prazo.
O número total das compras efetuadas.
O valor total das compras do dia.
a.Seu programa não deve aceitar valor de compra negativo e/ou igual à zero.
b.Caso o usuário informe uma entrada inválida, deve-se permitir a digitação da mesma novamente.
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

//Função menu
void menu(){
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	printf("\n====== SISTEMA LOJA / MENU ======");
	printf("\n1 - CAIXA\n2 - RELATÓRIO DIÁRIO\n3 - SAIR\n");
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
			printf("Opção inválida! \nTente novamente!\n");
			system("pause");
			menu();
			break;
	}
}

//Função caixa
void caixa(){

	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("\n====== SISTEMA LOJA / FORMAS DE PAGAMENTO ======");
	printf("\nInforme o tipo de pagamento:\n(V) Compras à vista;\n(P) Compras a prazo;\n(F) Finalizar;\n(M) Menu;\nCódigo da venda:");
	scanf("%s", &op);
	
	
	switch(op){
		case 'v':
		case 'V':
			system("cls");
			printf("\n====== SISTEMA LOJA / PAGAMENTO À VISTA ======");
			printf("\nInfome o valor da venda: ");
			scanf("%f", &valor);
			while(valor <= 0){
				system("cls");
				printf("\n====== SISTEMA LOJA / PAGAMENTO À VISTA ======");
				printf("\nERRO!\nInsira um valor válido!");
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
			printf("\n====== SISTEMA LOJA / PAGAMENTO À PRAZO ======");
			printf("\nInfome o valor da venda: ");
			scanf("%f", &valor);
			while(valor <= 0){
				system("cls");
				printf("\n====== SISTEMA LOJA / PAGAMENTO À PRAZO ======");
				printf("\nERRO!\nInsira um valor válido!");
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
			printf("\nERRO!!\nDIGITE UMA OPÇÃO VÁLIDA");
			sleep(2);
			caixa();
	}

}

//Função relatório
void relatorio(){
	int num;
	
	for(num = 0; num < 25; num++){
		printf("AGUARDE!");
		system("cls");
	}
	
	if((valor != 0) || (vista != 0) || (prazo != 0)){
		system("cls");
		printf("\n====== SISTEMA LOJA / RELATÓRIO ======");
		printf("\nCompras à vista R$%.2f", vista);
		printf("\nCompras a prazo R$%.2f", prazo);
		printf("\nForam feitas %d compras hoje.", cont);
		printf("\nO valor total das compras R%.2f\n\n", vista + prazo);
		system("pause");
		menu();	
	}else{
		printf("\n====== SISTEMA LOJA / RELATÓRIO ======");
		printf("\nNenhuma venda foi realizada até o momento :( \n\n");
		system("pause");
		menu();	
	}
	
}

