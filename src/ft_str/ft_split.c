/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:59:37 by ciclo             #+#    #+#             */
/*   Updated: 2023/04/22 12:11:26 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns an array of strings obtained
/// by splitting ’s’ using the character ’c’ as a delimiter. The array must be
/// ended by a NULL pointer.
/// @param s The string to be split.
/// @param c The delimiter character.
/// @return The array of new strings resulting from the split. NULL if the

unsigned int count_words(const char *str, char c)
{
  char *tmp;
  int words;

  if (!str || !c)
		return (0);
  words = 0;
  tmp = (char *)str;
  while (*tmp && *tmp == c)
	tmp++;
  while (*tmp)
  {
	while (*tmp && *tmp != c)
	  tmp++;
	words++;
	while (*tmp && *tmp == c)
	  tmp++;
  }
  return (words);
}

unsigned int count_row(const char *str, char c)
{
  char *tmp;
  int	row;

  if (!str || !c)
	  return (0);
  tmp = (char *)str;
  while (*tmp && *tmp != c)
  {
	row++;
	tmp++;
  }
  return  (row);
}

char	**ft_split(const char *str, char c)
{
	char			**tmp;
	unsigned int	num_words;
	int				word;
	int				row;
	int				i;
	if (!str || !c)
		return (NULL);
	num_words = count_words(str, c);
	if (!num_words)
	  return (NULL);
	tmp = (char **)malloc(sizeof(char *) * num_words + 1);
	if (!tmp)
	  return (NULL);
	word = 0;
	i = 0;
	while (str[i] && str[i] == c)
	  i++;
	while (str[i])
	{
	  row = 0;
	  tmp[word] = (char *)malloc(sizeof(char) * count_row(&str[i], c));
	  if (!tmp[word])
		return (NULL);
	  while (str[i] && str[i] != c)
		tmp[word][row++] = str[i++];
	  tmp[word][row] = 0;
	  while (str[i] && str[i] == c)
		i++;
	  word++;
	}
	tmp[word] = NULL;
	return (tmp);
}
