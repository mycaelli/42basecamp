// returns a int array
// array contains the values from min to max
// include min, exclude max
// if min >= max -> returns NULL

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);	
	range = (int *) malloc(max-min);
//	range[0] = 30;
//	int size = sizeof (range) / sizeof *range;
//	printf("%d\n", max-min);
//	printf("%d\n", size);
	while (min < max)
	{
		printf("i: %d\n", i);
		range[i++] = min++;
		printf("i++: %d \n", i);
	}
	return (range);
}

int main()
{
	int *test = ft_range(0, 5);
//	int *test = ft_range(12, 20);
	for(int i = 0; i < 5; i++){
		printf("%d ", test[i]);
	} 
	printf("\n");
}
