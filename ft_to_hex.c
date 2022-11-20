/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:22:16 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 15:02:20 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(unsigned int n)
{
	char	*s;

	s = ft_to_hex(n, "0123456789abcdef");
	while (*s == '0')
		s++;
	if (n == 0)
		--s;
	ft_putstr(s);
}

void	ft_puthex_upper(unsigned int n)
{
	char	*s;

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
