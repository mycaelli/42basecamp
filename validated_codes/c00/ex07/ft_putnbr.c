/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 05:23:46 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/08 14:21:03 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n_char;
	char	mod;
	long	n;

	n = (long) nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		n_char = n + '0';
		write(1, &n_char, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		mod = n % 10 + '0';
		write(1, &mod, 1);
	}
}
