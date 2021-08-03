/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   disemvowel.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:01:33 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:01:40 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//solution must allocate all required memory
//and return a free-able buffer to the caller.
bool isvowel(int c) {
  if (c == 'a' ||c == 'e' ||c == 'i' ||c == 'u' ||c == 'o' || c == 'A' ||c == 'E' ||c == 'I' ||c == 'U' ||c == 'O')
    return true;
  else
    return false;
}

char *disemvowel(const char *str)
{
  size_t size;
  size_t i;
  size_t j;
  char *result;
  
  i = 0;
  j = 0;
  size = 0;
  while (str[i]) {
    if (!isvowel(str[i]))
      size++;
    i++;
  }
  i = 0;
  result = calloc(size + 1, sizeof(char));
  while (str[i]) {
    if (!isvowel(str[i])) {
      result[j] = str[i];
      j++;
      }
    i++;
  }
  return (result);
}
