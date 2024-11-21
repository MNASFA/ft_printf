/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:51:32 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 16:11:21 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nbr >= 10)
		count += ft_putnbr_dec(nbr / 10);
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
