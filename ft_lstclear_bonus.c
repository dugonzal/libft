/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 19:15:41 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/01 19:15:43 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Deletes and free a node and next ones, ending in NULL
 *
 * @param {lst} List of nodes
 * @param {del} Function to delete a node
 */
void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}
