#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

void	ft_putstr(char *str)
{
	//printf("%s", str);
	while (*str != '\0')
	{
		write(1, str, 1);
		//printf("%c", *str);
		str = str + 1;
	}
	printf("\n");
}