//Escreva um aplicativo em C mostra todos os n�meros �mpares de 1 at� 100.
#include<stdio.h>
int main(){
	int count=1;
	while(count<=10){
		if(count%2==1)
		printf("%d\n",count);
		count++;
	}
}
