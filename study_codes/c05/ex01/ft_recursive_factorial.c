/*
5! = 5*4*3*2*1 = 120  
3! = 3*2*1 = 6 
*/

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int fact = 1;
	if (nb < 0)
		return 0;

	//condicao de parada
	if (nb == 0)
		return 1;

	//recursivade
	fact *= nb;
	return nb*ft_recursive_factorial(nb - 1);  
	/*
	nb -> 5
		return 5 * recursive(4) [1 * 1 * 2 * 3 * 4 * 5]
	
	nb -> 4
		return 4 * recursive(3) [1 * 1 * 2 * 3 * 4]
	
	nb -> 3
		return 3 * recursive(2) [1 * 1 * 2 * 3]
	
	nb -> 2
		return 2 * recursive(1) [1 * 1 * 2]
	
	nb -> 1
		return 1 * recursive(0) [1 * 1]
	
	nb ->
		return 1
	*/
	
}
