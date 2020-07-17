/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my.h
*/

#ifndef my_h_
#define my_h_

#include <stdarg.h>

void	my_putchar(char);
int	my_putstr(char const *);
void	check_first(const char *s, va_list str);
int	check_second(const char *s, va_list str);
int	check_third(const char *s, va_list str);
int	check_fourth(const char *s, va_list str);
int	check_fifth(const char *s, va_list str);
int	my_put_nbr_base(int a, int b);
int	my_put_nbr_lower(int a);
int	my_unsigned_base(int a);
int	my_printf(const char *s, ...);

#endif /* my_h_ */
