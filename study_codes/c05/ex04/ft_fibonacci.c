/*
Fibonacci is a special kind of series in which the current term is the sum of the previous two terms.

The first number in the Fibonacci sequence is 0, the second number is 1. 
The subsequent number is the result of the sum of the previous two 
*/
#include <stdio.h>

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
	{
		printf("%d ", index); 
		return (index);
	}
	int c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	//printf("%d", c);
	return c;
}

// Funcao principal.

int main() {

  // Para cada i (de 1 a n), calcula e imprime o
  // i-esimo termo da sequencia de Fibonacci.
  //int i;
  ft_fibonacci(6);
  printf("\n");
  return(0);
}