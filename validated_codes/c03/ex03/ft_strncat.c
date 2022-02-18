/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:48:11 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/14 20:06:08 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		string_size(char *dest);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_size;
	unsigned int	i;

	dest_size = string_size(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

int	string_size(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}
