#include <stdio.h>
#include <locale.h>

//@Douglas Andrade Severa
//Aluno do Curso Análise e Desenvolvimento de Sistemas 2022
//Introdução a programação de computadores
//Atividade 4

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, totalAlunos, brancos = 0, nulos = 0, cand1 = 0, cand2 = 0, cand3 = 0, op;
	
	printf("Insira a quantidade de alunos: ");
	scanf("%d", &totalAlunos);
	
	while(i <= totalAlunos){
		printf("\nDigite o seu voto aluno n° %d: ", i);
		scanf("%d", &op);
		switch(op){
			case 0:
				printf("Voto em branco!!\n");
				brancos = brancos + 1;
				break;
				
			case 1:
				printf("Voto para o candidato 1\n");
				cand1 = cand1 + 1;
				break;
				
			case 2:
				printf("Voto para o candidato 2\n");
				cand2 = cand2 + 1;
				break;
			case 3:
				printf("Voto para o candidato 3\n");
				cand3 = cand3 + 1;
				break;
			default:
				printf("Voto nulo!\n");
				nulos = nulos + 1;
				break;
		}
		i++;	
	}
	
	system("cls");
	printf("\n------------- RELATÓRIO --------------\n");
	printf("\nNúmero total de alunos aptos a votar: %d", totalAlunos);
	printf("\nTotal de votos em brancos: %d", brancos);
	printf("\nTotal de votos nulos: %d", nulos);
	printf("\nTotal de votos para o candidato 1: %d", cand1);
	printf("\nTotal de votos para o candidato 2: %d", cand2);
	printf("\nTotal de votos para o candidato 3: %d", cand3);
}
