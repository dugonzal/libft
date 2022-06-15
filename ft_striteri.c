/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:32:07 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/21 11:33:35 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

void	ft_putchar(unsigned int i, char *c)
{
	write(i, c, 1);
}

/* int	main(void)
{
	char	*s = "hola";

	void	(*f)(unsigned int, char*) = &ft_putchar;

	ft_striteri(s, f);
	return (0);
} */
