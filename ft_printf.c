/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:24:58 by mmounsif          #+#    #+#             */
/*   Updated: 2024/12/10 20:43:35 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(ap, int), &count);
			else if (*format == 's')
				ft_putstr(va_arg(ap, char *), &count);
			else if (*format == 'd' || *format == 'i')
				ft_putnbr(va_arg(ap, int), &count);
			else if (*format == '%')
				ft_putchar('%', &count);
			else if (*format == 'x')
				count += ft_puthex(va_arg(ap, unsigned int),0);
			else if (*format == 'X')
				count += ft_puthex(va_arg(ap, unsigned int),1);
			else if (*format == 'p')
				count += ft_putstr("0x") + ft_putptr(va_arg(ap, void *));
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
///
char hexa[16] = "0123456789abcdef";

if (ab > 9)
{
	ft_hex(nb /16);
	ft_hex(hexa[nb % 16]);
	
}
