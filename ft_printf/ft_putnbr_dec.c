/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:16:32 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 17:27:45 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_dec(int nbr)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (nbr == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		count = 1;
	}
	if (nbr >= 10)
		count += ft_putnbr_dec(nbr / 10);
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
