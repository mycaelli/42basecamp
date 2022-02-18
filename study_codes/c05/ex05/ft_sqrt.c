#include <stdio.h>

int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	/*
		descobrir qual eh a raiz quadrada de nb
			ex: nb = 4
				return 2
				nb = 9
					return 3
		
		9 / x -> quociente = x

		9 / x = x

	*/

	int half;
	int i;

	half = nb / 2;
	i = 1;
	while(i <= half)
	{
		if (nb / i == i)
			return i;
		i++;
	}
	return 0;
}
