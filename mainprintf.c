/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:02:37 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/28 13:02:41 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

