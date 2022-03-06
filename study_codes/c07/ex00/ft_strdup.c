/*not validated by norminett*/e

#include <stdio.h>
char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;
	char	*p;

	i = 0;
	while (src[++i]);	
	dest = malloc(i);
	p = dest;
	while (*src)
		*p++ = *src++;		
	*p = '\0';
	return (dest);
}	

