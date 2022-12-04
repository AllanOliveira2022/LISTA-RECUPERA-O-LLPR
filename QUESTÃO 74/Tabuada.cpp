#include <stdio.h>
#include <locale.h>
//questão 74
int main(){
setlocale(LC_ALL,"portuguese_Brazil");


printf("TABUALA DE 1 A 10 : \n");

for(int i=1; i <= 10; i++ ){
for(int j=1; j <= 10; j++){
printf("%d x %d = %d\n", i,j,(i * j));

}
printf("\n");
}




return 0;
}


//questões
//74,62,42
