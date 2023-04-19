/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:36:41 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/19 09:54:48 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		char_count;

	char_count = 0;
	va_start(args, str);
	char_count = ft_parse(str, args);
	va_end(args);
	return (char_count);
}
