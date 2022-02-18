/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_ok.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:00:08 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/08 04:41:14 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{	
			while (numbers[2] <= '9')
			{
				write(1, &numbers[0], 1);
				write(1, &numbers[1], 1);
				write(1, &numbers[2], 1);
				numbers[2]++;
				if (numbers[0] < '7')
					write(1, ", ", 2);
			}
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		numbers[0]++;
		numbers[1] = numbers[0] + 1;
		numbers[2] = numbers[1] + 1;
	}
}
