#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
		int  num;
		float nota_Aluno,notas_Acumuladas,media;
		
		printf(" Digite quantos alunos tem na sala : ");
		scanf("%d", &num);
		for (int i = 1; i <= num; i++){
			printf("Digite a nota do aluno : \n");
			scanf("%f", &nota_Aluno);
			
			notas_Acumuladas = notas_Acumuladas + nota_Aluno;
		}
		media = notas_Acumuladas / num;
		printf(" A média das notas é : %.2f  ",media);
	return 0;
}
