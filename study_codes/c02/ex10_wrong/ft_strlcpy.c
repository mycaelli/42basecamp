/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:32:53 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/12 23:40:46 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	initialize(char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size - 1)
	{
		dest[i] = 0;
		i++;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	initialize(dest, size);
	i = 0;
	src_size = len(src);
	if (size - 1 <= src_size)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < src_size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (src_size);
}

/* da pra trocar a logica do ft_strlcpy por isso
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    src_size;

    initialize(dest, size);
    i = 0;
    src_size = len(src);

    while ((i < size - 1) && (i < src_size))
    {
        dest[i] = src[i];
        i++;
    }
    return (src_size);
}
*/