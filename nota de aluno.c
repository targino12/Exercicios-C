/*Escreva um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
Em seguida, atrav�s de um la�o while, pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma.*/
#include<stdio.h>
int main(){
	int total,count=1;
	float nota,soma=0.0;
	printf("numero de aluno que esta na sala de aula:");
	scanf("%d",&total);
	while(count<=total){
		printf("nota do aluno:");
		scanf("%f",&nota);
		soma=soma+nota;
		count++;
	}
	printf("media da turma:%0.2f",soma/total);
	
	
}
