/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:25:53 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 11:26:28 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int reset)
{
	int out;
	static int	count;

	if (reset == 1)
	{
		out = count;
		count = 0;
		return (out);
	}
	write(1, &c, 1);
	++count;
	return (0);
}

void	ft_putstr(char *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
		ft_putchar(*s++, 0);
}
