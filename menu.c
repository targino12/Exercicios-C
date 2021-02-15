/*O cardapio de uma lanchonete é o seguintes:
código preço unitario
A-cachorro_quente_1.10
B-bauru_simples_1.30
C-bauru_c/_ovo_1.50
D-Hamburger_1.10
E-cherquetes_1.20
F-refrigerante_1.00
escreva um programa que leia o codigo do menu e valor a ser pago*/
#include<stdio.h>
#include<conio.h>
int main(){
	char codigo;
	int quantidade;
	float valor;
	printf("\ndigite a opcoa desejada:");
	printf("\nA -cachorroquente-1.10:");
	printf("\nB -baurusimples-1.30:");
	printf("\nC -bauruc/ovo-1.50:");
	printf("\n:");
	
	
	codigo=getche();
	
	printf("digite a quantidade desde item\n:");
	scanf("%d",&quantidade);
	switch(codigo){
		case 'A':
			valor=quantidade*1.10;
			printf("\no valor total a ser pago sera:%0.2f",valor);
			break;
			case 'B':
				valor=quantidade*1.30;
				printf("\no valor total a ser pago sera:%0.2f",valor);
				break;
				case 'C':
					valor=quantidade*1,50;
					printf("\n o valor total a ser pago sera: %0.2f",valor);
					break;
								default:
									printf("opcao invalida.");
	}
	
	system("pause");
}
