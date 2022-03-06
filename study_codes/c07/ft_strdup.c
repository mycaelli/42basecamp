//#include <unistd.h>
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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

//int main()
//{
//	char *str = "myca";
//	printf("src: %s\n", str);
//	printf("dest: %s\n", ft_strdup(str));
//	return (0);
//}
