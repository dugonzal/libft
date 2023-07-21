/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:51:50 by dugonzal          #+#    #+#             */
/*   Updated: 2023/07/21 14:46:34 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"

char	*read_line(char *str, int fd)
{
	ssize_t	rd;
	char	*tmp;

	tmp = (char *)ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	while (!search (tmp, '\n'))
	{
		rd = read (fd, tmp, BUFFER_SIZE);
		if (rd == -1)
		{
			free (tmp);
			return (NULL);
		}
		tmp[rd] = 0;
		if ((!str || str[0] == 0) && rd > 0)
			str = ft_strjoin("", tmp, 0);
		else
			str = ft_strjoin(str, tmp, 1);
		if (rd <= 0)
			break ;
	}
	free (tmp);
	return (str);
}

char	*get_line(char *str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (str[i] != 0 && str[i] != '\n')
		i++;
	if (!str[i])
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * i + 2);
	if (!tmp)
		return (NULL);
	i = 0;
	tmp[i] = '\0';
	while (str[i] != 0 && str[i] != '\n')
	{
		tmp[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		tmp[i] = '\n';
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}

char	*next_line(char *str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free (str);
		return (NULL);
	}
	tmp = (char *)ft_calloc(sizeof(char), ft_strlen(str) - i + 2);
	if (!tmp)
		return (NULL);
	j = 0;
	while (str[i])
		tmp[j++] = str[++i];
	tmp[j] = 0;
	free (str);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, NULL, 0) < 0)
		return (NULL);
	str = read_line (str, fd);
	if (!str)
		return (NULL);
	line = get_line(str);
	str = next_line (str);
	return (line);
}
