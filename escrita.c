//Escreva um aplicativo em C que recebe inteiro e mostra os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro.
#include <stdio.h>

int main()
{
        int num,
            count = 1;

        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("IMPARES \tPARES\n");

        while(count <= num)
        {
            if(count%2 == 1)
                printf("    %d \t",count);
            else
                printf("    \t %d\n", count);

            count++;
        }
}
