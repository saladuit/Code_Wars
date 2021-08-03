/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   duplicate_count.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:54:01 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:54:07 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

char  *strrvchr(const char *s, int c, size_t n)
{
  size_t len;
  size_t i;
  char *p;
  
  i = 0;
  len = strlen(s);
  p = (char *)s;
  while (i < len && i < n)
  {
    if (p[i] == c)
      return (p + i);
     i++;
  }
  return (0);
}

size_t duplicate_count(const char *text) {
  size_t i;
  size_t count;
  size_t len;
  char *dup;
  
  if (!text)
    return (0);
  i = 0;
  count = 0;
  len = strlen(text);
  dup = calloc(len + 1, sizeof(char));
  dup = (char *)memcpy(dup, text, len);
  while (i < len)
  {
    dup[i] = toupper(dup[i]);
    i++;
  }
  i = 0;
  printf("\n%s\n", dup);
  while (i < len)
  {
    if (strchr(dup + i + 1, dup[i]) && !strrvchr(dup, dup[i], i))
    {
        count++;
    }
    printf("%zu\n", count);
    i++;
  }
  return (count);
}
