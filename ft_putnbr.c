/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:03:12 by mmounsif          #+#    #+#             */
/*   Updated: 2024/12/10 20:24:30 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
		(*count)++;
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	n = n % 10 + '0';
	write(1, &n, 1);
	(*count)++;
}
