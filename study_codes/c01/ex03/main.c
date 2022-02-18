#include <stdio.h>
#include "ft_div_mod.c"

int main ()
{
	int a = 1234566;
	int b = 123456;
	//int *p = &a;
	//int *mod = &b;
	printf("ANTES\n");
	printf("Valor de a: %d\n", &a);
	printf("Valor de b: %d\n", &b);
	ft_div_mod(9, 2, &a, &b);
	printf("DEPOIS\n");
	printf("Valor de a: %d\n", &a);
	printf("Valor de b: %d\n", &b);
}