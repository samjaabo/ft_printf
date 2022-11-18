/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:27:50 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/18 18:40:26 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);

int	ft_putchar(char c, int reset);
void	ft_putstr(char *s);

void	ft_put_unbr(unsigned int n);
void	ft_put_snbr(int n);

void	ft_puthex_lower(unsigned int n);
void	ft_puthex_upper(unsigned int n);
void	ft_putptr(unsigned long n);

#endif