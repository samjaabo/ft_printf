/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samjaabo <samjaabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:12:40 by samjaabo          #+#    #+#             */
/*   Updated: 2022/11/18 18:50:14 by samjaabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"


int main()
{
    char a[] = "hello world";
    int b = 56445;
    int ret1 = ft_printf("%s%d%x%X%i%u%c%%\n", a, 12, 2415, 2548, 1337, 42, 'c');
    int ret2 = printf("%s%d%x%X%i%u%c%%\n", a, 12, 2415, 2548, 1337, 42, 'c');
    ft_printf("-------\n\nft = %d\nor = %d", ret1, ret2);
    // ret1 = ft_printf("%s%d%x%X%i%u%c%%%\n", a, 12, 2415, 2548, 1337, 42, 'c');
    // ret2 = printf("%s%d%x%X%i%u%c%%%\n", a, 12, 2415, 2548, 1337, 42, 'c');
    // ft_printf("-------\n\nft = %d\nor = %d", ret1, ret2);
    return 0;
}