/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_putchar
*/

#include <unistd.h>
#include "include/my.h"

void	my_putchar(char c)
{
    write(1, &c, 1);
}
