/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:17:37 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/18 15:38:05 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strnew;

	if (!s || !f)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!strnew)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strnew[i] = f(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
