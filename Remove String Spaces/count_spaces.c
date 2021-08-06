/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   count_spaces.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:19:32 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:19:44 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t  count_spaces(const char *str_in) {
  size_t counter;
  size_t i;
  
  i = 0;
  counter = 0;
  while (str_in[i])
    {
    if (str_in[i] == ' ')
        counter++;
    i++;
  }
  return (counter);
}
char *no_space(const char *str_in) {
  size_t i;
  size_t j;
  char *dest;
  size_t malloc_size_reducer;
  
  i = 0;
  j = 0;
  malloc_size_reducer = count_spaces(str_in);
  dest = calloc(strlen(str_in), sizeof(char));
    while (str_in[i])
      {
      if (str_in[i] == ' ')
        {
        i++;
      }
      if (str_in[i] != ' ')
        {
      memmove(&dest[j], &str_in[i], 1);
      i++;
      j++;
      }
    }
  return (dest);
}
