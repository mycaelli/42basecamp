#include <unistd.h>
#include <stdio.h>

int		ft_compare(car *s1, char *s2);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	char *temp;
	int i;

	i = 0;
	while(++i < argc -1)
	{  
		/*
			a = {"124", "132", "121", "111"}
		*/
		if (ft_compare(argv[i], argv[i + 1]) == 1)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
	}
	i = 0;
	while (i++ < argc)
		ft_putstr(argv[i]);
	
	return (0);
}

int ft_compare(char *s1, char *s2)
{
	int d;

	while (*s1 || *s2)
	{
		d = (*s2++ - *s1++); 
		if (d < 0) //se s2 < s1
			return (1); //vai trocar
		if (d > 0)
			return (-1);
	}
	return (0);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}