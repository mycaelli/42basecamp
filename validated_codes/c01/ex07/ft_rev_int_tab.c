/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:38:53 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/10 18:03:57 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	aux = 0;
	while (count < size)
	{
		aux = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = aux;
		count++;
		size--;
	}
}
