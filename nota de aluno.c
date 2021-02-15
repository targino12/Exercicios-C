/*Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a média, aritmética, da turma.*/
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
