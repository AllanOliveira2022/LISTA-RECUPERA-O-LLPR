#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_Brazil");
	int codigo,anoN,anoI,idade,tempoT;
	
	printf("SUA SITUAÇÃO PARA APOSEMTADORIA  :\n");
	printf("Digite seu código : \n");
	scanf("%d", &codigo);
	
	printf("Digite o seu ano de nascimento : \n");
	scanf("%d",&anoN);
	
	printf("Digite o ano que você entrou na empresa : \n");
	scanf("%d", &anoI );
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	idade = (2022 - anoN);
	tempoT = (2022 - anoI);
	printf("SUA IDADE : %d Anos\n", idade);
	printf("TEMPO NA EMPRESA : %d Anos\n", tempoT);
	
	printf("SITUAÇÃO : ");
	if((idade >= 65) || (tempoT >= 30)){
		printf("Requerer aposentadoria \n");
	}else if(((idade >= 60 ) && (tempoT >= 25))){//1962 , 1997
		printf("Requerer aposentadoria \n");
	}else{
		printf(" Não Requerer \n");
	}
	
	
	
	
	return 0;
}
