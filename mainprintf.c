#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int n = 42;
    unsigned int un = -42;
    char c = '\0';
    char *s = NULL;
    char *ptr = "Test";
    int rlen1 = 0, rlen2 = 0;
    // Test 1: Mix
    rlen1 = ft_printf("\033[0;33mTest Mix: %c %s %d %i %u %x %X %p %%\n\033[0m", c, s, n, n, un, n, n, s);
    rlen2 = printf("\033[0;32mTest Mix: %c %s %d %i %u %x %X %p %%\n\033[0m", c, s, n, n, un, n, n, s);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 2: Char
    rlen1 = ft_printf("\033[0;33mTest char: %c\n\033[0m", 'A');
    rlen2 = printf("\033[0;32mTest char: %c\n\033[0m", 'A');
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 3: String
    rlen1 = ft_printf("\033[0;33mTest string: %s\n\033[0m", "mundo");
    rlen2 = printf("\033[0;32mTest string: %s\n\033[0m", "mundo");
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 4: Hex minusculas
    rlen1 = ft_printf("\033[0;33mTest hex: %x\n\033[0m", 25555555);
    rlen2 = printf("\033[0;32mTest hex: %x\n\033[0m", 25555555);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 5: Puntero
    rlen1 = ft_printf("\033[0;33mTest ptr: %p\n\033[0m", ptr);
    rlen2 = printf("\033[0;32mTest ptr: %p\n\033[0m", ptr);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 6: Hex mayusculas
    rlen1 = ft_printf("\033[0;33mTest HEX: %X\n\033[0m", 255);
    rlen2 = printf("\033[0;32mTest HEX: %X\n\033[0m", 255);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 7: Decimal
    rlen1 = ft_printf("\033[0;33mTest dec: %d\n\033[0m", 777);
    rlen2 = printf("\033[0;32mTest dec: %d\n\033[0m", 777);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 8: Int
    rlen1 = ft_printf("\033[0;33mTest int: %i\n\033[0m", 777);
    rlen2 = printf("\033[0;32mTest int: %i\n\033[0m", 777);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 9: Unsigned int
    rlen1 = ft_printf("\033[0;33mTest uns: %u\n\033[0m", -0);
    rlen2 = printf("\033[0;32mTest uns: %u\n\033[0m", -0);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 10: Porcentaje
    rlen1 = ft_printf("\033[0;33mTest porcentaje: %%\n\033[0m");
    rlen2 = printf("\033[0;32mTest porcentaje: %%\n\033[0m");
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    // Test 11: Locura
    rlen1 = ft_printf("\033[0;33mTest locura: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\033[0m", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    rlen2 = printf   ("\033[0;32mtest locura: %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n\033[0m", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    printf("\n\n");
    rlen1 = ft_printf("\033[0;33mTest locura:%c%s%d%i%u%x\n\033[0m", 'B', "-42", -42, -42 ,-42 ,-42);
    rlen2 = printf   ("\033[0;32mtest locura:%c%s%d%i%u%x\n\033[0m", 'B', "-42", -42, -42 ,-42 ,-42);
    
    printf("\033[0;33mft_printf devolvió: %d\n\033[0m", rlen1);
    printf("\033[0;32mprintf devolvió: %d\n\033[0m", rlen2);
    
    printf("\n\n");
    return 0;
}
