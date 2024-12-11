/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:24:58 by mmounsif          #+#    #+#             */
/*   Updated: 2024/12/11 21:01:24 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	format_handler(const char format, va_list ap, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (format == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 'u')
		ft_putunbr(va_arg(ap, unsigned int), count);
	else if (format == 'x')
		ft_puthex(va_arg(ap, unsigned int), 0, count);
	else if (format == 'X')
		ft_puthex(va_arg(ap, unsigned int), 1, count);
	else if (format == 'p')
	{
		ft_putstr("0x", count);
		ft_putptr(va_arg(ap, unsigned long long), count);
	}
}

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
			format_handler(*format, ap, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>

// int	main()
// {
// 	int		count;

// 	count = ft_printf("Hello, %s! %c %d %i %u %x %X %p %%%c\n", 
// 						"world", 'a', 42, 42, 42, 42, 16, &count, 'a');
// 	ft_printf("count = %d\n", count);
// }