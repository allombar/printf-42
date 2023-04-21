/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:49:29 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/20 19:24:30 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_parse(const char *str, va_list args)
{
    int char_count = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (ft_identifier(str[i]))
                char_count += ft_print_vars(str[i], &args);
            else if (str[i])
                char_count += ft_putchar_count(str[i]);
        }
        else
            char_count += ft_putchar_count(str[i]);
        i++;
    }
    return (char_count);
}
