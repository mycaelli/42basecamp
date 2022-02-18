#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	
		//printa os elementos do array
	printf("%d ", *tab);
	printf("%d ", *(tab+1));
	printf("%d ", *(tab+2));
	printf("%d ", *(tab+3));
	printf("%d\n", *(tab+4));
	//printf("%d\n", *(tab+5));

	int	i;
	int j;
	int aux;

	i = 0;
	aux = 0;
	while (i < size)
	{	
		j = i + 1;
		while (j < size)
		{ 
			if(tab[j] < tab[i])
			{ 
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
	printf("%d ", *tab);
	printf("%d ", *(tab+1));
	printf("%d ", *(tab+2));
	printf("%d ", *(tab+3));
	printf("%d\n", *(tab+4));
	size++;
}