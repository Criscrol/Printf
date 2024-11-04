/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:00:01 by csanchez          #+#    #+#             */
/*   Updated: 2024/11/04 11:00:05 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putunbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_puthex(unsigned long n, int uppercase)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;

	count = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, uppercase);
	if (uppercase)
		count += ft_putchar(hex_upper[n % 16]);
	else
		count += ft_putchar(hex_lower[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr, 0);
	return (count);
}
