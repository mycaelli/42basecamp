/*
Escreva uma função iterativa que retorne um número. Esse número deve ser o
resultado da operação fatorial a partir do número passado como parâmetro.

Se o argumento não for válido, a função deve retornar 0.

5! = 5*4*3*2*1 = 120  
3! = 3*2*1 = 6  
*/

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{

	int fact;

	if (nb < 0)
		return 0;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}

	return fact;
}