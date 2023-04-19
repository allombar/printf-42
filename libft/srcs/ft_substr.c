/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 12:57:49 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/18 15:38:49 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strnew;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size < start)
		len = 0;
	else if (start + len >= size)
		len = size - start;
	strnew = (char *)malloc(sizeof(char) * (len + 1));
	if (!strnew)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
