/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fferrer- <fferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:49:35 by fferrer-          #+#    #+#             */
/*   Updated: 2022/05/21 18:45:46 by fferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Iterate a list and applies a function to the content of each node
 * Makes a new list with those changes.
 *
 * @param {lst} List to iterate and modify
 * @param {f} Function to apply to the content of each node
 * @param {del} Function to delete de content of a node, if needed
 *
 * @return {t_list} Returns the lst list with the modified content
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*act_tlist;

	if (!*f && !*del && !lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		act_tlist = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&map, act_tlist);
		lst = lst->next;
	}
	return (map);
}
