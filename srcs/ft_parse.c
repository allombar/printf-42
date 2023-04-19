/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:49:29 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/19 18:28:14 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_parse(const char *str, va_list args)
{
    int char_count;
    int i;

    char_count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] != '%')
        {
            ft_putchar_fd(str[i], 1);
            char_count++;
        }
        else if (str[i] == '%')
        {
            if (ft_identifier(str[i + 1]))
            {
                //ft_putstr_fd(va_arg(args, char *), 1);
                ft_print_vars(str[i + 1], args);
                i++;
            }
            else
                ft_putchar_fd(str[i], 1);
        }
        i++;
    }
    return (char_count);
}
