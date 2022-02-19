/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);

// se tiver mais de um simbolo + ou - retorna 0
//passa por um numero arbitrario de espaços em branco
//se tiver letra antes dos numeros retorna 0
//se tiver letra depois do numero retorna a primeira porção de numero
//so pode comecar com espaço em branco ou numero, senão retorna 0

*/
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int signal;
	int result;

	result = 0;
	signal = 1;
	while(*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		signal *= -1;
		str++;
	}
	else if(*str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}

	return result * signal;
}

int main()
{
	//int n = atoi("1    1234fgg");
	//printf("%d\n", n);

	int m = ft_atoi("123");
	printf("%d\n", m);

	int l = ft_atoi("-123");
	printf("%d\n", l);

	int k = ft_atoi("+-123");
	printf("%d\n", k);

	int j = ft_atoi("    \t \r \v  -123");
	printf("%d\n", j);

	int i = ft_atoi("asdfc123");
	printf("%d\n", i);

	int h = ft_atoi("      123dfgbhnn3457");
	printf("%d\n", h);

	int f = ft_atoi("-0");
	printf("%d\n", f);
}