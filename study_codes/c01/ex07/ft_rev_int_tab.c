#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

//Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz
void ft_rev_int_tab(int *tab, int size)
{
	//*(tab+(size-1)) -> é o valor do ultimo elemento do array
	/*
	printf("endereço do primeiro elemento = %p\n", tab);
	printf("valor do primeiro elemento = %d\n", *tab);
	tab = tab+(size-1);
	printf("endereço do ultimo elemento = %p\n", tab);
	printf("valor do ultimo elemento = %d\n", *tab);
	*/
	//int	aux;

	//inverte 
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