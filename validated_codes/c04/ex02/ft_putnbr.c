/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:07:19 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/16 14:07:22 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		check(int n);

void	ft_putnbr(int nb)
{
	int		mod;
	char	conv;

	mod = 0;
	nb = check(nb);
	if (nb < 10)
	{	
		conv = nb + '0';
		write(1, &conv, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		mod = nb % 10;
		conv = mod + '0';
		write(1, &conv, 1);
	}
}

int	check(int n)
{
	int	pos;

	pos = 0;
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		return (147483648);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		pos = n * (-1);
		return (pos);
	}
	else if (n <= 2147483647)
		return (n);
	return (0);
}
