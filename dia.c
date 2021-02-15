/*Vamos construir um programa para verificar o dia da semana a fim de exemplificar a utilização do switch…case.

O usuário vai digitar um número e o programa vai retornar o dia da semana equivalente ao número.*/
#include<stdio.h>
#include<conio.h>
int main(){
	int valor;
	printf("digite o valor de 1 a 7:");
	scanf("%d",&valor);
	switch(valor){
		case 1:
			printf("domingo\n:");
			break;
			case 2:
				printf("segunda-ferira\n:");
				break;
				case 3:
					printf("terca-feira\n:");
					break;
					case 4:
						printf("quarta-feira\n:");
						break;
						case 5:
						printf("quinta-feira\n:");
						break;
						case 6:
							printf("sexta-feira\n:");
							break;
							case 7:
								printf("sabado\n:");
								break;
									default:
									printf("opcao invalida:");
	}
}
