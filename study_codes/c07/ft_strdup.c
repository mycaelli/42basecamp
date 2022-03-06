

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dest;
	int i;
	int j;
	
	i = 0;
	j = -1;
	while (src[i++] != '\0');
	dest = malloc(i*sizeof(char));
	dest[i] = '\0';
	while (++j < i)
		dest[j] = src[j];
	return dest;
}	

int main()
{
	char *str = "myca";
	printf("src: %s\n", str);
	printf("dest: %s\n", ft_strdup(str));
	return (0);
}
