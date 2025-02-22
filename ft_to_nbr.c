/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:07:42 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 15:04:37 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_snbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-', 0);
		n = n * -1;
	}
	ft_putstr(ft_to_nbr((unsigned int)n));
}

void	ft_put_unbr(unsigned int n)
{
	ft_putstr(ft_to_nbr(n));
}
