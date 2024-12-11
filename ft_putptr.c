/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:03:12 by mmounsif          #+#    #+#             */
/*   Updated: 2024/12/11 18:58:56 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long ptr, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (ptr >= 16)
		ft_putptr(ptr / 16, count);
	write(1, &hexa[ptr % 16], 1);
	(*count)++;
}
