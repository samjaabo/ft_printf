/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:27:50 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/20 15:04:13 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);

int		ft_putchar(char c, int reset);
void	ft_putstr(char *s);

char	*ft_to_nbr(unsigned int n);
char	*ft_to_hex(unsigned long long n, const char *base);

void	ft_put_unbr(unsigned int n);
void	ft_put_snbr(int n);

void	ft_puthex_lower(unsigned int n);
void	ft_puthex_upper(unsigned int n);
void	ft_putptr(void *ptr);

#endif