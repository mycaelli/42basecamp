//verificar se o numero eh par
//verificar se ele é divisivel pela metade dele

//0 e 1 não são números primos -> retorna 0
//retorne 1 se o número for primo e 0 

int ft_is_prime(int nb)
{
	if (nb == 1 || nb == 0 || nb % 2 == 0)
		return 0;
	
	int third;
	int i;

	third = nb / 3; //check this
	i = 3;
	while (i <= third)
	{
		if (nb % i == 0)
			return 0;
		i = i + 2;
	}

	return 1;
}