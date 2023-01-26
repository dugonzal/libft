/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:02:15 by ciclo-d           #+#    #+#             */
/*   Updated: 2022/12/12 20:01:34 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include "../../../include/libft.h"

int		ft_count(char *str);
char	*get_next_line(int fd);
char	*ft_find(char *full, char c);
char	*ft_join(char *full, char *buffer);
int		ft_slen(char *string, char c);

#endif
