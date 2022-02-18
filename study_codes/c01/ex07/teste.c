#include <stdio.h>
void teste(int *tab, int size)
{
	int s = size; 

	int	count;
	int aux;

	count = 0;
	aux = 0;
	while (count < size)
	{
		aux = tab[count];
		tab[count] = tab[size-1];
		tab[size-1] = aux;
		count++;
		size--;
	}
}