/*Um cercado contém patos e coelhos. Faça um programa que solicita o total de cabeças e o total de patas, e
 escreve quantos patos e quantos coelhos existem no cercado*/
 #include<stdio.h>
 int main(){
 	int coelhos,patos,cabecas,patas;
 	printf("\ndigite o total de cabecas:");
 	scanf("%d",&cabecas);
 	printf("\ndigite o total de patas:");
 	scanf("%d",&patas);
 	patos=(4*cabecas-patas)/2;
 	coelhos=cabecas-patos;
 	printf("\ndigite a quantidade de coelhos que eh:%d",coelhos);
 	printf("\ndigite a quantidade de patos que eh:%d",patos);
 	
 	
 	

 	system("pause");
 	return 0;
 	
 }
