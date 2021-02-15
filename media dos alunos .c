//Leia o número de alunos de uma turma. Para cada aluno leia a nota da 1ª prova e a nota da 2ª prova, calcule e escreva a média aritmética.
#include<stdio.h>
int main(){
	int vc;
	float vetornota1[vc],vetornota2[vc],vetornota3[vc],vetormedia[vc];
	printf("diginte a primeira nota:\n");
	scanf("%f",&vetornota1[vc]);
	printf("digite a segunda nota:\n");
	scanf("%f",&vetornota2[vc]);
	printf("digite a terceira nota:\n");
	scanf("%f",&vetornota3[vc]);
	vetormedia[vc]=(2*vetornota1[vc]+3*vetornota2[vc]+4*vetornota3[vc])/9;
	printf("\n A media do aluno %d e media final %0.2f %0.2f %0.2f",vc,vetormedia[vc]);
	printf("\n\n:");
	system("pause");
	return 0;
	
}
