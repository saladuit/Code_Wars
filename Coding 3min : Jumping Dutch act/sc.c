/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sc.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:10:46 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:10:47 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char* sc(int n)
{
  char *result;
  size_t i;
  
  if (n <= 1)
    return (strdup(""));
  i = 0;
  if (n <= 6) {
    result = calloc((4 * n) + 4, sizeof(char));
    while (n - 1) {
      result[i] = 'A';
      result[i + 1] = 'a';
      result[i + 2] = '~';
      result[i + 3] = ' ';
      i += 4;
      n--;
    }
    result[i] = 'P';
    result[i + 1] = 'a';
    result[i + 2] = '!';
    result[i + 3] = ' ';
    result[i + 4] = 'A';
    result[i + 5] = 'a';
    result[i + 6] = '!';
    return (result);
  }
  if (n > 6) {
    result = calloc((4 * n) + 1, sizeof(char));
    while (n - 1) {
      result[i] = 'A';
      result[i + 1] = 'a';
      result[i + 2] = '~';
      result[i + 3] = ' ';
      i += 4;
      n--;
    }
    result[i] = 'P';
    result[i + 1] = 'a';
    result[i + 2] = '!';
    return (result);
  }
  return (NULL);
}
