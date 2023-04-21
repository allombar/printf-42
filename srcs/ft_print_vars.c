/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:51:36 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 20:37:12 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_vars(char identifier, va_list *args)
{
	int char_count;
	
	char_count = 0;
	if (identifier == 's')
		char_count += ft_print_str(va_arg(*args, char *));
	if (identifier == 'i' || identifier == 'd')
		char_count += ft_print_int(va_arg(*args, int));
	if (identifier == 'x')
		char_count += ft_print_hex(va_arg(*args, unsigned int), 0);
	if (identifier == 'X')
		char_count += ft_print_hex(va_arg(*args, unsigned int), 1);
	if (identifier == 'p')
		char_count += ft_print_pointer(va_arg(*args, unsigned long long), 0);
	if (identifier == 'c')
		char_count += ft_putchar_count(va_arg(*args, int));
	if (identifier == 'u')
		char_count += ft_print_ulong(va_arg(*args, unsigned long long));
	if (identifier == '%')
		char_count += ft_putchar_count('%');
	return (char_count);
}
