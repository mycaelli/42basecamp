#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str = str +1;
	}

	printf("%d", count);
	printf("\n");

	return count;
}