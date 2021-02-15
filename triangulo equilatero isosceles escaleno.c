#include<stdio.h>
int main(){
	int a,b,c;
	printf("digite os lado do triangulo:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a < b + c ||b < a + c || c < a + b)
	
	if(a==b && a==c)
	printf("\n O triangulo eh equilatero:");
	else 
	if(a==b || b==c || a==c){
		printf("\n O triangulo eh isosceles.");
	} else{
		printf("\n O triangulo eh escaleno.");
	}
	system("pause");
	return 0;

}
