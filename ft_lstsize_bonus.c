/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 08:32:15 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/28 08:39:17 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*tmp;

	lst = NULL;
	new = ft_lstnew("bonjour");
	ft_lstadd_front(&lst, new);
	tmp = lst;
	while (tmp)
	{
		ft_putendl(tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
*/
