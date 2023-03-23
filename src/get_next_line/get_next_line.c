#include "get_next_line.h"

char *read_line(char *str, int fd)
{
  ssize_t rd;
  char *tmp;

  tmp = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
  if (!tmp)
    return (NULL);
  tmp[0] = '\0';  
  while (!find (tmp, '\n')) 
  {
    rd = read (fd, tmp, BUFFER_SIZE);
    if (rd == -1)
    {
      free (tmp);
      return (NULL);
    }
    tmp[rd] = '\0';
    str = ft_strjoin(str, tmp);
    if (rd <= 0)
      break ;
  }
  free (tmp);
  return (str);
}

char *get_line (char *str)
{
  char *tmp;
  int i;

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
  tmp[i] = '\0';
  return (tmp);
}

char *next_line(char *str)
{
  char *tmp;
  int i;
  int j;

  i = 0;
  while (str[i] != 0 && str[i] != '\n')
    i++;
  if (!str[i])
  {
    free (str);
    return (NULL);
  }
  tmp = (char *)malloc(sizeof(char) * ft_strlen(str) - i + 2);
  if (!tmp)
    return (NULL);
  j = 0;
  *tmp = '\0';
  while (str[i] != 0)
    tmp[j++] = str[++i];
  tmp[j] = '\0';
  return (tmp);
}

char *get_next_line(int fd)
{
  char *line;
  static char *str;

  if (fd < 0 || BUFFER_SIZE < 1 || read(fd, NULL, 0) < 0) // la condicion del read 
    return (NULL);
  str = read_line (str, fd);
  if (!str)
    return (NULL);
  line = get_line(str);
  str = next_line (str);
  return (line);
}


int main(void)
{
  char *line;

 while (((line = get_next_line (0)))){
  printf ("%s", line);
  free (line);
 }
  printf ("[%s]", line);
}

