/*
The first number in the Fibonacci sequence is 0, the second number is 1. 
The subsequent number is the result of the sum of the previous two 
*/

#include <stdio.h>

void fib(int index)
{
	int f1 = 0; //first number
	int f2 = 1; //second number
	int fn; //next number in sequence
	int i = 2;
	int a[5];

	a[0] = 0;
	a[1] = 1;
	//printf("%d, %d, ", f1, f2);
	while(i < index)
	{
		fn = f1 + f2; //proximo numero eh o soma dos dois anteriores
		//printf("%d, ", fn);
		f1 = f2; //o primeiro numero = ao proximo dele
		f2 = fn; //recebe o valor da soma de f1 e f2
		a[i] = fn;
		i++;
	}
	printf("\n");

	i = 0;
	while(i < 6)
	{
		printf("%d ", a[i]);
		i++;
	}
}

int main()
{
	fib(6);
}