/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 21:27:26 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/18 15:54:37 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*deb;
	t_list	*new;
	void	*content;

	if (!lst)
		return (0);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		deb = ft_lstnew(content);
		if (!deb)
		{
			del(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, deb);
		lst = lst->next;
	}
	return (new);
}
