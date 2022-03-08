#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *buffer;
	int i;
	int range;

	i = 0;
	range = max - min-1;
	if (min >= max)
		return (NULL);
	printf("aqui");	
	if ((buffer = malloc(range * sizeof(int))) == NULL) //if NULL -> not enough memory space
		return (NULL);	
	printf("heree");
//	int aux = max - min;
//	printf("%d\n", aux);
	while (min <= range)
		buffer[i++] = min++;
//	for (int j = 0; j < aux; j++)
//	{
//		printf("%d ", buffer[j]);
//	}

	return (buffer);
}

int main()
{
	int min = 0;
	int max = 100000;
	ft_range(min, max);
	printf("\n");
}
