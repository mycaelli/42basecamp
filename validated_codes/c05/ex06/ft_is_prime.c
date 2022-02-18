/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:20:46 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/18 02:46:27 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	third;
	int	i;

	if (nb == 1 || nb == 0 || nb % 2 == 0)
		return (0);
	third = nb / 3;
	i = 3;
	while (i <= third)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
