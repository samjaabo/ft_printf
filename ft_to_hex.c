/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:22:16 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 14:27:52 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_to_hex(unsigned long long n, const char *base)
{
	static char	s[17];

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
	return (s);
}

void	ft_puthex_lower(unsigned int n)
{
	char *s;

	s = ft_to_hex(n, "0123456789abcdef");
	while (*s == '0')
		s++;
	if (n == 0)
		--s;
	ft_putstr(s);
}

void	ft_puthex_upper(unsigned int n)
{
	char *s;

	s = ft_to_hex(n, "0123456789ABCDEF");
	while (*s == '0')
		s++;
	if (n == 0)
		--s;
	ft_putstr(s);
}

void	ft_putptr(void *ptr)
{
	char		*s;
	uintptr_t	n;

	n = (uintptr_t)ptr;
	s = ft_to_hex(n, "0123456789abcdef");
	while (*s == '0')
		s++;
	if (n == 0)
		--s;
	ft_putstr("0x");
	ft_putstr(s);
}
