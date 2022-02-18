#include "ft_rev_int_tab.c"

int main ()
{
	/*
	int a[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int *ptr = &a[0];
	ft_rev_int_tab(ptr, size); */
	int a[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int *ptr = a;
	ft_rev_int_tab(ptr, size);
}