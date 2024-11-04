/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:40:04 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/28 12:41:00 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c, int q)
{
	write (1, &c, 1);
	q++;
	return (q);
}

int	ft_printstr(char *str, int q)
{
	int	i;

	if (!str)
		return (ft_printstr("(null)", q));
	i = 0;
	while (str[i])
	{
		q = ft_printchar(str[i], q);
		i++;
	}
	return (q);
}

int	ft_printhex(unsigned long n, int q, char h)
{
	if (15 < n)
		q = ft_printhex(n / 16, q, h);
	if (h == 'x' || h == 'p')
		q = ft_printchar("0123456789abcdef"[n % 16], q);
	if (h == 'X')
		q = ft_printchar("0123456789ABCDEF"[n % 16], q);
	return (q);
}

int	ft_printnbr(int n, int q)
{
	if (n == -2147483648)
	{
		q = ft_printstr("-2147483648", q);
		return (q);
	}
	if (n < 0)
	{
		q = ft_printchar('-', q);
		n = -n;
	}
	if (9 < n)
	{
		q = ft_printnbr(n / 10, q);
	}
	q = ft_printchar((n % 10 + '0'), q);
	return (q);
}

int	ft_printunsnbr(unsigned int n, int q)
{
	if (9 < n)
	{
		q = ft_printunsnbr(n / 10, q);
	}
	q = ft_printchar((n % 10 + '0'), q);
	return (q);
}
