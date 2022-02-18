#include <stdio.h>
int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str)
{
	/*
		Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
		caracteres alfabéticos e retorne 0 se a função contiver outros tipos de caracteres
	*/
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{ 
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}