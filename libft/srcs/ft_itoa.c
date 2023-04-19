/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:26:47 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/09 13:04:37 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calc_size_str(long n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10)
	{
		size++;
		n = n / 10;
	}
	return (size + 1);
}

void	ft_to_positive(char *str, int *i, long *nb)
{
	if (*nb < 0)
	{
		str[(*i)] = '-';
		*nb = -*nb;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;
	long	div;

	nb = (long)n;
	str = (char *)malloc(sizeof(char) * ft_calc_size_str(nb));
	if (!str)
		return (NULL);
	i = 0;
	ft_to_positive(str, &i, &nb);
	div = 1;
	while (nb / div > 9)
		div = div * 10;
	while (div)
	{
		str[i++] = nb / div + '0';
		nb = nb % div;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}
