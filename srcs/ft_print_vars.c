/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:51:36 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/19 18:11:03 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_vars(char identifier, va_list args)
{
	int char_count;
	
	char_count = 0;
	if (identifier == 's')
		ft_print_str(va_arg(args, char *));
	
	return (char_count);
}
