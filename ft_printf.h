/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:34:11 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/28 12:35:45 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int ft_printstr(char *str, int count);
int ft_printhex(unsigned long n, int count, char format);
int ft_printchar(char c, int count);
int ft_printnbr(int n, int count);
int ft_printunsnbr(unsigned int n, int count);

#endif

