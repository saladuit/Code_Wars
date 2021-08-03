/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_short.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:58:25 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:58:27 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

bool  ft_alnum(char c) {
  if (isdigit(c) || isalpha(c))
    return (true);
  else
    return (false);
}
ssize_t find_short(const char *s)
{
  size_t i;
  size_t len;
  ssize_t wordlen;
  ssize_t savelen;
  
  i = 0;
  wordlen = 0;
  savelen = -1;
  len = strlen(s);
  printf("wordlen:\n");
//  printf("\nsavelen:\n");
  while (i < len) {
    if (ft_alnum(s[i]) || s[i] == '\'') {
      wordlen++;
    }
    if (s[i] == ' ') {
      if (savelen > wordlen || savelen == -1)
        savelen = wordlen;
      wordlen = 0;
    }
    if (s[i] == '\0')
      return (savelen);
    i++;
    printf("%d,", wordlen);
//    printf("%zd,", savelen);
  }
  if (s[i] == '\0') {
    if (savelen > wordlen || savelen == -1)
      savelen = wordlen;
  }
  printf("\n");
  puts(s);
  return (savelen);
}
