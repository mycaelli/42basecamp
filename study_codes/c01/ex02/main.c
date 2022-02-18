#include "ft_swap.c"
#include <stdio.h>

int main ()
{
	int a = 7;
	int b = 5;

	int *pa = &a;
	int *pb = &b;
	printf("ANTES\n");
	printf("Valor de a: %d\n", *pa);
	printf("Valor de b: %d\n", *pb);
	ft_swap(pa, pb);
	printf("DEPOIS\n");
	printf("Valor de a: %d\n", *pa);
	printf("Valor de b: %d\n", *pb);
}