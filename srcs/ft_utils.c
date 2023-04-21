/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:40:07 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/21 19:57:06 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_identifier(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'p' || c == 'x'
		|| c == 'X' || c == 'c' || c == 's' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_putchar_count(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr_count(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar_count(str[i]);
		i++;
	}
	return (i);
}

void	ft_puthex(unsigned long long nbr, int *count, int type)
{
	if (nbr >= 16)
		ft_puthex(nbr / 16, count, type);
	(*count)++;
	if (type == 0)
		write(1, &"0123456789abcdef"[nbr % 16], 1);
	else if (type == 1)
		write(1, &"0123456789ABCDEF"[nbr % 16], 1);
}