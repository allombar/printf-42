/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:41:55 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/14 11:50:12 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	if (!dst || !src)
		return (ft_strlen(dst) + ft_strlen(src));
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = dst_len + ft_strlen(src) + 1;
	i = 0;
	while (dst_len + i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size > dst_len)
		size = dst_len;
	return (size + ft_strlen(src));
}
