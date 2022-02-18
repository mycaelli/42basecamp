#include "ft_ft.c"
#include <stdio.h>

int main ()
{
	int x = 456;
	printf("Antes da função: %d\n", x);
	ft_ft(&x);
	printf("Depois da função: %d\n", x);
}