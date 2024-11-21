/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:40:49 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 16:00:46 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, int l_u)
{
	char	*base;
	int		count;

	if (l_u == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthexa(n / 16, l_u);
	count += ft_putchar(base[n % 16]);
	return (count);
}
