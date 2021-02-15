#include<stdio.h>
int main(){
	char codigo;
	int quantidade;
	float valor;
	printf("digite a opçao do menu:");
	printf("\nA-cachorroquente-1.10:");
	printf("\nB-baurusimple-1.30:");
	printf("\nC-baurucomovo-1.50:");
	printf("\nD-hamburger-1.10:");
	printf("\nE-cheesburger-1.30:");
	printf("\nF-refrigerante-1.00:");
	printf("\n");
	codigo=getch();
		printf("digite a quantidade deste item/n:");
		scanf("%d",&quantidade);
		switch(codigo){
			case 'A':
				valor=quantidade*1.10;
				printf("o valor total a ser pago sera: %0.2f", valor);
				break;
				case 'B':
					valor=quantidade*1.30;
				printf("o valor total a ser pago sera: %0.2f",valor);
				break;
				case'C':
					valor=quantidade*1.50;
					printf("\no valor total a ser pago sera:%0.2f",valor);
					break;
					case 'D':
						valor=quantidade*1.10;
						printf("\no valor total a ser pago sera:%0.2f",valor);
						break;
						case'E':
							valor=quantidade*1.30;
							printf("\no valor a ser pago sera:%0.2f",valor);
							break;
							case'F':
								valor=quantidade*1.00;
								printf("\no valor a ser pago sera:%0.2f",valor);
								break;
								default:
									printf("opçao invalida.");
		}
		
			
					
	
	
	system("pause");
}
