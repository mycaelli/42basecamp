#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{	
	int i; //as strings
	int j; //os caracteres

	i = 1;
	j = 0;
	if (argc > 0)
	{ 
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
			//printf("i: %d\n", i);
		}
	}
	return (0);
}