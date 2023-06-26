/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:52:10 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/06/26 15:56:33 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int     ft_open(char *str, int i)
{
    int     fd;

    fd = 0;
    if (!i)
        fd = open (str, O_RDONLY);
    else if (i == 1)
         fd = open (str, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    else if (i == 2)
         fd = open (str, O_WRONLY | O_CREAT | O_APPEND, 0644);
    else if (i == 3)
         fd = open (str, O_RDONLY | O_CREAT, 0644);
    if (fd == -1)
         ft_putendl_fd(RED"Error: No such file or directory"RESET, 2);
        return (fd);
}




