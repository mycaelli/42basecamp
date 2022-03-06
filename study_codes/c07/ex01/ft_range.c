#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);	
	range = (int *) malloc(max-min);
       	while (min < max)
		range[i++] = min++; 
	return (range);
}

