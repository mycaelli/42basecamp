/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses a string by modifying it.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
	char aux;
	int i;
	int size;

	i = -1;
	size = 0;
	while(str[++size]); //resultado com /0
	while(++i < size / 2)
	{
		aux = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = aux;
	}

	return str;
}

int main()
{
	//char s[] = "string";
	char s1[] = "myca";
	printf("%s\n", ft_strrev(s1));

}