/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:01:10 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 19:04:12 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnbr(int nbr, int *count)
{
	long	nb;
	
	nb = (long)nbr;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
		(*count)++;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	(*count)++;
	write(1, &"0123456789"[nb % 10], 1);
}

int ft_print_int(int nbr)
{
	int count;

	count = 0;
	ft_putnbr(nbr, &count);
	return (count);
}

