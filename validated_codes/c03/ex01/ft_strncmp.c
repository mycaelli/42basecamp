/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:09:50 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/14 20:07:38 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				dif;

	i = 0;
	dif = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		dif = (s1[i] - s2[i]);
		i++;
		if (dif != 0)
			return (dif);
	}
	return (0);
}
