//Para doar sangue � necess�rio ter entre 18 e 67 anos. 
//Fa�a um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou n�o. Use alguns dos operadores l�gicos OU (||) e E (&&).
#include<stdio.h>
int main(){
	int idade;
	printf("digite sua idade:");
	scanf("%d",&idade);
	
    if( (idade >= 18) && (idade <=67)){
		printf("voce pode doar sangue:");
	}else{
		printf("voce nao pode doar sangue");
	}
}
