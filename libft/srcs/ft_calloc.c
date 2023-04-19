/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:09:32 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/18 14:56:15 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (size != 0 && count != (count * size) / size)
		return (NULL);
	tab = malloc(count * size);
	if (!tab)
		return (0);
	ft_bzero(tab, count * size);
	return (tab);
}
