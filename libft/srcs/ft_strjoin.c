/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:45:21 by alelomba          #+#    #+#             */
/*   Updated: 2023/03/19 17:19:22 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_slen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static void	ft_strcat(char *tab, const char *str)
{
	int	start;
	int	j;

	start = ft_slen(tab);
	j = 0;
	while (str[j])
	{
		tab[start + j] = str[j];
		j++;
	}
	tab[start + j] = '\0';
}

static char	*ft_strnew(int size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * size + 1);
	if (!result)
		return (NULL);
	ft_bzero(result, size + 1);
	return (result);
}

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*result;

	result = ft_strnew((ft_slen(s1) + ft_slen(s2)));
	if (!result)
		return (NULL);
	if (s1)
		ft_strcat(result, s1);
	if (s2)
		ft_strcat(result, s2);
	return (result);
}
