/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:36:03 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/28 12:39:29 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_pointer(size_t adr, int q)
{
	if (!adr)
		q = ft_printstr("(nil)", q);
	else
	{
		q = ft_printstr("0x", q);
		q = ft_printhex(adr, q, 'x');
	}
	return (q);
}

static int	ft_handle_format(char d, va_list list, int q)
{
	if (d == 'c')
		q = (ft_printchar(va_arg(list, int), q));
	else if (d == 's')
		q = (ft_printstr(va_arg(list, char *), q));
	else if (d == 'p')
		q = ft_handle_pointer(va_arg(list, size_t), q);
	else if (d == 'i' || d == 'd')
		q = ft_printnbr(va_arg(list, int), q);
	else if (d == 'u')
		q = ft_printunsnbr(va_arg(list, unsigned int), q);
	else if (d == 'x')
		q = (ft_printhex(va_arg(list, unsigned int), q, 'x'));
	else if (d == 'X')
		q = (ft_printhex(va_arg(list, unsigned int), q, 'X'));
	else if (d == '%')
		q = (ft_printchar('%', q));
	return (q);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		q;

	va_start(list, str);
	i = 0;
	q = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			q = ft_handle_format(str[i], list, q);
		}
		else
		{
			q = ft_printchar(str[i], q);
		}
		i++;
	}
	va_end(list);
	return (q);
}
