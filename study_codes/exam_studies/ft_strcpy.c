/*
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

The strcpy() function copies the string pointed to by src, including the terminating null byte ('\0'),  to the buffer pointed to by dest.  
The strings may not overlap, and the destination string dest must be large enough to receive the copy. Beware of buffer overruns!  (See BUGS.)
The strncpy() function is similar, except that at most n bytes of src are copied.  
Warning: If there is no null byte among the first n bytes of src, the string placed in dest will not be null-terminated.
If the length of src is less than n, strncpy() writes additional null bytes to dest to ensure that a total of n bytes are written.
*/

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

char    *ft_strcpy(char *s1, char *s2)
{
	//copia s2 para s1
	int i;

	i = 0;
	while (s2[i])
	{ 
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char dest[] = "abcdefghijklmnopq";
	char src[] = "bala";
	printf("src antes: %s\n", src);
	printf("dest antes: %s\n", dest);
	ft_strcpy(dest, src);
	printf("depois: %s\n", dest);
}