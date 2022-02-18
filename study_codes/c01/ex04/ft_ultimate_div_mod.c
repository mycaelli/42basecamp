#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int aux1 = 0;
	aux1 = *a / *b;
	*b = *a % *b;
	*a = aux1;
	printf("%d\n", *a);
	printf("%d\n", *b);
}