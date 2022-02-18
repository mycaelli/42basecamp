/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:00:55 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/08 03:41:14 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	arr[5];

	arr[0] = '0' - 1;
	arr[2] = ' ';
	while (arr[0]++ < '9')
	{
		arr[1] = '0' -1;
		arr[3] = arr[0] - 1;
		arr[4] = arr[1] + 1;
		while (arr[1]++ < '9')
		{
			while (arr[3]++ < '9')
			{
				while (arr[4]++ < '9')
				{
					write (1, arr, 5);
					if (arr[0] != '9' || arr[1] != '8')
						write (1, ", ", 2);
				}
				arr[4] = '0' -1;
			}
			arr[3] = arr[0] -1;
			arr[4] = arr[1] +1;
		}
	}
}
