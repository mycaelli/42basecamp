/*
 it will use at most n bytes from src;
 src does not need to be null-terminated if it contains n or more bytes
 the resulting string in dest is always null-terminated
 If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from src plus the terminating null  byte).   
 Therefore, the size of dest must be at least strlen(dest)+n+1

 	   This  function  appends  the null-terminated string src to the string
       dest, copying at most size-strlen(dest)-1 from src, and adds a termi‐
       nating   null   byte   to  the  result,  unless  size  is  less  than
       strlen(dest).  This function fixes the buffer overrun problem of str‐
       cat()
*/

char *ft_strncat(char *dest, char *src, unsigned int nb);
int	string_size(char *dest);

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int dest_size;
	unsigned int i;

	dest_size = string_size(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';

	return (dest);
}

int	string_size(char *dest)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	return i;
}