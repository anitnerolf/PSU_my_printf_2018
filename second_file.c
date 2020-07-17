/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf
*/

#include "my.h"

void	check_first(const char *s, va_list str)
{
    int	i = 0;
    char	k;

    if (s[i + 1] == 'c') {
        k = (char) va_arg(str, int);
        my_putchar(k);
        i++;
    }
}

int	check_second(const char *s, va_list str)
{
    int	j = 0;
    int	i = 0;
    char	*ptr;

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
    return (0);
}

int	check_third(const char *s, va_list str)
{
    int	i = 0;
    int	j = 0;

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
    return (0);
}

int	check_fourth(const char *s, va_list str)
{
    int	i = 0;
    int	j = 0;

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
    return (0);
}

int	check_fifth(const char *s, va_list str)
{
    int	i = 0;
    int	j = 0;

    if (s[i + 1] == 'u') {
        j = va_arg(str, int);
        my_unsigned_base(j);
        i++;
    }
    return (0);
}
