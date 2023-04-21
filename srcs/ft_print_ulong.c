/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ulong.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:29:54 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 20:36:03 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putulong(unsigned long long nb, int *count)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
		(*count)++;
	}
	if (nb > 9)
		ft_putulong(nb / 10, count);
	(*count)++;
	write(1, &"0123456789"[nb % 10], 1);
}

int ft_print_ulong(unsigned long long nbr)
{
	int count;

	count = 0;
	ft_putulong(nbr, &count);
	return (count);
}