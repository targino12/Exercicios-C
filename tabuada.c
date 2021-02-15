/* Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).*/
#include<stdio.h>
int main(){
	int num, count=1;
	printf("digite o numero:");
	scanf("%d",&num);
	while(count<=10){
		printf("%d*%d\n",num,count,num*count);
		count++;
	}
}

