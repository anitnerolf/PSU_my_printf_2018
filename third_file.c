/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "include/my.h"

int	my_put_nbr_base(int a, int b)
{
    int	h;
    char	*str = "0123456789ABCDEF";

    if (a < 0) {
        my_putchar('-');
        my_put_nbr_base(a / -b, b);
        h = a % b * -1;
        my_putchar(str[h]);
    }
    if (a > 0) {
        my_put_nbr_base(a / b, b);
        h = a % b;
        my_putchar(str[h]);
    }
    if (a == '0') {
        my_putchar('0');
    }
    return (0);
}
