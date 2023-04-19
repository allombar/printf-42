/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:28:55 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/09 13:03:13 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *src, int size)
{
	char	*cpy;
	int		i;

	if (!src)
		return (NULL);
	cpy = (char *)malloc(sizeof(char) * size + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static int	ft_size_tab(const char *str, char charset)
{
	int	i;
	int	count_words;

	count_words = 0;
	if (str[0] != charset)
		count_words++;
	i = 1;
	while (str[i])
	{
		if (str[i] != charset && str[i - 1] == charset)
			count_words++;
		i++;
	}
	return (count_words);
}

static int	ft_free(char **tab, int index)
{
	while (index)
	{
		free(tab[index]);
		index--;
	}
	free(tab[index]);
	return (0);
}

static int	ft_write(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == charset)
			i++;
		else
		{
			j = 0;
			while (str[i + j] && str[i + j] != charset)
				j++;
			split[words] = ft_strndup(&str[i], j);
			if (!split[words])
				return (ft_free(split, words - 1));
			i = i + j;
			words++;
		}
	}
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_size_tab(str, c) + 1));
	if (!str || !tab)
		return (NULL);
	tab[ft_size_tab(str, c)] = 0;
	if (ft_write(tab, str, c) == 0)
		return (NULL);
	return (tab);
}
