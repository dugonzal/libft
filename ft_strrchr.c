/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:24:09 by dugonzal          #+#    #+#             */
/*   Updated: 2022/06/09 15:02:46 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;
	char	*str;

	if (!s)
		return (0);
	str = (char *)s;
	len_s = ft_strlen(s) - 1;
	while (str[len_s] != c && len_s > 0)
		len_s--;
	if (str[len_s] == c)
		return (str + len_s);
	return (str);
}

int	main(void)
{
	printf("%s", ft_strrchr("amparo", 'a'));
}
