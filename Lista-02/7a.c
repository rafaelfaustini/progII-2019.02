/* Fa�a um programa que contenha uma fun��o em C que receba como par�metro um n�mero
inteiro n�o negativo e retorne, como resultado da fun��o, o valor do seu fatorial.*/
#include <stdio.h>

int fat(n1);

int main()
{
	int n1=0;
	
	printf("Digite n1: ");
	scanf("%d",&n1);
	
	printf("\nO fatorial vai ser: %d", fat(n1));
	
	return 0;
}

int fat(int n1)
{
	int fat;
	
	for(fat = 1; n1 > 1; n1--)
	{
		fat *= n1;
	}

	return fat;
}
