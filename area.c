#include<stdio.h>
int main(){
	float area, raio;
	printf("digite o circilo do raio");
	scanf("%f",&raio);
	area=3.14*raio*raio;
	printf("calculada a area foi: %0.2f e calculada o raio foi: %0.2f", area,raio);
	
	system ("pause");
}
