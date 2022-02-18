#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main ()
{
	int a_num = 10;
	int b_num = 2;

	printf("ANTES\n");
	printf("Valor de a e b: %d %d\n", a_num, b_num);
	ft_ultimate_div_mod(&a_num, &b_num);
	printf("DEPOIS\n");
	printf("Valor de a e b: %d %d\n", a_num, b_num);
}