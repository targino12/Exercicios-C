/*Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo. 
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.*/
#include<stdio.h>
int main(){
	int dia,mes,ano;
	printf("digite o dia:");
	scanf("%d",&dia);
	printf("digite o mes:");
	scanf("%d",&mes);
	printf("digite o ano:");
	scanf("%d",&ano);
	if((dia<1)||(dia>31)){
		printf("dia invalido:");
	}else{
		if((mes<1)||(mes>31)){
			printf("mes invalido:");
		}else{
			if(ano>2013){
				printf("ano invalido:");
			}else{
				printf("data valida:");
			}
		}
	}

}
