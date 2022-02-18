/*
	The  strcat()  function appends the src string to the dest string, overwriting the terminating null byte ('\0') 
	at the end of dest, and then adds a terminating null byte. 
	strings may not overlap, and the dest string must have  enough  space
    for the result.  If dest is not large enough, program behavior is unpredictable;

	the resulting string in dest is always null-terminated

	The strcat() and strncat() functions return a pointer to the resulting string dest

	se src > dest -> nao pode tratar o erro
*/

char	*ft_strcat(char *dest, char *src);
int	size(char *dest);

char	*ft_strcat(char *dest, char *src)
{
	//dest -> onde faz o concatenação
	//src -> o que eu quero concatenar

	int	i;
	int	dest_size;

	i = 0;
	dest_size = size(dest);

	while (src[i])
	{ 
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest);
}

int	size(char *dest)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	return i;
}