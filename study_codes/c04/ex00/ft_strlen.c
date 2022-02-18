/*
Escreva uma função que contenha o número de caracteres em uma cadeia de caracteres e que retorne o número encontrado.
*/

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	
	return i;
}