/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   points.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: safoh <safoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/03 14:06:54 by safoh         #+#    #+#                 */
/*   Updated: 2021/08/03 14:06:55 by safoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int points(const char* const games[10]) {
  int result;
  size_t j;
  short x;
  short y;
  
  j = 0;
  result = 0;
  while (j < 10) {
    x = games[j][0];
    y = games[j][2];
    if (x > y)
      result += 3;
    else if (x == y)
      result += 1;
    j++;
  }
  return result;
}
