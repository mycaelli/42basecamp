/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:04:13 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/14 17:07:31 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		len(char *dest);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		s_str;
	int		s_find;
	int		control;
	int		flag;
	char	*ptr = str; 
    
    i = 0;
	s_str = len(str);
	s_find = len(to_find);
	control = 0;
	flag = 0;
    while (i < s_str)
    {
           j = 0;
           flag = 0;
            if (str[i] != to_find[j])
            {   
                 control++;
                 ptr = &str[control];
            }
            else
            { 
                while(str[control] == to_find[j])
                {
                    j++;
                    control++;
                    flag++;
                    if(flag == s_find)
                        return ptr;
                }
        }
        i++;
    }
    return NULL;
}

int    len(char *dest)
{
    int i;

    i = 0;
    while (dest[i])
        i++;
    return i;
}
