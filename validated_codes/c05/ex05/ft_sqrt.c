/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:20:38 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/18 03:28:04 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	half;
	int	i;

	half = nb / 2;
	i = 1;
	if (nb == 1)
		return (1);
	while (i <= half)
	{
		if (nb / i == i)
			return (i);
		i++;
	}
	return (0);
}
