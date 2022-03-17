#include <stdio.h>
#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int n;
	int *buffer;

	n = 0;	
	if (min > max)
		return 0;
	size = max - min;
	if ((buffer = malloc(size * sizeof(int))) == NULL)
		return -1;
	*range = buffer;
	while (n < size)
		buffer[n++] = min++; 
	return size; 
}

int main()
{	
	int	*r;
	int	**range = &r;
	int min = 7;
	int max = 15;
	ft_ultimate_range(range, min, max);
	for(int i = 0; i < max-min; i++)
	{
		printf("%d ", r[i]);
	}
	printf("\n");
}
