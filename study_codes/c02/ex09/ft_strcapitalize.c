/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:56:23 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/12 00:57:20 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z') 
		str[i] -= 32;
	while(str[i])
	{
		if (((str[i] < 'a' || str[i] > 'z')) && 
			(str[i+1] >= 'a' && str[i+1] <= 'z') && 
			(str[i] < '0' || str[i] > '9') && 
			(str[i] < 'A' || str[i] > 'Z'))

			 str[i+1] -= 32;
		i++;
	}
	return (str);
}