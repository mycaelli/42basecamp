/*
Reproduzir de forma idêntica o funcionamento da função strcpy (man strcpy), including the terminating null byte ('\0')
The strings may not overlap, and the destination string dest must be large enough to receive the copy.

 strcpy()  function  copies  the  string  pointed  to by src

 -> copia o conteudo de um string para outra
*/

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	int count;
	count = 0;
	while(src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return dest; 
}
