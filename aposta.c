/*Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido proporcionalmente ao valor que cada deu para a realiza��o da aposta. 
Fa�a um programa que l� quanto cada apostador investiu, l� o valor do pr�mio, e escreve quanto cada um ganharia*/
#include<stdio.h>
int main(){
	float amigo1,amigo2,amigo3,aposta,premio1,premio2,premio3,premiototal;
	printf("digite o valor do primeiro apostador:");
	scanf("%f",&amigo1);
	printf("digite o valor do segundo apostador:");
	scanf("%f",&amigo2);
	printf("digite o valor do terceiro apostador:");
	scanf("%f",&amigo3);
	
	printf("digite o valor do premio total sorteado:");
	scanf("%f",&premiototal);
	aposta=amigo1+amigo2+amigo3;
	premio1=(amigo1/aposta)*premiototal;
	premio2=(amigo2/aposta)*premiototal;
	premio3=(amigo3/aposta)*premiototal;
	
	printf("\n primero amigo ganhou %0.2f",premio1);
	printf("\n segundo amigo ganhou %0.2f",premio2);
	printf("\n terceiro amigo ganhou %0.2f",premio3);
	
	
	system("pause");
}
