/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "include/my.h"

int	my_put_nbr_lower(int a)
{
    int	h;
    char	*str = "0123456789abcdef";

    if (a < 0) {
        my_putchar('-');
        my_put_nbr_lower(a / -16);
        h = a % 16 * -1;
        my_putchar(str[h]);
    }
    if (a > 0) {
        my_put_nbr_lower(a / 16);
        h = a % 16;
        my_putchar(str[h]);
    }
    if (a == '0') {
        my_putchar('0');
    }
    return (0);
}

void	print_address(int i)
{
    int	nb = 0;

    my_putstr("0");
    my_putstr("x");
    nb = my_put_nbr_lower(i);
    my_put_nbr_base(nb, 10);
}

int	my_unsigned_base(int a)
{
    if (a > 0) {
        my_unsigned_base(a / 10);
        my_putchar(a % 10 + '0');
    }
    if (a == '0')
        my_putchar('0');
    if (a < 0)
        return (84);
    return (0);
}

int	my_printf(const char *s, ...)
{
    int	i = 0;
    char	k;
    int	j = 0;
    char	*ptr;
    va_list	str;

    va_start(str, s);
    while (s[i] != '\0') {
        if (s[i] == '%') {
            if (s[i + 1] == 'c') {
                k = (char) va_arg(str, int);
                my_putchar(k);
                i++;
            }
            if (s[i + 1] == 'p') {
                j = va_arg(str, int);
                print_address(j);
                i++;
            }
            if (s[i + 1] == 'd') {
                j = va_arg(str, int);
                my_put_nbr_base(j, 10);
                i++;
            }
            if (s[i + 1] == 'i') {
                j = va_arg(str, int);
                my_put_nbr_base(j, 10);
                i++;
            }
            if (s[i + 1] == 's') {
                ptr = va_arg(str, char*);
                my_putstr(ptr);
                i++;
            }
            if (s[i + 1] == 'b') {
                j = va_arg(str, int);
                my_put_nbr_base(j, 2);
                i++;
            }
            if (s[i + 1] == 'o') {
                j = va_arg(str, int);
                my_put_nbr_base(j, 8);
                i++;
            }
            if (s[i + 1] == 'X') {
                j = va_arg(str, int);
                my_put_nbr_base(j, 16);
                i++;
            }
            if (s[i + 1] == 'x') {
                j = va_arg(str, int);
                my_put_nbr_lower(j);
                i++;
            }
            if (s[i + 1] == 'u') {
                j = va_arg(str, int);
                my_unsigned_base(j);
                i++;
            }
            if (s[i + 1] == '%') {
                my_putchar(s[i]);
                i++;
            }
        } else
            my_putchar(s[i]);
        i++;
    }
    va_end(str);
    return (0);
}
