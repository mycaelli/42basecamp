#include <stdio.h>

void	print_array()
{
	int arr[5] = {5, 5, 5, 5, 5};
	int *ptr = arr; //aponta para a primeira pos do array
	int i = 0;
	int N = 5;

	while (i < N)
	{
		printf("%d ", *ptr);
		ptr++; //aponta para a segunda pos do array
		i++;
	}
	printf("\n");

	/*
		printa os elementos do array
	printf("%d\n", *tab);
	printf("%d\n", *(tab+1));
	printf("%d\n", *(tab+2));
	printf("%d\n", *(tab+3));
	printf("%d\n", *(tab+4));
	printf("%d\n", *(tab+(size-1)));*/
}

int main()
{
	print_array();
}