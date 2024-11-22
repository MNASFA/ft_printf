/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:57:06 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 19:16:18 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_help(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr_dec(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (format == 'x')
		count += ft_puthexa(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		count += ft_puthexa(va_arg(args, unsigned int), 1);
	else
		count += write(1, &format, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start (args, format);
	if (write(1, 0, 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
				count += ft_printf_help(*format, args);
			else
				break ;
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end (args);
	return (count);
}
