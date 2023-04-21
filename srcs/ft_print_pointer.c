/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:59:16 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 20:01:37 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_pointer(unsigned long long nbr, int type)
{
	int count;

	count = 0;
	count = ft_putstr_count("0x");
	ft_puthex(nbr, &count, type);
	return (count);
}