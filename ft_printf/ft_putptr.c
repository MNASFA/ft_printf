/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:19:48 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 16:13:38 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long p)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (p >= 16)
		count += ft_puthex(p / 16);
	count += ft_putchar(base[p % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long) ptr);
	return (count);
}
