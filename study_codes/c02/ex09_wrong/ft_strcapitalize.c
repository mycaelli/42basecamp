/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:56:23 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/13 12:39:41 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	while (str[i])
	{
		if (((str[i] < 'a' || str[i] > 'z')) && (str[i +1]
				>= 'a' && str[i +1] <= 'z') && (str[i] < '0'
				|| str[i] > '9') && (str[i] < 'A' || str[i] > 'Z'))
			str[i +1] -= 32;
		i++;
	}
	return (str);
}


/*
#define TRUE 1
#define FALSE 0

int    ft_is_uppercase(char c)
{
    if ('A' <= c && c <= 'Z')
        return (TRUE);
    return (FALSE);
}

int    ft_is_lowercase(char c)
{
    if ('a' <= c && c <= 'z')
        return (TRUE);
    return (FALSE);
}

int    ft_is_alphanumeric(char c)
{
    if ('0' <= c && c <= '9')
        return (TRUE);
    if ('A' <= c && c <= 'Z')
        return (TRUE);
    if ('a' <= c && c <= 'z')
        return (TRUE);
    return (FALSE);
}

char    *ft_strcapitalize(char *str)
{
    unsigned int    index;
    int                is_word;

    index = 0;
    is_word = FALSE;
    while (str[index])
    {
        if (ft_is_alphanumeric(str[index]))
        {
            if (is_word == FALSE)
            {
                if (ft_is_lowercase(str[index]))
                    str[index] -= 32;
                is_word = TRUE;
            }
            else
                if (ft_is_uppercase(str[index]))
                    str[index] += 32;
        }
        else
            is_word = FALSE;
        index++;
    }
    return (str);
}
*/
