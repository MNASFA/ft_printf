/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:23:15 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/20 22:49:05 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex_upp(unsigned int n)
{
	char *base;
	int buffer[9];
	int i;
	int count;

	base = "0123456789ABCDEF";
	count = 0;
	i = 0;
	if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		buffer[i++] = base[n % 16];
		n /= 16;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(buffer[i--]);
		count++;
	}
	return (count);
}
