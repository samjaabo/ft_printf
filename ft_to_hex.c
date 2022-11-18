/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:22:16 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/18 17:45:35 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_to_hex(unsigned long n, char *base)
{
	static char	s[17];
	static char	*str = (char *)s;

	s[0] = base[n / 0x1000000000000000];
	s[1] = base[n % 0x1000000000000000 / 0x100000000000000];
	s[2] = base[n % 0x100000000000000 / 0x10000000000000];
	s[3] = base[n % 0x10000000000000 / 0x1000000000000];
	s[4] = base[n % 0x1000000000000 / 0x100000000000];
	s[5] = base[n % 0x100000000000 / 0x10000000000];
	s[6] = base[n % 0x10000000000 / 0x1000000000];
	s[7] = base[n % 0x1000000000 / 0x100000000];
	s[8] = base[n % 0x100000000 / 0x10000000];
	s[9] = base[n % 0x10000000 / 0x1000000];
	s[10] = base[n % 0x1000000 / 0x100000];
	s[11] = base[n % 0x100000 / 0x10000];
	s[12] = base[n % 0x10000 / 0x1000];
	s[13] = base[n % 0x1000 / 0x100];
	s[14] = base[n % 0x100 / 0x10];
	s[15] = base[n % 0x10 / 0x1];
	s[16] = '\0';
	while (*str == '0')
		++str;
	if (n == 0)
		--str;
	return (str);
}

void	ft_puthex_lower(unsigned int n)
{
	ft_putstr(ft_to_hex((unsigned int)n, "0123456789abcdef"));
}

void	ft_puthex_upper(unsigned int n)
{
	ft_putstr(ft_to_hex((unsigned long)n, "0123456789ABCDEF"));
}

void	ft_putptr(unsigned long n)
{
	ft_putstr(ft_to_hex(n, "0123456789abcdef"));
}
