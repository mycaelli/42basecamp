/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:11:38 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/13 21:13:24 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
int		size(char *destination);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = size(dest);
	while (src[i])
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	return (dest);
}

int	size(char *destination)
{
	int	i;

	i = 0;
	while (destination[i])
		i++;
	return (i);
}
