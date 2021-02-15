#include<stdio.h>
int main(){
	int num,aux;
	aux=0;
	printf("telefonou para a vitima?:/n");
	printf("responda 1 para sim e 2 para nao:/n");
	scanf("%d",&num);
	if(num==1){
		aux=aux+1;
	}
	printf("esteve no local do crime?:/n");
	printf("responda 1 para sim e 2 para nao");
	scanf("%d",&num);
	if(num==1){
		aux=aux+1;
	}
	printf("mora perto da vitima?:/n");
	printf("responda 1 para sim e 2 para nao/n");
	scanf("%d",&num);
	if(num==1){
		aux=aux+1;
	}
	printf("devia a vitima?/n:");
	printf("responda 1 para sim e 2 para nao:/n");
	scanf("%d",&num);
	if(num==1){
		aux=aux+1;
	}
	printf("ja trabalho com a vitima?:/n");
	printf("responda 1 para sim e 2 para nao/n");
	scanf("%d",&num);
	if(num=1){
		aux=aux+1;
	}
	if(aux==2)
	printf("suspeito/n:");
	if(aux==4 || aux==3)
	printf("cumplice");
	if(aux==5)
	printf("assassino");
	if(aux<2)
	printf("incocente");
	getch();
	
}
