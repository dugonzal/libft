/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:56:17 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/28 08:57:24 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*tmp;

	lst = NULL;
	new = ft_lstnew("bonjour");
	ft_lstadd_back(&lst, new);
	tmp = lst;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
*/
