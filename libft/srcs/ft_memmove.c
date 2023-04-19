/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:06:27 by alelomba          #+#    #+#             */
/*   Updated: 2023/03/19 12:21:43 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((const char *)src)[i - 1];
			i--;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
