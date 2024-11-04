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

static int	handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += handle_format(*(++format), args);
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

/*
#include <stdio.h>

int main() {
    int entero = 10;
    float decimal = 5.5;
    char caracter = 'A';
    const char *cadena = "Hola, mundo!";

    printf("Número entero: %d\n", entero);
    printf("Número decimal: %.2f\n", decimal);
    printf("Carácter: %c\n", caracter);
    printf("Cadena: %s\n", cadena);

    return 0;
}*/
