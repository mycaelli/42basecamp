/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:19:15 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/05 04:31:06 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	negative_flag;
	char	positive_flag;

	positive_flag = 'P';
	negative_flag = 'N';
	if (n >= 0)
	{
		write(1, &positive_flag, 1);
	}
	else
	{
		write(1, &negative_flag, 1);
	}
}
