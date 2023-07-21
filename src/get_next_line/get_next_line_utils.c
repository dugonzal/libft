/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:56:09 by dugonzal          #+#    #+#             */
/*   Updated: 2023/07/21 13:57:50 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"

char *ft_strjoin_1(char *s1, char *s2)
{
  char *tmp;
  int i;
  int j;

  if (!s1 && !s2)
    return (NULL);
  tmp = (char *)malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
  if (!tmp)
    return (NULL);
  i = 0;
  tmp[i] = '\0';
  if (s1)
    while (s1[i])
    {
      tmp[i] = s1[i];
      i++;
    }
  j = 0;
  while (s2[j] != 0)
    tmp[i++] = s2[j++];
  tmp[i] = '\0';
  free (s1);
  return (tmp);
}
