/*
** EPITECH PROJECT, 2020
** my_getnbrchar.c
** File description:
** lib
*/

int my_getnbrchar(char str)
{
    if (str < '0' && str > '9' )
            return (0);
    else
        return (str - 48);
}
