#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *buffer;
	int i;
	int range;

	i = 0;
	range = max - min - 1;
	if (min >= max)
		return (NULL);
	if ((buffer = malloc(range * sizeof(int))) == NULL) //if NULL -> not enough memory space
		return (NULL);	
	while (min <= range)
		buffer[i++] = min++;
	return (buffer);
}

int main()
{
	int min = 0;
	int max = 1000000;
	int *test = ft_range(min, max);
	for (int j = 0; j <= max-min-1; j++)
		printf("%d ", test[j]);
	printf("\n");
}
