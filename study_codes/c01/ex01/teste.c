#include <stdio.h>

void teste()
{
	int var;
	int *ptr; //ponteiro
	int **pptr; //ponteiro para ponteiro

	var = 3000;

	ptr = &var; //ptr guarda o endereço de var
	pptr = &ptr; //pptr guarda o endereço de ptr

	printf("Value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);
}