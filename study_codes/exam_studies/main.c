
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
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