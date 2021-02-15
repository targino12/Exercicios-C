  /*Escreva  um  programa  para  ler  uma  temperatura  em  graus  Fa
hrenheit,  calcular  e  escrever  o  valor 
correspondente em graus Celsius.
C 
F - 32     
----------
= 
-----------
5 
9 */
#include<stdio.h>
int main(){
	float a=5,b=9,d,e,f,g;
	printf("digite o valor que quer converter para celsius:\n",a,b);
	scanf("%f",&d);
	e=(d-32);
	g=(a*e)/b;
	printf("\n:");
	printf(" %0.2f fahrenheit e igual a %0.2f a celsius\n",d,g);
	printf("\n:");
	system("pause");
} 
