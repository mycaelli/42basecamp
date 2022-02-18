#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
	int aux;

	aux = *a; //aux = valor de a
	*a = *b; //valor de a = valor de b
	*b = aux; //valor de b = aux

	printf("DEPOIS\n");
	printf("Valor de a: %d\n", *a);
	printf("Valor de b: %d\n", *b);
}