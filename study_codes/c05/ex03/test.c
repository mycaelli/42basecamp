#include <stdio.h>
#include <math.h>

int power(int base, int a)
{
	if (a != 0)
		return (base *power(base, a - 1));
	else
		return 1;
}

int main ()
{
	printf("\n");
//	int x4 = -8;
	//int p4 = 2;
	//int result = pow(-8, 2);
	printf("%f\n", pow(-8, 2));
	//printf("Valores fornecidos: %d ^ %d\n", x4, p4);
	//printf("Resultado esperado: -64\n");
	//printf("Resultado obtido: %d\n", power(x4, p4));
	printf("\n");
}