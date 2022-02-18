/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:29:50 by mcerquei          #+#    #+#             */
/*   Updated: 2022/02/10 14:54:43 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

//int *nbr -> guarda o endereço de um inteiro 
//tenho que passar o valor 42 para o inteiro que nbr aponta

void	ft_ft(int *nbr)
{
	printf("%d\n", *nbr);
	*nbr = 42; //acesso o valor da variavel que nbr aponta
	printf("%d\n", *nbr);
}

/*void	ft_ft(int *nbr)
{
	//aux recebe o valor no endereço de memória do ponteiro nbr
	int aux = *nbr;
	printf("%d\n", aux);
}*/