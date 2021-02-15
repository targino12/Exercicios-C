#include<stdio.h>
int main(){
	float dinheironacarteira,cotacao,dinheiroconvertido;
	printf("\ndigite o valor que voce possui na carteira:");
	scanf("%f",&dinheironacarteira);
	printf("\ndigite o valor da cotaçao:");
	scanf("%f",&cotacao);
	dinheiroconvertido=dinheironacarteira/cotacao;
	printf("\n caro usuario, voce possui hoje na carteira o equivalente a %0.2f dolares",dinheiroconvertido);
	
	system("pause");
}
