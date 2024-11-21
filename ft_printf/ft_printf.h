/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <hmnasfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:09:45 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/11/21 15:59:47 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr_dec(int nbr);
int	ft_puthexa(unsigned int n, int l_u);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_printf(const char *format, ...);

#endif