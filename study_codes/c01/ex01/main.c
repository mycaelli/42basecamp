#include <stdio.h>
#include "ft_ultimate_ft.c"

int main ()
{
	int var = 84;
	int *p1 = &var;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	printf("Antes da função: %d\n", var);
	ft_ultimate_ft(p9);
	printf("Depois da função: %d\n", var);
}