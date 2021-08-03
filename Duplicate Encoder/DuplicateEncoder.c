/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DuplicateEncoder.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:51:44 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:51:47 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strnchr(const char *s, int c, int n) {
  int i;
  int len;
  char *p;
  
  if (!s)
    return (NULL);
  i = 0;
  len = strlen(s);
  p = (char *)s;
  while (i < n && i < len) {
    if (p[i] == c)
      return (p + i);
    i++;
  }
  return (NULL);
}

char *DuplicateEncoder(char *string)
{
  char *result;
  char *tmp;
  size_t len;
  size_t i;
  
  i = 0;
  len = strlen(string);
  tmp = calloc(len + 1, sizeof(char));
  while (i < len) {
  tmp[i] = tolower(string[i]);
    i++;
  }
  puts(tmp);
  i = 0;
  result = calloc(len + 1, sizeof(char));
  while (i < len) {
   if (i == 0 && strchr(tmp + i + 1, tmp[i]))
     result[i] = (char)')';
   else if (i > 0 && (strchr(tmp + i + 1, tmp[i]) || strnchr(tmp, tmp[i], i)))
     result[i] = (char)')';
    else
      result[i] = (char)'(';
    i++;
  }
  puts(result);
  return (result);
}
// output: )()())()(()()(
// output: (()())()(()()(
