/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   xo.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 13:57:50 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 13:57:56 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>
#include <string.h>

bool xo (const char* str)
{
  size_t x;
  size_t o;
  size_t i;
  size_t len;
  
  x = 0;
  o = 0;
  i = 0;
  len = strlen(str);
  while (i < len) {
    if (str[i] == 'o' || str[i] == 'O')
      o++;
    if (str[i] == 'x' || str[i] == 'X')
      x++;
    i++;
  }
  if (x == o)
    return (true);
  else
    return (false);
}
