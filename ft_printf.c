/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:24:58 by mmounsif          #+#    #+#             */
/*   Updated: 2024/12/09 22:34:24 by mmounsif         ###   ########.fr       */
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
				count += ft_putchar(va_arg(ap, int));
			else if (*format == 's')
				count += ft_putstr(va_arg(ap, char *));
			else if (*format == 'd')
				count += ft_putnbr(va_arg(ap, int));
			else if (*format == 'x')
				count += ft_puthex(va_arg(ap, unsigned int));
			else if (*format == 'X')
				count += ft_puthex(va_arg(ap, unsigned int));
			else if (*format == 'p')
				count += ft_putptr(va_arg(ap, void *));
			else if (*format == '%')
				count += ft_putchar('%');
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}