#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	printf("aqui");	
	if ((range = malloc(max-min * sizeof(int))) == NULL) //if NULL -> not enough memory space
		return (NULL);	
	printf("heree");
	int aux = max - min;
	printf("%d\n", aux);
	while (min < max)
		range[i++] = min++;
	for (int j = 0; j < aux; j++)
	{
		printf("%d ", range[j]);
	}
	return (range);
}

int main()
{
	int min = 0;
	int max = 100000;
	ft_range(min, max);
	printf("\n");
}
