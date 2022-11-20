/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:07:42 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 14:49:38 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_to_nbr(unsigned int n)
{
	static char	s[11];
	char		*str;

	s[0] = n / 1000000000 + '0';
	s[1] = n % 1000000000 / 100000000 + '0';
	s[2] = n % 100000000 / 10000000 + '0';
	s[3] = n % 10000000 / 1000000 + '0';
	s[4] = n % 1000000 / 100000 + '0';
	s[5] = n % 100000 / 10000 + '0';
	s[6] = n % 10000 / 1000 + '0';
	s[7] = n % 1000 / 100 + '0';
	s[8] = n % 100 / 10 + '0';
	s[9] = n % 10 / 1 + '0';
	s[10] = '\0';
	str = s;
	while (*str == '0')
		++str;
	if (n == 0)
		--str;
	return (str);
}

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
