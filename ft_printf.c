/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:49:38 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/18 18:43:46 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_formats(va_list ptr, char format)
{
	if (format == 'c')
		ft_putchar(va_arg(ptr, int), 0);
	else if (format == 's')
		ft_putstr(va_arg(ptr, char*));
	else if (format == 'p')
		ft_putptr(va_arg(ptr, unsigned long));
	else if (format == 'd' || format == 'i')
		ft_put_snbr(va_arg(ptr, int));
	else if (format == 'u')
		ft_put_unbr(va_arg(ptr, unsigned int));
	else if (format == 'x')
		ft_puthex_lower(va_arg(ptr, unsigned int));
	else if (format == 'X')
		ft_puthex_upper(va_arg(ptr, unsigned int));
	else if (format == '%')
		ft_putchar(format, 0);
	else
		ft_putchar(format, 0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;

	va_start(ptr, format);
	while (*format)
	{
		if (*format == '%')
			ft_formats(ptr, *++format);
		else
			ft_putchar(*format, 0);
		++format;
	}
	va_end(ptr);
	return (ft_putchar('\0', 1));
}